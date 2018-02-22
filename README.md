# intrinsictests
micro benchmarks to test intrinsic functions

The directory `intrinsiclists` contains the following intrinsics:
* SSE: `sse.txt`
* SSE2: `sse2.txt`
* SSE3: `sse3.txt`
* SSSE3: `ssse3.txt`
* SSE41: `sse41.txt`
 
The file `testsgenerator.py` reads intrinsic lists from above directory and generates test cases, which will be put in the directory `generatedfiles`. If you do not want to generate the test case for one specific intrinsic function, you need to go to the `intrinsiclists/xxx.txt` and comment the line of code with `# `.

Note: the generated files only contain the test cases. You still need to write your `main()` function or driver to call the tests.

Known issues:
* The test cases do not work correctly if the intrinsic functions need an `imm` value.   
