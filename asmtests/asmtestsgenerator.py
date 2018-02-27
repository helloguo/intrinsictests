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
    contents += "// The first loop runs the intrinsic for 1000000 * 10 times. Assume it takes time1\n"
    contents += "// The second loop runs the intrinsic for 1000000 * 20 times. Assume it takes time2\n"
    contents += "// The return value is the execution time for 1000000 * 10 times, which equals (time2 - time1)\n"
    contents += "#include <time.h>\n"
    contents += "#include <iostream>\n"

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

            func1 = "void __declspec(noinline) __cdecl run_" + instOpcode + "_" + parameters + "_10_times()\n"
            func1 += "{\n"
            func1 += "    __asm {\n"
            for i in range(0, 10):
                func1 += ("        " + line)
            func1 += "    };\n"
            func1 += "}\n"

            func2 = "void __declspec(noinline) __cdecl run_" + instOpcode + "_" + parameters + "_20_times()\n"
            func2 += "{\n"
            func2 += "    __asm {\n"
            for i in range(0, 20):
                func2 += ("        " + line)
            func2 += "    };\n"
            func2 += "}\n"

            intrinsicTestDefinition = "\n"
            intrinsicTestDefinition += func1
            intrinsicTestDefinition += func2

            intrinsicTestDefinition += "void  test_" + instOpcode + "_" + parameters + "()\n"
            intrinsicTestDefinition += "{\n"
            intrinsicTestDefinition += "    clock_t t1 = clock();\n"
            intrinsicTestDefinition += "    for (int iterator = 0; iterator < 1000000; iterator++)\n"
            intrinsicTestDefinition += "    {\n"
            intrinsicTestDefinition += ("        run_" + instOpcode + "_" + parameters + "_10_times();\n")
            intrinsicTestDefinition += "    }\n"
            intrinsicTestDefinition += "    clock_t t2 = clock();\n"
            intrinsicTestDefinition += "    for (int iterator = 0; iterator < 1000000; iterator++)\n"
            intrinsicTestDefinition += "    {\n"
            intrinsicTestDefinition += ("        run_" + instOpcode + "_" + parameters + "_20_times();\n")
            intrinsicTestDefinition += "    }\n"
            intrinsicTestDefinition += "    clock_t t3 = clock();\n"
            intrinsicTestDefinition += "    clock_t clk = (t3 - t2) - (t2 - t1);\n"
            intrinsicTestDefinition += ("    std::cout << \"" + instOpcode + " takes \"<< clk << std::endl;\n") 
            intrinsicTestDefinition += "}\n"
            contents += intrinsicTestDefinition
    
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