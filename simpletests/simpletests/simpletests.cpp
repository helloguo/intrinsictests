// simpletests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "sse.h"
#include "sse2.h"
#include "sse3.h"
#include "ssse3.h"
#include "sse41.h"

int main()
{
	run_all_sse_tests();
	run_all_sse2_tests();
	run_all_sse3_tests();
	run_all_ssse3_tests();
	run_all_sse41_tests();
    return 0;
}

