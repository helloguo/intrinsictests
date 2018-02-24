// This file is generated from testsgenerator.py
// The first loop runs the intrinsic for 1000000 * 10 times. Assume it takes time1
// The second loop runs the intrinsic for 1000000 * 20 times. Assume it takes time2
// The return value is the execution time for 1000000 * 10 times, which equals (time2 - time1)
#include <time.h>
#include <iostream>
#include "xmmintrin.h"
#include "emmintrin.h"
#include "pmmintrin.h"
#include "tmmintrin.h"
#include "smmintrin.h"
void test_mm_add_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
        ret = _mm_add_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_add_ps takes "<< clk << std::endl;
}
void test_mm_add_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
        ret = _mm_add_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_add_ss takes "<< clk << std::endl;
}
void test_mm_and_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
        ret = _mm_and_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_and_ps takes "<< clk << std::endl;
}
void test_mm_andnot_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
        ret = _mm_andnot_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_andnot_ps takes "<< clk << std::endl;
}
void test_mm_avg_pu16 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
        ret = _mm_avg_pu16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_avg_pu16 takes "<< clk << std::endl;
}
void test_mm_avg_pu8 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
        ret = _mm_avg_pu8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_avg_pu8 takes "<< clk << std::endl;
}
void test_mm_cmpeq_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
        ret = _mm_cmpeq_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpeq_ps takes "<< clk << std::endl;
}
void test_mm_cmpeq_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
        ret = _mm_cmpeq_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpeq_ss takes "<< clk << std::endl;
}
void test_mm_cmpge_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
        ret = _mm_cmpge_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpge_ps takes "<< clk << std::endl;
}
void test_mm_cmpge_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
        ret = _mm_cmpge_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpge_ss takes "<< clk << std::endl;
}
void test_mm_cmpgt_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
        ret = _mm_cmpgt_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpgt_ps takes "<< clk << std::endl;
}
void test_mm_cmpgt_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
        ret = _mm_cmpgt_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpgt_ss takes "<< clk << std::endl;
}
void test_mm_cmple_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
        ret = _mm_cmple_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmple_ps takes "<< clk << std::endl;
}
void test_mm_cmple_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
        ret = _mm_cmple_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmple_ss takes "<< clk << std::endl;
}
void test_mm_cmplt_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
        ret = _mm_cmplt_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmplt_ps takes "<< clk << std::endl;
}
void test_mm_cmplt_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
        ret = _mm_cmplt_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmplt_ss takes "<< clk << std::endl;
}
void test_mm_cmpneq_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
        ret = _mm_cmpneq_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpneq_ps takes "<< clk << std::endl;
}
void test_mm_cmpneq_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
        ret = _mm_cmpneq_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpneq_ss takes "<< clk << std::endl;
}
void test_mm_cmpnge_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
        ret = _mm_cmpnge_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnge_ps takes "<< clk << std::endl;
}
void test_mm_cmpnge_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
        ret = _mm_cmpnge_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnge_ss takes "<< clk << std::endl;
}
void test_mm_cmpngt_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
        ret = _mm_cmpngt_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpngt_ps takes "<< clk << std::endl;
}
void test_mm_cmpngt_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
        ret = _mm_cmpngt_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpngt_ss takes "<< clk << std::endl;
}
void test_mm_cmpnle_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
        ret = _mm_cmpnle_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnle_ps takes "<< clk << std::endl;
}
void test_mm_cmpnle_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
        ret = _mm_cmpnle_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnle_ss takes "<< clk << std::endl;
}
void test_mm_cmpnlt_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
        ret = _mm_cmpnlt_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnlt_ps takes "<< clk << std::endl;
}
void test_mm_cmpnlt_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
        ret = _mm_cmpnlt_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnlt_ss takes "<< clk << std::endl;
}
void test_mm_cmpord_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
        ret = _mm_cmpord_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpord_ps takes "<< clk << std::endl;
}
void test_mm_cmpord_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
        ret = _mm_cmpord_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpord_ss takes "<< clk << std::endl;
}
void test_mm_cmpunord_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
        ret = _mm_cmpunord_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpunord_ps takes "<< clk << std::endl;
}
void test_mm_cmpunord_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
        ret = _mm_cmpunord_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpunord_ss takes "<< clk << std::endl;
}
void test_mm_comieq_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
        ret = _mm_comieq_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comieq_ss takes "<< clk << std::endl;
}
void test_mm_comige_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
        ret = _mm_comige_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comige_ss takes "<< clk << std::endl;
}
void test_mm_comigt_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
        ret = _mm_comigt_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comigt_ss takes "<< clk << std::endl;
}
void test_mm_comile_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
        ret = _mm_comile_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comile_ss takes "<< clk << std::endl;
}
void test_mm_comilt_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
        ret = _mm_comilt_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comilt_ss takes "<< clk << std::endl;
}
void test_mm_comineq_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
        ret = _mm_comineq_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comineq_ss takes "<< clk << std::endl;
}
void test_mm_cvt_pi2ps (__m128 a, __m64 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
        ret = _mm_cvt_pi2ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvt_pi2ps takes "<< clk << std::endl;
}
void test_mm_cvt_ps2pi (__m128 a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
        ret = _mm_cvt_ps2pi(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvt_ps2pi takes "<< clk << std::endl;
}
void test_mm_cvt_si2ss (__m128 a, int b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
        ret = _mm_cvt_si2ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvt_si2ss takes "<< clk << std::endl;
}
void test_mm_cvt_ss2si (__m128 a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
        ret = _mm_cvt_ss2si(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvt_ss2si takes "<< clk << std::endl;
}
void test_mm_cvtpi16_ps (__m64 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
        ret = _mm_cvtpi16_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtpi16_ps takes "<< clk << std::endl;
}
void test_mm_cvtpi32_ps (__m128 a, __m64 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
        ret = _mm_cvtpi32_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtpi32_ps takes "<< clk << std::endl;
}
void test_mm_cvtpi32x2_ps (__m64 a, __m64 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
        ret = _mm_cvtpi32x2_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtpi32x2_ps takes "<< clk << std::endl;
}
void test_mm_cvtpi8_ps (__m64 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
        ret = _mm_cvtpi8_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtpi8_ps takes "<< clk << std::endl;
}
void test_mm_cvtps_pi16 (__m128 a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
        ret = _mm_cvtps_pi16(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtps_pi16 takes "<< clk << std::endl;
}
void test_mm_cvtps_pi32 (__m128 a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
        ret = _mm_cvtps_pi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtps_pi32 takes "<< clk << std::endl;
}
void test_mm_cvtps_pi8 (__m128 a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
        ret = _mm_cvtps_pi8(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtps_pi8 takes "<< clk << std::endl;
}
void test_mm_cvtpu16_ps (__m64 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
        ret = _mm_cvtpu16_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtpu16_ps takes "<< clk << std::endl;
}
void test_mm_cvtpu8_ps (__m64 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
        ret = _mm_cvtpu8_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtpu8_ps takes "<< clk << std::endl;
}
void test_mm_cvtsi32_ss (__m128 a, int b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
        ret = _mm_cvtsi32_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtsi32_ss takes "<< clk << std::endl;
}
void test_mm_cvtss_f32 (__m128 a) 
{
    float ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
        ret = _mm_cvtss_f32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtss_f32 takes "<< clk << std::endl;
}
void test_mm_cvtss_si32 (__m128 a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
        ret = _mm_cvtss_si32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtss_si32 takes "<< clk << std::endl;
}
void test_mm_cvtt_ps2pi (__m128 a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
        ret = _mm_cvtt_ps2pi(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtt_ps2pi takes "<< clk << std::endl;
}
void test_mm_cvtt_ss2si (__m128 a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
        ret = _mm_cvtt_ss2si(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtt_ss2si takes "<< clk << std::endl;
}
void test_mm_cvttps_pi32 (__m128 a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
        ret = _mm_cvttps_pi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvttps_pi32 takes "<< clk << std::endl;
}
void test_mm_cvttss_si32 (__m128 a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
        ret = _mm_cvttss_si32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvttss_si32 takes "<< clk << std::endl;
}
void test_mm_div_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
        ret = _mm_div_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_div_ps takes "<< clk << std::endl;
}
void test_mm_div_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
        ret = _mm_div_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_div_ss takes "<< clk << std::endl;
}
void test_mm_extract_pi16 (__m64 a, int imm8) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
        ret = _mm_extract_pi16(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_extract_pi16 takes "<< clk << std::endl;
}
void test_mm_insert_pi16 (__m64 a, int i, int imm8) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
        ret = _mm_insert_pi16(a,1,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_insert_pi16 takes "<< clk << std::endl;
}
void test_mm_load_ps (float const* mem_addr) 
{
    __m128 ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
        ret = _mm_load_ps(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_load_ps takes "<< clk << std::endl;
}
void test_mm_load_ps1 (float const* mem_addr) 
{
    __m128 ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
        ret = _mm_load_ps1(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_load_ps1 takes "<< clk << std::endl;
}
void test_mm_load_ss (float const* mem_addr) 
{
    __m128 ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
        ret = _mm_load_ss(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_load_ss takes "<< clk << std::endl;
}
void test_mm_load1_ps (float const* mem_addr) 
{
    __m128 ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
        ret = _mm_load1_ps(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_load1_ps takes "<< clk << std::endl;
}
void test_mm_loadh_pi (__m128 a, __m64 const* mem_addr) 
{
    __m128 ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
        ret = _mm_loadh_pi(a,mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_loadh_pi takes "<< clk << std::endl;
}
void test_mm_loadl_pi (__m128 a, __m64 const* mem_addr) 
{
    __m128 ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
        ret = _mm_loadl_pi(a,mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_loadl_pi takes "<< clk << std::endl;
}
void test_mm_loadr_ps (float const* mem_addr) 
{
    __m128 ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
        ret = _mm_loadr_ps(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_loadr_ps takes "<< clk << std::endl;
}
void test_mm_loadu_ps (float const* mem_addr) 
{
    __m128 ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
        ret = _mm_loadu_ps(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_loadu_ps takes "<< clk << std::endl;
}
void test_mm_maskmove_si64 (__m64 a, __m64 mask, char* mem_addr) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
        _mm_maskmove_si64(a,mask,mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_maskmove_si64 takes "<< clk << std::endl;
}
void test_m_maskmovq (__m64 a, __m64 mask, char* mem_addr) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
        _m_maskmovq(a,mask,mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_maskmovq takes "<< clk << std::endl;
}
void test_mm_max_pi16 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
        ret = _mm_max_pi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_pi16 takes "<< clk << std::endl;
}
void test_mm_max_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
        ret = _mm_max_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_ps takes "<< clk << std::endl;
}
void test_mm_max_pu8 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
        ret = _mm_max_pu8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_pu8 takes "<< clk << std::endl;
}
void test_mm_max_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
        ret = _mm_max_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_ss takes "<< clk << std::endl;
}
void test_mm_min_pi16 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
        ret = _mm_min_pi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_pi16 takes "<< clk << std::endl;
}
void test_mm_min_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
        ret = _mm_min_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_ps takes "<< clk << std::endl;
}
void test_mm_min_pu8 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
        ret = _mm_min_pu8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_pu8 takes "<< clk << std::endl;
}
void test_mm_min_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
        ret = _mm_min_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_ss takes "<< clk << std::endl;
}
void test_mm_move_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
        ret = _mm_move_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_move_ss takes "<< clk << std::endl;
}
void test_mm_movehl_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
        ret = _mm_movehl_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_movehl_ps takes "<< clk << std::endl;
}
void test_mm_movelh_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
        ret = _mm_movelh_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_movelh_ps takes "<< clk << std::endl;
}
void test_mm_movemask_pi8 (__m64 a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
        ret = _mm_movemask_pi8(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_movemask_pi8 takes "<< clk << std::endl;
}
void test_mm_movemask_ps (__m128 a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
        ret = _mm_movemask_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_movemask_ps takes "<< clk << std::endl;
}
void test_mm_mul_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
        ret = _mm_mul_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mul_ps takes "<< clk << std::endl;
}
void test_mm_mul_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
        ret = _mm_mul_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mul_ss takes "<< clk << std::endl;
}
void test_mm_mulhi_pu16 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
        ret = _mm_mulhi_pu16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mulhi_pu16 takes "<< clk << std::endl;
}
void test_mm_or_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
        ret = _mm_or_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_or_ps takes "<< clk << std::endl;
}
void test_m_pavgb (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
        ret = _m_pavgb(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_pavgb takes "<< clk << std::endl;
}
void test_m_pavgw (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
        ret = _m_pavgw(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_pavgw takes "<< clk << std::endl;
}
void test_m_pextrw (__m64 a, int imm8) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
        ret = _m_pextrw(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_pextrw takes "<< clk << std::endl;
}
void test_m_pinsrw (__m64 a, int i, int imm8) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
        ret = _m_pinsrw(a,1,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_pinsrw takes "<< clk << std::endl;
}
void test_m_pmaxsw (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
        ret = _m_pmaxsw(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_pmaxsw takes "<< clk << std::endl;
}
void test_m_pmaxub (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
        ret = _m_pmaxub(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_pmaxub takes "<< clk << std::endl;
}
void test_m_pminsw (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
        ret = _m_pminsw(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_pminsw takes "<< clk << std::endl;
}
void test_m_pminub (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
        ret = _m_pminub(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_pminub takes "<< clk << std::endl;
}
void test_m_pmovmskb (__m64 a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
        ret = _m_pmovmskb(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_pmovmskb takes "<< clk << std::endl;
}
void test_m_pmulhuw (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
        ret = _m_pmulhuw(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_pmulhuw takes "<< clk << std::endl;
}
void test_mm_prefetch (char const* p, int i) 
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
        _mm_prefetch(p,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_prefetch takes "<< clk << std::endl;
}
void test_m_psadbw (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
        ret = _m_psadbw(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_psadbw takes "<< clk << std::endl;
}
void test_m_pshufw (__m64 a, int imm8) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
        ret = _m_pshufw(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_m_pshufw takes "<< clk << std::endl;
}
void test_mm_rcp_ps (__m128 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
        ret = _mm_rcp_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_rcp_ps takes "<< clk << std::endl;
}
void test_mm_rcp_ss (__m128 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
        ret = _mm_rcp_ss(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_rcp_ss takes "<< clk << std::endl;
}
void test_mm_rsqrt_ps (__m128 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
        ret = _mm_rsqrt_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_rsqrt_ps takes "<< clk << std::endl;
}
void test_mm_rsqrt_ss (__m128 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
        ret = _mm_rsqrt_ss(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_rsqrt_ss takes "<< clk << std::endl;
}
void test_mm_sad_pu8 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
        ret = _mm_sad_pu8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sad_pu8 takes "<< clk << std::endl;
}
void test_MM_SET_EXCEPTION_MASK (unsigned int a) 
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
        _MM_SET_EXCEPTION_MASK(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_MM_SET_EXCEPTION_MASK takes "<< clk << std::endl;
}
void test_MM_SET_EXCEPTION_STATE (unsigned int a) 
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
        _MM_SET_EXCEPTION_STATE(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_MM_SET_EXCEPTION_STATE takes "<< clk << std::endl;
}
void test_MM_SET_FLUSH_ZERO_MODE (unsigned int a) 
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
        _MM_SET_FLUSH_ZERO_MODE(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_MM_SET_FLUSH_ZERO_MODE takes "<< clk << std::endl;
}
void test_mm_set_ps (float e3, float e2, float e1, float e0) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
        ret = _mm_set_ps(e3,e2,e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set_ps takes "<< clk << std::endl;
}
void test_mm_set_ps1 (float a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
        ret = _mm_set_ps1(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set_ps1 takes "<< clk << std::endl;
}
void test_MM_SET_ROUNDING_MODE (unsigned int a) 
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
        _MM_SET_ROUNDING_MODE(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_MM_SET_ROUNDING_MODE takes "<< clk << std::endl;
}
void test_mm_set_ss (float a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
        ret = _mm_set_ss(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set_ss takes "<< clk << std::endl;
}
void test_mm_set1_ps (float a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
        ret = _mm_set1_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set1_ps takes "<< clk << std::endl;
}
void test_mm_setcsr (unsigned int a) 
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
        _mm_setcsr(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_setcsr takes "<< clk << std::endl;
}
void test_mm_setr_ps (float e3, float e2, float e1, float e0) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
        ret = _mm_setr_ps(e3,e2,e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_setr_ps takes "<< clk << std::endl;
}
void test_mm_shuffle_pi16 (__m64 a, int imm8) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
        ret = _mm_shuffle_pi16(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_shuffle_pi16 takes "<< clk << std::endl;
}
void test_mm_shuffle_ps (__m128 a, __m128 b, unsigned int imm8) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
        ret = _mm_shuffle_ps(a,b,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_shuffle_ps takes "<< clk << std::endl;
}
void test_mm_sqrt_ps (__m128 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
        ret = _mm_sqrt_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sqrt_ps takes "<< clk << std::endl;
}
void test_mm_sqrt_ss (__m128 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
        ret = _mm_sqrt_ss(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sqrt_ss takes "<< clk << std::endl;
}
void test_mm_store_ps (float* mem_addr, __m128 a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
        _mm_store_ps(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_store_ps takes "<< clk << std::endl;
}
void test_mm_store_ps1 (float* mem_addr, __m128 a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
        _mm_store_ps1(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_store_ps1 takes "<< clk << std::endl;
}
void test_mm_store_ss (float* mem_addr, __m128 a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
        _mm_store_ss(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_store_ss takes "<< clk << std::endl;
}
void test_mm_store1_ps (float* mem_addr, __m128 a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
        _mm_store1_ps(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_store1_ps takes "<< clk << std::endl;
}
void test_mm_storeh_pi (__m64* mem_addr, __m128 a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
        _mm_storeh_pi(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_storeh_pi takes "<< clk << std::endl;
}
void test_mm_storel_pi (__m64* mem_addr, __m128 a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
        _mm_storel_pi(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_storel_pi takes "<< clk << std::endl;
}
void test_mm_storer_ps (float* mem_addr, __m128 a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
        _mm_storer_ps(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_storer_ps takes "<< clk << std::endl;
}
void test_mm_storeu_ps (float* mem_addr, __m128 a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
        _mm_storeu_ps(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_storeu_ps takes "<< clk << std::endl;
}
void test_mm_stream_pi (__m64* mem_addr, __m64 a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
        _mm_stream_pi(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_stream_pi takes "<< clk << std::endl;
}
void test_mm_stream_ps (float* mem_addr, __m128 a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
        _mm_stream_ps(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_stream_ps takes "<< clk << std::endl;
}
void test_mm_sub_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
        ret = _mm_sub_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sub_ps takes "<< clk << std::endl;
}
void test_mm_sub_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
        ret = _mm_sub_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sub_ss takes "<< clk << std::endl;
}
void test_mm_ucomieq_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
        ret = _mm_ucomieq_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomieq_ss takes "<< clk << std::endl;
}
void test_mm_ucomige_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
        ret = _mm_ucomige_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomige_ss takes "<< clk << std::endl;
}
void test_mm_ucomigt_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
        ret = _mm_ucomigt_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomigt_ss takes "<< clk << std::endl;
}
void test_mm_ucomile_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
        ret = _mm_ucomile_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomile_ss takes "<< clk << std::endl;
}
void test_mm_ucomilt_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
        ret = _mm_ucomilt_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomilt_ss takes "<< clk << std::endl;
}
void test_mm_ucomineq_ss (__m128 a, __m128 b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
        ret = _mm_ucomineq_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomineq_ss takes "<< clk << std::endl;
}
void test_mm_unpackhi_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
        ret = _mm_unpackhi_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpackhi_ps takes "<< clk << std::endl;
}
void test_mm_unpacklo_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
        ret = _mm_unpacklo_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpacklo_ps takes "<< clk << std::endl;
}
void test_mm_xor_ps (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
        ret = _mm_xor_ps(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_xor_ps takes "<< clk << std::endl;
}
