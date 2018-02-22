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
    contents += "#include \"xmmintrin.h\"\n"
    contents += "#include \"emmintrin.h\"\n"
    contents += "#include \"pmmintrin.h\"\n"
    contents += "#include \"tmmintrin.h\"\n"
    contents += "#include \"smmintrin.h\"\n"

    with open(intrinsicDefFile,'r') as f:
        for line in f:
            if line.startswith('#'):
                print(line)
                continue

            elements = line.split()
            # elements[0]: return type
            # elements[1]: intrinsic name
            # elements[...]: parameter type and name
            returnType = elements[0]
            intrinsicName = elements[1]
            parameters = []
            # parameters end with ',' or ')'
            for i in range(2, len(elements)):
                element = elements[i]
                if element.endswith(',') or element.endswith(')'):
                    parameters.append(element[:-1])

            if returnType != 'void':
                callIntrinsic = "ret = " + intrinsicName + "("
            else:
                print(returnType)
                callIntrinsic = intrinsicName + "("
            if len(parameters) == 0:
                callIntrinsic += ");"
            elif len(parameters) == 1:
                callIntrinsic += (parameters[0] + ");")
            else:
                for i in range(0, len(parameters)):
                    callIntrinsic += parameters[i]
                    if i == (len(parameters)-1):
                        callIntrinsic += ");"
                    else:
                        callIntrinsic += ","
            
            intrinsicTestDefinition = "void test"
            for i in range(1, len(elements)):
                intrinsicTestDefinition += (elements[i] + " ")
            intrinsicTestDefinition += "\n{\n"
            if returnType != "void":
                intrinsicTestDefinition += ("    " + returnType + " ret;\n")
            intrinsicTestDefinition += "    clock_t t1 = clock();\n"
            intrinsicTestDefinition += "    for (int i = 0; i < 1000000; i++)\n"
            intrinsicTestDefinition += "    {\n"
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += "    }\n"
            intrinsicTestDefinition += "    clock_t t2 = clock();\n"
            intrinsicTestDefinition += "    for (int i = 0; i < 1000000; i++)\n"
            intrinsicTestDefinition += "    {\n"
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += ("        " + callIntrinsic + "\n")
            intrinsicTestDefinition += "    }\n"
            intrinsicTestDefinition += "    clock_t t3 = clock();\n"
            intrinsicTestDefinition += "    clock_t clk = (t3 - t2) - (t2 - t1);\n"
            intrinsicTestDefinition += ("    std::cout << \"" + intrinsicName + " takes \"<< clk << std::endl;\n") 
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