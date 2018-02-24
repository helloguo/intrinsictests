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
void test_mm_abs_epi16 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
        ret = _mm_abs_epi16(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_abs_epi16 takes "<< clk << std::endl;
}
void test_mm_abs_epi32 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
        ret = _mm_abs_epi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_abs_epi32 takes "<< clk << std::endl;
}
void test_mm_abs_epi8 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
        ret = _mm_abs_epi8(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_abs_epi8 takes "<< clk << std::endl;
}
void test_mm_abs_pi16 (__m64 a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
        ret = _mm_abs_pi16(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_abs_pi16 takes "<< clk << std::endl;
}
void test_mm_abs_pi32 (__m64 a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
        ret = _mm_abs_pi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_abs_pi32 takes "<< clk << std::endl;
}
void test_mm_abs_pi8 (__m64 a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
        ret = _mm_abs_pi8(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_abs_pi8 takes "<< clk << std::endl;
}
void test_mm_alignr_epi8 (__m128i a, __m128i b, int count) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
        ret = _mm_alignr_epi8(a,b,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_alignr_epi8 takes "<< clk << std::endl;
}
void test_mm_alignr_pi8 (__m64 a, __m64 b, int count) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
        ret = _mm_alignr_pi8(a,b,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_alignr_pi8 takes "<< clk << std::endl;
}
void test_mm_hadd_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
        ret = _mm_hadd_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hadd_epi16 takes "<< clk << std::endl;
}
void test_mm_hadd_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
        ret = _mm_hadd_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hadd_epi32 takes "<< clk << std::endl;
}
void test_mm_hadd_pi16 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
        ret = _mm_hadd_pi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hadd_pi16 takes "<< clk << std::endl;
}
void test_mm_hadd_pi32 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
        ret = _mm_hadd_pi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hadd_pi32 takes "<< clk << std::endl;
}
void test_mm_hadds_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
        ret = _mm_hadds_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hadds_epi16 takes "<< clk << std::endl;
}
void test_mm_hadds_pi16 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
        ret = _mm_hadds_pi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hadds_pi16 takes "<< clk << std::endl;
}
void test_mm_hsub_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
        ret = _mm_hsub_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hsub_epi16 takes "<< clk << std::endl;
}
void test_mm_hsub_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
        ret = _mm_hsub_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hsub_epi32 takes "<< clk << std::endl;
}
void test_mm_hsub_pi16 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
        ret = _mm_hsub_pi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hsub_pi16 takes "<< clk << std::endl;
}
void test_mm_hsub_pi32 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
        ret = _mm_hsub_pi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hsub_pi32 takes "<< clk << std::endl;
}
void test_mm_hsubs_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
        ret = _mm_hsubs_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hsubs_epi16 takes "<< clk << std::endl;
}
void test_mm_hsubs_pi16 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
        ret = _mm_hsubs_pi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_hsubs_pi16 takes "<< clk << std::endl;
}
void test_mm_maddubs_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
        ret = _mm_maddubs_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_maddubs_epi16 takes "<< clk << std::endl;
}
void test_mm_maddubs_pi16 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
        ret = _mm_maddubs_pi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_maddubs_pi16 takes "<< clk << std::endl;
}
void test_mm_mulhrs_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
        ret = _mm_mulhrs_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mulhrs_epi16 takes "<< clk << std::endl;
}
void test_mm_mulhrs_pi16 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
        ret = _mm_mulhrs_pi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mulhrs_pi16 takes "<< clk << std::endl;
}
void test_mm_shuffle_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
        ret = _mm_shuffle_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_shuffle_epi8 takes "<< clk << std::endl;
}
void test_mm_shuffle_pi8 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
        ret = _mm_shuffle_pi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_shuffle_pi8 takes "<< clk << std::endl;
}
void test_mm_sign_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
        ret = _mm_sign_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sign_epi16 takes "<< clk << std::endl;
}
void test_mm_sign_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
        ret = _mm_sign_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sign_epi32 takes "<< clk << std::endl;
}
void test_mm_sign_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
        ret = _mm_sign_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sign_epi8 takes "<< clk << std::endl;
}
void test_mm_sign_pi16 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
        ret = _mm_sign_pi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sign_pi16 takes "<< clk << std::endl;
}
void test_mm_sign_pi32 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
        ret = _mm_sign_pi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sign_pi32 takes "<< clk << std::endl;
}
void test_mm_sign_pi8 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
        ret = _mm_sign_pi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sign_pi8 takes "<< clk << std::endl;
}
