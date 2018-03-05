##
## This script generates micro benchmarks tests from ./intrinsiclists
## If you do not want to generate test for one specific intrinsic, 
## go to ./intrinsiclists/xxx.txt and comment the line with "# "
##
import os
from os import path
import re
import sys

def getIntrinsicLevels(intrinsicListsDirectory):
    intrinsicLevels = []
    for singleFile in os.listdir(intrinsicListsDirectory):
        intrinsicLevel = singleFile.split(".")[0]
        intrinsicLevels.append(intrinsicLevel)
    return intrinsicLevels

def genHeaderFiles(intrinsicLevel, intrinsicListsDirectory, generatedFilesDirectory):
    intrinsicDefFile = intrinsicListsDirectory + "/" + intrinsicLevel + ".txt"

    contents = "// This file is generated from testsgenerator.py\n"
    contents += "// The first loop runs the intrinsic for 1000000 * 5 times. Assume it takes time1\n"
    contents += "// The second loop runs the intrinsic for 1000000 * 105 times. Assume it takes time2\n"
    contents += "// The return value is the execution time for 1000000 * 100 times, which equals (time2 - time1)\n"
    contents += "#include <time.h>\n"
    contents += "#include <iostream>\n"

    runAllTests = "void run_all_" + intrinsicLevel + "_tests()\n"
    runAllTests += "{\n"
    
    with open(intrinsicDefFile,'r') as f:
        for line in f:
            if line.startswith('#'):
                print(line)
                continue

            elements = line.split()
            # elements[0]: hardware instruction opcode
            instOpcode = elements[0]
            parameters = ""
            for i in range(1, len(elements)):
                element = elements[i]
                if element.endswith(','):
                    element = element[:-1]
                parameters += element

            func1 = "void __declspec(noinline) __cdecl run_" + instOpcode + "_" + parameters + "_5_times(int * addr)\n"
            func1 += "{\n"
            func1 += "    __asm {\n"
            func1 += ("        mov eax, addr\n")
            func1 += ("        movdqu xmm0, XMMWORD PTR[eax]\n")
            func1 += ("        movdqu xmm1, xmm0\n")
            func1 += ("        movdqu xmm2, xmm0\n")
            for i in range(0, 5):
                func1 += ("        " + line)
            func1 += "    };\n"
            func1 += "}\n"

            func2 = "void __declspec(noinline) __cdecl run_" + instOpcode + "_" + parameters + "_105_times(int * addr)\n"
            func2 += "{\n"
            func2 += "    __asm {\n"
            func2 += ("        mov eax, addr\n")
            func2 += ("        movdqu xmm0, XMMWORD PTR[eax]\n")
            func2 += ("        movdqu xmm1, xmm0\n")
            func2 += ("        movdqu xmm2, xmm0\n")
            for i in range(0, 105):
                func2 += ("        " + line)
            func2 += "    };\n"
            func2 += "}\n"

            intrinsicTestDefinition = "\n"
            intrinsicTestDefinition += func1
            intrinsicTestDefinition += func2

            intrinsicTestDefinition += "void  test_" + instOpcode + "_" + parameters + "()\n"
            intrinsicTestDefinition += "{\n"
            intrinsicTestDefinition += "    int foo [4] = {10, 20, 30, 40};\n"
            intrinsicTestDefinition += "    clock_t t1 = clock();\n"
            intrinsicTestDefinition += "    for (int iterator = 0; iterator < 1000000; iterator++)\n"
            intrinsicTestDefinition += "    {\n"
            intrinsicTestDefinition += ("        run_" + instOpcode + "_" + parameters + "_5_times(foo);\n")
            intrinsicTestDefinition += "    }\n"
            intrinsicTestDefinition += "    clock_t t2 = clock();\n"
            intrinsicTestDefinition += "    for (int iterator = 0; iterator < 1000000; iterator++)\n"
            intrinsicTestDefinition += "    {\n"
            intrinsicTestDefinition += ("        run_" + instOpcode + "_" + parameters + "_105_times(foo);\n")
            intrinsicTestDefinition += "    }\n"
            intrinsicTestDefinition += "    clock_t t3 = clock();\n"
            intrinsicTestDefinition += "    clock_t clk = (t3 - t2) - (t2 - t1);\n"
            intrinsicTestDefinition += ("    std::cout << \"" + instOpcode + " takes \"<< clk << std::endl;\n") 
            intrinsicTestDefinition += "}\n"
            contents += intrinsicTestDefinition
            runAllTests += "    test_" + instOpcode + "_" + parameters + "();\n"
    
    runAllTests += "}\n"
    contents += runAllTests
    headerFileName = generatedFilesDirectory + "/" + intrinsicLevel + ".h"
    with open(headerFileName,'w') as f:
        f.write(contents)

def genTests(intrinsicListsDirectory, generatedFilesDirectory):
    intrinsicLevels = getIntrinsicLevels(intrinsicListsDirectory)
    for intrinsicLevel in intrinsicLevels:
        genHeaderFiles(intrinsicLevel, intrinsicListsDirectory, generatedFilesDirectory)

intrinsicListsDirectory = "./intrinsiclists"
generatedFilesDirectory = "./generatedfiles"
genTests(intrinsicListsDirectory, generatedFilesDirectory)