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
void test_mm_add_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
        ret = _mm_add_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_add_epi16 takes "<< clk << std::endl;
}
void test_mm_add_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
        ret = _mm_add_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_add_epi32 takes "<< clk << std::endl;
}
void test_mm_add_epi64 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
        ret = _mm_add_epi64(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_add_epi64 takes "<< clk << std::endl;
}
void test_mm_add_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
        ret = _mm_add_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_add_epi8 takes "<< clk << std::endl;
}
void test_mm_add_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
        ret = _mm_add_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_add_pd takes "<< clk << std::endl;
}
void test_mm_add_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
        ret = _mm_add_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_add_sd takes "<< clk << std::endl;
}
void test_mm_add_si64 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
        ret = _mm_add_si64(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_add_si64 takes "<< clk << std::endl;
}
void test_mm_adds_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
        ret = _mm_adds_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_adds_epi16 takes "<< clk << std::endl;
}
void test_mm_adds_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
        ret = _mm_adds_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_adds_epi8 takes "<< clk << std::endl;
}
void test_mm_adds_epu16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
        ret = _mm_adds_epu16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_adds_epu16 takes "<< clk << std::endl;
}
void test_mm_adds_epu8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
        ret = _mm_adds_epu8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_adds_epu8 takes "<< clk << std::endl;
}
void test_mm_and_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
        ret = _mm_and_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_and_pd takes "<< clk << std::endl;
}
void test_mm_and_si128 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
        ret = _mm_and_si128(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_and_si128 takes "<< clk << std::endl;
}
void test_mm_andnot_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
        ret = _mm_andnot_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_andnot_pd takes "<< clk << std::endl;
}
void test_mm_andnot_si128 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
        ret = _mm_andnot_si128(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_andnot_si128 takes "<< clk << std::endl;
}
void test_mm_avg_epu16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
        ret = _mm_avg_epu16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_avg_epu16 takes "<< clk << std::endl;
}
void test_mm_avg_epu8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
        ret = _mm_avg_epu8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_avg_epu8 takes "<< clk << std::endl;
}
void test_mm_bslli_si128 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
        ret = _mm_bslli_si128(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_bslli_si128 takes "<< clk << std::endl;
}
void test_mm_bsrli_si128 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
        ret = _mm_bsrli_si128(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_bsrli_si128 takes "<< clk << std::endl;
}
void test_mm_castpd_ps (__m128d a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
        ret = _mm_castpd_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_castpd_ps takes "<< clk << std::endl;
}
void test_mm_castpd_si128 (__m128d a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
        ret = _mm_castpd_si128(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_castpd_si128 takes "<< clk << std::endl;
}
void test_mm_castps_pd (__m128 a) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
        ret = _mm_castps_pd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_castps_pd takes "<< clk << std::endl;
}
void test_mm_castps_si128 (__m128 a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
        ret = _mm_castps_si128(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_castps_si128 takes "<< clk << std::endl;
}
void test_mm_castsi128_pd (__m128i a) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
        ret = _mm_castsi128_pd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_castsi128_pd takes "<< clk << std::endl;
}
void test_mm_castsi128_ps (__m128i a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
        ret = _mm_castsi128_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_castsi128_ps takes "<< clk << std::endl;
}
void test_mm_clflush (void const* p) 
{
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
        _mm_clflush(p);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_clflush takes "<< clk << std::endl;
}
void test_mm_cmpeq_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
        ret = _mm_cmpeq_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpeq_epi16 takes "<< clk << std::endl;
}
void test_mm_cmpeq_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
        ret = _mm_cmpeq_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpeq_epi32 takes "<< clk << std::endl;
}
void test_mm_cmpeq_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
        ret = _mm_cmpeq_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpeq_epi8 takes "<< clk << std::endl;
}
void test_mm_cmpeq_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
        ret = _mm_cmpeq_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpeq_pd takes "<< clk << std::endl;
}
void test_mm_cmpeq_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
        ret = _mm_cmpeq_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpeq_sd takes "<< clk << std::endl;
}
void test_mm_cmpge_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
        ret = _mm_cmpge_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpge_pd takes "<< clk << std::endl;
}
void test_mm_cmpge_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
        ret = _mm_cmpge_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpge_sd takes "<< clk << std::endl;
}
void test_mm_cmpgt_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
        ret = _mm_cmpgt_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpgt_epi16 takes "<< clk << std::endl;
}
void test_mm_cmpgt_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
        ret = _mm_cmpgt_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpgt_epi32 takes "<< clk << std::endl;
}
void test_mm_cmpgt_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
        ret = _mm_cmpgt_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpgt_epi8 takes "<< clk << std::endl;
}
void test_mm_cmpgt_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
        ret = _mm_cmpgt_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpgt_pd takes "<< clk << std::endl;
}
void test_mm_cmpgt_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
        ret = _mm_cmpgt_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpgt_sd takes "<< clk << std::endl;
}
void test_mm_cmple_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
        ret = _mm_cmple_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmple_pd takes "<< clk << std::endl;
}
void test_mm_cmple_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
        ret = _mm_cmple_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmple_sd takes "<< clk << std::endl;
}
void test_mm_cmplt_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
        ret = _mm_cmplt_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmplt_epi16 takes "<< clk << std::endl;
}
void test_mm_cmplt_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
        ret = _mm_cmplt_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmplt_epi32 takes "<< clk << std::endl;
}
void test_mm_cmplt_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
        ret = _mm_cmplt_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmplt_epi8 takes "<< clk << std::endl;
}
void test_mm_cmplt_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
        ret = _mm_cmplt_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmplt_pd takes "<< clk << std::endl;
}
void test_mm_cmplt_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
        ret = _mm_cmplt_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmplt_sd takes "<< clk << std::endl;
}
void test_mm_cmpneq_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
        ret = _mm_cmpneq_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpneq_pd takes "<< clk << std::endl;
}
void test_mm_cmpneq_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
        ret = _mm_cmpneq_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpneq_sd takes "<< clk << std::endl;
}
void test_mm_cmpnge_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
        ret = _mm_cmpnge_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnge_pd takes "<< clk << std::endl;
}
void test_mm_cmpnge_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
        ret = _mm_cmpnge_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnge_sd takes "<< clk << std::endl;
}
void test_mm_cmpngt_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
        ret = _mm_cmpngt_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpngt_pd takes "<< clk << std::endl;
}
void test_mm_cmpngt_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
        ret = _mm_cmpngt_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpngt_sd takes "<< clk << std::endl;
}
void test_mm_cmpnle_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
        ret = _mm_cmpnle_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnle_pd takes "<< clk << std::endl;
}
void test_mm_cmpnle_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
        ret = _mm_cmpnle_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnle_sd takes "<< clk << std::endl;
}
void test_mm_cmpnlt_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
        ret = _mm_cmpnlt_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnlt_pd takes "<< clk << std::endl;
}
void test_mm_cmpnlt_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
        ret = _mm_cmpnlt_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpnlt_sd takes "<< clk << std::endl;
}
void test_mm_cmpord_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
        ret = _mm_cmpord_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpord_pd takes "<< clk << std::endl;
}
void test_mm_cmpord_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
        ret = _mm_cmpord_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpord_sd takes "<< clk << std::endl;
}
void test_mm_cmpunord_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
        ret = _mm_cmpunord_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpunord_pd takes "<< clk << std::endl;
}
void test_mm_cmpunord_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
        ret = _mm_cmpunord_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpunord_sd takes "<< clk << std::endl;
}
void test_mm_comieq_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
        ret = _mm_comieq_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comieq_sd takes "<< clk << std::endl;
}
void test_mm_comige_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
        ret = _mm_comige_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comige_sd takes "<< clk << std::endl;
}
void test_mm_comigt_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
        ret = _mm_comigt_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comigt_sd takes "<< clk << std::endl;
}
void test_mm_comile_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
        ret = _mm_comile_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comile_sd takes "<< clk << std::endl;
}
void test_mm_comilt_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
        ret = _mm_comilt_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comilt_sd takes "<< clk << std::endl;
}
void test_mm_comineq_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
        ret = _mm_comineq_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_comineq_sd takes "<< clk << std::endl;
}
void test_mm_cvtepi32_pd (__m128i a) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
        ret = _mm_cvtepi32_pd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepi32_pd takes "<< clk << std::endl;
}
void test_mm_cvtepi32_ps (__m128i a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
        ret = _mm_cvtepi32_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepi32_ps takes "<< clk << std::endl;
}
void test_mm_cvtpd_epi32 (__m128d a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
        ret = _mm_cvtpd_epi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtpd_epi32 takes "<< clk << std::endl;
}
void test_mm_cvtpd_pi32 (__m128d a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
        ret = _mm_cvtpd_pi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtpd_pi32 takes "<< clk << std::endl;
}
void test_mm_cvtpd_ps (__m128d a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
        ret = _mm_cvtpd_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtpd_ps takes "<< clk << std::endl;
}
void test_mm_cvtpi32_pd (__m64 a) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
        ret = _mm_cvtpi32_pd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtpi32_pd takes "<< clk << std::endl;
}
void test_mm_cvtps_epi32 (__m128 a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
        ret = _mm_cvtps_epi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtps_epi32 takes "<< clk << std::endl;
}
void test_mm_cvtps_pd (__m128 a) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
        ret = _mm_cvtps_pd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtps_pd takes "<< clk << std::endl;
}
void test_mm_cvtsd_f64 (__m128d a) 
{
    double ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
        ret = _mm_cvtsd_f64(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtsd_f64 takes "<< clk << std::endl;
}
void test_mm_cvtsd_si32 (__m128d a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
        ret = _mm_cvtsd_si32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtsd_si32 takes "<< clk << std::endl;
}
void test_mm_cvtsd_ss (__m128 a, __m128d b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
        ret = _mm_cvtsd_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtsd_ss takes "<< clk << std::endl;
}
void test_mm_cvtsi128_si32 (__m128i a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
        ret = _mm_cvtsi128_si32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtsi128_si32 takes "<< clk << std::endl;
}
void test_mm_cvtsi32_sd (__m128d a, int b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
        ret = _mm_cvtsi32_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtsi32_sd takes "<< clk << std::endl;
}
void test_mm_cvtsi32_si128 (int a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
        ret = _mm_cvtsi32_si128(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtsi32_si128 takes "<< clk << std::endl;
}
void test_mm_cvtss_sd (__m128d a, __m128 b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
        ret = _mm_cvtss_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtss_sd takes "<< clk << std::endl;
}
void test_mm_cvttpd_epi32 (__m128d a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
        ret = _mm_cvttpd_epi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvttpd_epi32 takes "<< clk << std::endl;
}
void test_mm_cvttpd_pi32 (__m128d a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
        ret = _mm_cvttpd_pi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvttpd_pi32 takes "<< clk << std::endl;
}
void test_mm_cvttps_epi32 (__m128 a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
        ret = _mm_cvttps_epi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvttps_epi32 takes "<< clk << std::endl;
}
void test_mm_cvttsd_si32 (__m128d a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
        ret = _mm_cvttsd_si32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvttsd_si32 takes "<< clk << std::endl;
}
void test_mm_div_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
        ret = _mm_div_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_div_pd takes "<< clk << std::endl;
}
void test_mm_div_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
        ret = _mm_div_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_div_sd takes "<< clk << std::endl;
}
void test_mm_extract_epi16 (__m128i a, int imm8) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
        ret = _mm_extract_epi16(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_extract_epi16 takes "<< clk << std::endl;
}
void test_mm_insert_epi16 (__m128i a, int i, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
        ret = _mm_insert_epi16(a,1,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_insert_epi16 takes "<< clk << std::endl;
}
void test_mm_load_pd (double const* mem_addr) 
{
    __m128d ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
        ret = _mm_load_pd(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_load_pd takes "<< clk << std::endl;
}
void test_mm_load_sd (double const* mem_addr) 
{
    __m128d ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
        ret = _mm_load_sd(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_load_sd takes "<< clk << std::endl;
}
void test_mm_load_si128 (__m128i const* mem_addr) 
{
    __m128i ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
        ret = _mm_load_si128(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_load_si128 takes "<< clk << std::endl;
}
void test_mm_load1_pd (double const* mem_addr) 
{
    __m128d ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
        ret = _mm_load1_pd(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_load1_pd takes "<< clk << std::endl;
}
void test_mm_loadh_pd (__m128d a, double const* mem_addr) 
{
    __m128d ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
        ret = _mm_loadh_pd(a,mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_loadh_pd takes "<< clk << std::endl;
}
void test_mm_loadl_epi64 (__m128i const* mem_addr) 
{
    __m128i ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
        ret = _mm_loadl_epi64(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_loadl_epi64 takes "<< clk << std::endl;
}
void test_mm_loadl_pd (__m128d a, double const* mem_addr) 
{
    __m128d ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
        ret = _mm_loadl_pd(a,mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_loadl_pd takes "<< clk << std::endl;
}
void test_mm_loadr_pd (double const* mem_addr) 
{
    __m128d ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
        ret = _mm_loadr_pd(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_loadr_pd takes "<< clk << std::endl;
}
void test_mm_loadu_pd (double const* mem_addr) 
{
    __m128d ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
        ret = _mm_loadu_pd(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_loadu_pd takes "<< clk << std::endl;
}
void test_mm_loadu_si128 (__m128i const* mem_addr) 
{
    __m128i ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
        ret = _mm_loadu_si128(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_loadu_si128 takes "<< clk << std::endl;
}
void test_mm_madd_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
        ret = _mm_madd_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_madd_epi16 takes "<< clk << std::endl;
}
void test_mm_maskmoveu_si128 (__m128i a, __m128i mask, char* mem_addr) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
        _mm_maskmoveu_si128(a,mask,mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_maskmoveu_si128 takes "<< clk << std::endl;
}
void test_mm_max_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
        ret = _mm_max_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_epi16 takes "<< clk << std::endl;
}
void test_mm_max_epu8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
        ret = _mm_max_epu8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_epu8 takes "<< clk << std::endl;
}
void test_mm_max_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
        ret = _mm_max_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_pd takes "<< clk << std::endl;
}
void test_mm_max_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
        ret = _mm_max_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_sd takes "<< clk << std::endl;
}
void test_mm_min_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
        ret = _mm_min_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_epi16 takes "<< clk << std::endl;
}
void test_mm_min_epu8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
        ret = _mm_min_epu8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_epu8 takes "<< clk << std::endl;
}
void test_mm_min_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
        ret = _mm_min_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_pd takes "<< clk << std::endl;
}
void test_mm_min_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
        ret = _mm_min_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_sd takes "<< clk << std::endl;
}
void test_mm_move_epi64 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
        ret = _mm_move_epi64(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_move_epi64 takes "<< clk << std::endl;
}
void test_mm_move_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
        ret = _mm_move_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_move_sd takes "<< clk << std::endl;
}
void test_mm_movemask_epi8 (__m128i a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
        ret = _mm_movemask_epi8(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_movemask_epi8 takes "<< clk << std::endl;
}
void test_mm_movemask_pd (__m128d a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
        ret = _mm_movemask_pd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_movemask_pd takes "<< clk << std::endl;
}
void test_mm_movepi64_pi64 (__m128i a) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
        ret = _mm_movepi64_pi64(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_movepi64_pi64 takes "<< clk << std::endl;
}
void test_mm_movpi64_epi64 (__m64 a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
        ret = _mm_movpi64_epi64(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_movpi64_epi64 takes "<< clk << std::endl;
}
void test_mm_mul_epu32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
        ret = _mm_mul_epu32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mul_epu32 takes "<< clk << std::endl;
}
void test_mm_mul_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
        ret = _mm_mul_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mul_pd takes "<< clk << std::endl;
}
void test_mm_mul_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
        ret = _mm_mul_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mul_sd takes "<< clk << std::endl;
}
void test_mm_mul_su32 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
        ret = _mm_mul_su32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mul_su32 takes "<< clk << std::endl;
}
void test_mm_mulhi_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
        ret = _mm_mulhi_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mulhi_epi16 takes "<< clk << std::endl;
}
void test_mm_mulhi_epu16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
        ret = _mm_mulhi_epu16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mulhi_epu16 takes "<< clk << std::endl;
}
void test_mm_mullo_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
        ret = _mm_mullo_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mullo_epi16 takes "<< clk << std::endl;
}
void test_mm_or_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
        ret = _mm_or_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_or_pd takes "<< clk << std::endl;
}
void test_mm_or_si128 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
        ret = _mm_or_si128(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_or_si128 takes "<< clk << std::endl;
}
void test_mm_packs_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
        ret = _mm_packs_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_packs_epi16 takes "<< clk << std::endl;
}
void test_mm_packs_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
        ret = _mm_packs_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_packs_epi32 takes "<< clk << std::endl;
}
void test_mm_packus_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
        ret = _mm_packus_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_packus_epi16 takes "<< clk << std::endl;
}
void test_mm_sad_epu8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
        ret = _mm_sad_epu8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sad_epu8 takes "<< clk << std::endl;
}
void test_mm_set_epi16 (short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set_epi16 takes "<< clk << std::endl;
}
void test_mm_set_epi32 (int e3, int e2, int e1, int e0) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
        ret = _mm_set_epi32(e3,e2,e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set_epi32 takes "<< clk << std::endl;
}
void test_mm_set_epi64 (__m64 e1, __m64 e0) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
        ret = _mm_set_epi64(e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set_epi64 takes "<< clk << std::endl;
}
void test_mm_set_epi64x (__int64 e1, __int64 e0) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
        ret = _mm_set_epi64x(e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set_epi64x takes "<< clk << std::endl;
}
void test_mm_set_epi8 (char e15, char e14, char e13, char e12, char e11, char e10, char e9, char e8, char e7, char e6, char e5, char e4, char e3, char e2, char e1, char e0) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_set_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set_epi8 takes "<< clk << std::endl;
}
void test_mm_set_pd (double e1, double e0) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
        ret = _mm_set_pd(e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set_pd takes "<< clk << std::endl;
}
void test_mm_set_sd (double a) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
        ret = _mm_set_sd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set_sd takes "<< clk << std::endl;
}
void test_mm_set1_epi16 (short a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
        ret = _mm_set1_epi16(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set1_epi16 takes "<< clk << std::endl;
}
void test_mm_set1_epi32 (int a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
        ret = _mm_set1_epi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set1_epi32 takes "<< clk << std::endl;
}
void test_mm_set1_epi64 (__m64 a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
        ret = _mm_set1_epi64(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set1_epi64 takes "<< clk << std::endl;
}
void test_mm_set1_epi64x (__int64 a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
        ret = _mm_set1_epi64x(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set1_epi64x takes "<< clk << std::endl;
}
void test_mm_set1_epi8 (char a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
        ret = _mm_set1_epi8(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set1_epi8 takes "<< clk << std::endl;
}
void test_mm_set1_pd (double a) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
        ret = _mm_set1_pd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_set1_pd takes "<< clk << std::endl;
}
void test_mm_setr_epi16 (short e7, short e6, short e5, short e4, short e3, short e2, short e1, short e0) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi16(e7,e6,e5,e4,e3,e2,e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_setr_epi16 takes "<< clk << std::endl;
}
void test_mm_setr_epi32 (int e3, int e2, int e1, int e0) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
        ret = _mm_setr_epi32(e3,e2,e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_setr_epi32 takes "<< clk << std::endl;
}
void test_mm_setr_epi64 (__m64 e1, __m64 e0) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
        ret = _mm_setr_epi64(e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_setr_epi64 takes "<< clk << std::endl;
}
void test_mm_setr_epi8 (char e15, char e14, char e13, char e12, char e11, char e10, char e9, char e8, char e7, char e6, char e5, char e4, char e3, char e2, char e1, char e0) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
        ret = _mm_setr_epi8(e15,e14,e13,e12,e11,e10,e9,e8,e7,e6,e5,e4,e3,e2,e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_setr_epi8 takes "<< clk << std::endl;
}
void test_mm_setr_pd (double e1, double e0) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
        ret = _mm_setr_pd(e1,e0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_setr_pd takes "<< clk << std::endl;
}
void test_mm_shuffle_epi32 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
        ret = _mm_shuffle_epi32(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_shuffle_epi32 takes "<< clk << std::endl;
}
void test_mm_shuffle_pd (__m128d a, __m128d b, int imm8) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
        ret = _mm_shuffle_pd(a,b,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_shuffle_pd takes "<< clk << std::endl;
}
void test_mm_shufflehi_epi16 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
        ret = _mm_shufflehi_epi16(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_shufflehi_epi16 takes "<< clk << std::endl;
}
void test_mm_shufflelo_epi16 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
        ret = _mm_shufflelo_epi16(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_shufflelo_epi16 takes "<< clk << std::endl;
}
void test_mm_sll_epi16 (__m128i a, __m128i count) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
        ret = _mm_sll_epi16(a,count);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sll_epi16 takes "<< clk << std::endl;
}
void test_mm_sll_epi32 (__m128i a, __m128i count) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
        ret = _mm_sll_epi32(a,count);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sll_epi32 takes "<< clk << std::endl;
}
void test_mm_sll_epi64 (__m128i a, __m128i count) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
        ret = _mm_sll_epi64(a,count);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sll_epi64 takes "<< clk << std::endl;
}
void test_mm_slli_epi16 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
        ret = _mm_slli_epi16(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_slli_epi16 takes "<< clk << std::endl;
}
void test_mm_slli_epi32 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
        ret = _mm_slli_epi32(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_slli_epi32 takes "<< clk << std::endl;
}
void test_mm_slli_epi64 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
        ret = _mm_slli_epi64(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_slli_epi64 takes "<< clk << std::endl;
}
void test_mm_slli_si128 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
        ret = _mm_slli_si128(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_slli_si128 takes "<< clk << std::endl;
}
void test_mm_sqrt_pd (__m128d a) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
        ret = _mm_sqrt_pd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sqrt_pd takes "<< clk << std::endl;
}
void test_mm_sqrt_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
        ret = _mm_sqrt_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sqrt_sd takes "<< clk << std::endl;
}
void test_mm_sra_epi16 (__m128i a, __m128i count) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
        ret = _mm_sra_epi16(a,count);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sra_epi16 takes "<< clk << std::endl;
}
void test_mm_sra_epi32 (__m128i a, __m128i count) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
        ret = _mm_sra_epi32(a,count);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sra_epi32 takes "<< clk << std::endl;
}
void test_mm_srai_epi16 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
        ret = _mm_srai_epi16(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_srai_epi16 takes "<< clk << std::endl;
}
void test_mm_srai_epi32 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
        ret = _mm_srai_epi32(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_srai_epi32 takes "<< clk << std::endl;
}
void test_mm_srl_epi16 (__m128i a, __m128i count) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
        ret = _mm_srl_epi16(a,count);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_srl_epi16 takes "<< clk << std::endl;
}
void test_mm_srl_epi32 (__m128i a, __m128i count) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
        ret = _mm_srl_epi32(a,count);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_srl_epi32 takes "<< clk << std::endl;
}
void test_mm_srl_epi64 (__m128i a, __m128i count) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
        ret = _mm_srl_epi64(a,count);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_srl_epi64 takes "<< clk << std::endl;
}
void test_mm_srli_epi16 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
        ret = _mm_srli_epi16(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_srli_epi16 takes "<< clk << std::endl;
}
void test_mm_srli_epi32 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
        ret = _mm_srli_epi32(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_srli_epi32 takes "<< clk << std::endl;
}
void test_mm_srli_epi64 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
        ret = _mm_srli_epi64(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_srli_epi64 takes "<< clk << std::endl;
}
void test_mm_srli_si128 (__m128i a, int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
        ret = _mm_srli_si128(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_srli_si128 takes "<< clk << std::endl;
}
void test_mm_store_pd (double* mem_addr, __m128d a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
        _mm_store_pd(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_store_pd takes "<< clk << std::endl;
}
void test_mm_store_sd (double* mem_addr, __m128d a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
        _mm_store_sd(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_store_sd takes "<< clk << std::endl;
}
void test_mm_store_si128 (__m128i* mem_addr, __m128i a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
        _mm_store_si128(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_store_si128 takes "<< clk << std::endl;
}
void test_mm_store1_pd (double* mem_addr, __m128d a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
        _mm_store1_pd(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_store1_pd takes "<< clk << std::endl;
}
void test_mm_storeh_pd (double* mem_addr, __m128d a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
        _mm_storeh_pd(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_storeh_pd takes "<< clk << std::endl;
}
void test_mm_storel_epi64 (__m128i* mem_addr, __m128i a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
        _mm_storel_epi64(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_storel_epi64 takes "<< clk << std::endl;
}
void test_mm_storel_pd (double* mem_addr, __m128d a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
        _mm_storel_pd(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_storel_pd takes "<< clk << std::endl;
}
void test_mm_storer_pd (double* mem_addr, __m128d a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
        _mm_storer_pd(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_storer_pd takes "<< clk << std::endl;
}
void test_mm_storeu_pd (double* mem_addr, __m128d a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
        _mm_storeu_pd(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_storeu_pd takes "<< clk << std::endl;
}
void test_mm_storeu_si128 (__m128i* mem_addr, __m128i a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
        _mm_storeu_si128(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_storeu_si128 takes "<< clk << std::endl;
}
void test_mm_stream_pd (double* mem_addr, __m128d a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
        _mm_stream_pd(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_stream_pd takes "<< clk << std::endl;
}
void test_mm_stream_si128 (__m128i* mem_addr, __m128i a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
        _mm_stream_si128(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_stream_si128 takes "<< clk << std::endl;
}
void test_mm_stream_si32 (int* mem_addr, int a) 
{
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
        _mm_stream_si32(mem_addr,a);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_stream_si32 takes "<< clk << std::endl;
}
void test_mm_sub_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
        ret = _mm_sub_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sub_epi16 takes "<< clk << std::endl;
}
void test_mm_sub_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
        ret = _mm_sub_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sub_epi32 takes "<< clk << std::endl;
}
void test_mm_sub_epi64 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
        ret = _mm_sub_epi64(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sub_epi64 takes "<< clk << std::endl;
}
void test_mm_sub_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
        ret = _mm_sub_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sub_epi8 takes "<< clk << std::endl;
}
void test_mm_sub_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
        ret = _mm_sub_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sub_pd takes "<< clk << std::endl;
}
void test_mm_sub_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
        ret = _mm_sub_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sub_sd takes "<< clk << std::endl;
}
void test_mm_sub_si64 (__m64 a, __m64 b) 
{
    __m64 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
        ret = _mm_sub_si64(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_sub_si64 takes "<< clk << std::endl;
}
void test_mm_subs_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
        ret = _mm_subs_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_subs_epi16 takes "<< clk << std::endl;
}
void test_mm_subs_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
        ret = _mm_subs_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_subs_epi8 takes "<< clk << std::endl;
}
void test_mm_subs_epu16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
        ret = _mm_subs_epu16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_subs_epu16 takes "<< clk << std::endl;
}
void test_mm_subs_epu8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
        ret = _mm_subs_epu8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_subs_epu8 takes "<< clk << std::endl;
}
void test_mm_ucomieq_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
        ret = _mm_ucomieq_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomieq_sd takes "<< clk << std::endl;
}
void test_mm_ucomige_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
        ret = _mm_ucomige_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomige_sd takes "<< clk << std::endl;
}
void test_mm_ucomigt_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
        ret = _mm_ucomigt_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomigt_sd takes "<< clk << std::endl;
}
void test_mm_ucomile_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
        ret = _mm_ucomile_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomile_sd takes "<< clk << std::endl;
}
void test_mm_ucomilt_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
        ret = _mm_ucomilt_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomilt_sd takes "<< clk << std::endl;
}
void test_mm_ucomineq_sd (__m128d a, __m128d b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
        ret = _mm_ucomineq_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ucomineq_sd takes "<< clk << std::endl;
}
void test_mm_unpackhi_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
        ret = _mm_unpackhi_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpackhi_epi16 takes "<< clk << std::endl;
}
void test_mm_unpackhi_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
        ret = _mm_unpackhi_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpackhi_epi32 takes "<< clk << std::endl;
}
void test_mm_unpackhi_epi64 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
        ret = _mm_unpackhi_epi64(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpackhi_epi64 takes "<< clk << std::endl;
}
void test_mm_unpackhi_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
        ret = _mm_unpackhi_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpackhi_epi8 takes "<< clk << std::endl;
}
void test_mm_unpackhi_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
        ret = _mm_unpackhi_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpackhi_pd takes "<< clk << std::endl;
}
void test_mm_unpacklo_epi16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
        ret = _mm_unpacklo_epi16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpacklo_epi16 takes "<< clk << std::endl;
}
void test_mm_unpacklo_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
        ret = _mm_unpacklo_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpacklo_epi32 takes "<< clk << std::endl;
}
void test_mm_unpacklo_epi64 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
        ret = _mm_unpacklo_epi64(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpacklo_epi64 takes "<< clk << std::endl;
}
void test_mm_unpacklo_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
        ret = _mm_unpacklo_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpacklo_epi8 takes "<< clk << std::endl;
}
void test_mm_unpacklo_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
        ret = _mm_unpacklo_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_unpacklo_pd takes "<< clk << std::endl;
}
void test_mm_xor_pd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
        ret = _mm_xor_pd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_xor_pd takes "<< clk << std::endl;
}
void test_mm_xor_si128 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
        ret = _mm_xor_si128(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_xor_si128 takes "<< clk << std::endl;
}
