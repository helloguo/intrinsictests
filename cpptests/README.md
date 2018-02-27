# intrinsictests
micro benchmarks to test intrinsic functions

The directory `intrinsiclists` contains the following intrinsics:
* SSE: `sse.txt`
* SSE2: `sse2.txt`
* SSE3: `sse3.txt`
* SSSE3: `ssse3.txt`
* SSE41: `sse41.txt`
 
The file `cpptestsgenerator.py` reads intrinsic lists from above directory and generates test cases, which will be put in the directory `generatedfiles`. If you do not want to generate the test case for one specific intrinsic function, you need to go to the `intrinsiclists/xxx.txt` and comment the line of code with `# `.

Note: the generated files only contain the test cases. You still need to write your `main()` function or driver to call the tests. 

The following intrinsic functions DO NOT have test case:
* SSE
    * _mm_cvtsi64_ss: x64 only
    * _mm_cvtss_si64: x64 only
    * _mm_cvttss_si64: x64 only
    * _MM_GET_EXCEPTION_MASK
    * _MM_GET_EXCEPTION_STATE
    * _MM_GET_FLUSH_ZERO_MODE
    * _MM_GET_ROUNDING_MODE
    * _mm_getcsr
    * _mm_setzero_ps
    * _mm_sfence
    * _MM_TRANSPOSE4_PS
    * _mm_undefined_ps
* SSE2
    * _mm_cvtsd_si64: x64 only
    * _mm_cvtsd_si64x: x64 only
    * _mm_cvtsi128_si64: x64 only
    * _mm_cvtsi128_si64x: x64 only
    * _mm_cvtsi64_sd: x64 only
    * _mm_cvtsi64_si128: x64 only
    * _mm_cvtsi64x_sd: x64 only
    * _mm_cvtsi64x_si128: x64 only
    * _mm_cvttsd_si64: x64 only
    * _mm_cvttsd_si64x: x64 only
    * _mm_load_pd1
    * _mm_set_pd1
    * _mm_store_pd1
    * _mm_stream_si64: x64 only
    * _mm_lfence
    * _mm_mfence
    * _mm_pause
    * _mm_setzero_pd
    * _mm_setzero_si128
    * _mm_undefined_pd
    * _mm_undefined_si128
* SSE3
* SSSE3
* SSE4.1
    * _mm_extract_epi64: x64 only
    * _mm_insert_epi64: x64 only

NOTE: The tests for memory related intrinsic functions such as load and store need manually fix. You need to set the a meaningful address to `mem_addr`.