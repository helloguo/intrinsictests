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
void test_mm_blend_epi16 (__m128i a, __m128i b, const int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
        ret = _mm_blend_epi16(a,b,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_blend_epi16 takes "<< clk << std::endl;
}
void test_mm_blend_pd (__m128d a, __m128d b, const int imm8) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
        ret = _mm_blend_pd(a,b,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_blend_pd takes "<< clk << std::endl;
}
void test_mm_blend_ps (__m128 a, __m128 b, const int imm8) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
        ret = _mm_blend_ps(a,b,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_blend_ps takes "<< clk << std::endl;
}
void test_mm_blendv_epi8 (__m128i a, __m128i b, __m128i mask) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
        ret = _mm_blendv_epi8(a,b,mask);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_blendv_epi8 takes "<< clk << std::endl;
}
void test_mm_blendv_pd (__m128d a, __m128d b, __m128d mask) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
        ret = _mm_blendv_pd(a,b,mask);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_blendv_pd takes "<< clk << std::endl;
}
void test_mm_blendv_ps (__m128 a, __m128 b, __m128 mask) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
        ret = _mm_blendv_ps(a,b,mask);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_blendv_ps takes "<< clk << std::endl;
}
void test_mm_ceil_pd (__m128d a) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
        ret = _mm_ceil_pd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ceil_pd takes "<< clk << std::endl;
}
void test_mm_ceil_ps (__m128 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
        ret = _mm_ceil_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ceil_ps takes "<< clk << std::endl;
}
void test_mm_ceil_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
        ret = _mm_ceil_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ceil_sd takes "<< clk << std::endl;
}
void test_mm_ceil_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
        ret = _mm_ceil_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_ceil_ss takes "<< clk << std::endl;
}
void test_mm_cmpeq_epi64 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
        ret = _mm_cmpeq_epi64(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cmpeq_epi64 takes "<< clk << std::endl;
}
void test_mm_cvtepi16_epi32 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
        ret = _mm_cvtepi16_epi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepi16_epi32 takes "<< clk << std::endl;
}
void test_mm_cvtepi16_epi64 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
        ret = _mm_cvtepi16_epi64(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepi16_epi64 takes "<< clk << std::endl;
}
void test_mm_cvtepi32_epi64 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
        ret = _mm_cvtepi32_epi64(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepi32_epi64 takes "<< clk << std::endl;
}
void test_mm_cvtepi8_epi16 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
        ret = _mm_cvtepi8_epi16(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepi8_epi16 takes "<< clk << std::endl;
}
void test_mm_cvtepi8_epi32 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
        ret = _mm_cvtepi8_epi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepi8_epi32 takes "<< clk << std::endl;
}
void test_mm_cvtepi8_epi64 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
        ret = _mm_cvtepi8_epi64(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepi8_epi64 takes "<< clk << std::endl;
}
void test_mm_cvtepu16_epi32 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
        ret = _mm_cvtepu16_epi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepu16_epi32 takes "<< clk << std::endl;
}
void test_mm_cvtepu16_epi64 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
        ret = _mm_cvtepu16_epi64(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepu16_epi64 takes "<< clk << std::endl;
}
void test_mm_cvtepu32_epi64 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
        ret = _mm_cvtepu32_epi64(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepu32_epi64 takes "<< clk << std::endl;
}
void test_mm_cvtepu8_epi16 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
        ret = _mm_cvtepu8_epi16(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepu8_epi16 takes "<< clk << std::endl;
}
void test_mm_cvtepu8_epi32 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
        ret = _mm_cvtepu8_epi32(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepu8_epi32 takes "<< clk << std::endl;
}
void test_mm_cvtepu8_epi64 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
        ret = _mm_cvtepu8_epi64(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_cvtepu8_epi64 takes "<< clk << std::endl;
}
void test_mm_dp_pd (__m128d a, __m128d b, const int imm8) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
        ret = _mm_dp_pd(a,b,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_dp_pd takes "<< clk << std::endl;
}
void test_mm_dp_ps (__m128 a, __m128 b, const int imm8) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
        ret = _mm_dp_ps(a,b,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_dp_ps takes "<< clk << std::endl;
}
void test_mm_extract_epi32 (__m128i a, const int imm8) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
        ret = _mm_extract_epi32(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_extract_epi32 takes "<< clk << std::endl;
}
void test_mm_extract_epi8 (__m128i a, const int imm8) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
        ret = _mm_extract_epi8(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_extract_epi8 takes "<< clk << std::endl;
}
void test_mm_extract_ps (__m128 a, const int imm8) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
        ret = _mm_extract_ps(a,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_extract_ps takes "<< clk << std::endl;
}
void test_mm_floor_pd (__m128d a) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
        ret = _mm_floor_pd(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_floor_pd takes "<< clk << std::endl;
}
void test_mm_floor_ps (__m128 a) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
        ret = _mm_floor_ps(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_floor_ps takes "<< clk << std::endl;
}
void test_mm_floor_sd (__m128d a, __m128d b) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
        ret = _mm_floor_sd(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_floor_sd takes "<< clk << std::endl;
}
void test_mm_floor_ss (__m128 a, __m128 b) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
        ret = _mm_floor_ss(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_floor_ss takes "<< clk << std::endl;
}
void test_mm_insert_epi32 (__m128i a, int i, const int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
        ret = _mm_insert_epi32(a,1,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_insert_epi32 takes "<< clk << std::endl;
}
void test_mm_insert_epi8 (__m128i a, int i, const int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
        ret = _mm_insert_epi8(a,1,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_insert_epi8 takes "<< clk << std::endl;
}
void test_mm_insert_ps (__m128 a, __m128 b, const int imm8) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
        ret = _mm_insert_ps(a,b,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_insert_ps takes "<< clk << std::endl;
}
void test_mm_max_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
        ret = _mm_max_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_epi32 takes "<< clk << std::endl;
}
void test_mm_max_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
        ret = _mm_max_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_epi8 takes "<< clk << std::endl;
}
void test_mm_max_epu16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
        ret = _mm_max_epu16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_epu16 takes "<< clk << std::endl;
}
void test_mm_max_epu32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
        ret = _mm_max_epu32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_max_epu32 takes "<< clk << std::endl;
}
void test_mm_min_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
        ret = _mm_min_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_epi32 takes "<< clk << std::endl;
}
void test_mm_min_epi8 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
        ret = _mm_min_epi8(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_epi8 takes "<< clk << std::endl;
}
void test_mm_min_epu16 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
        ret = _mm_min_epu16(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_epu16 takes "<< clk << std::endl;
}
void test_mm_min_epu32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
        ret = _mm_min_epu32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_min_epu32 takes "<< clk << std::endl;
}
void test_mm_minpos_epu16 (__m128i a) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
        ret = _mm_minpos_epu16(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_minpos_epu16 takes "<< clk << std::endl;
}
void test_mm_mpsadbw_epu8 (__m128i a, __m128i b, const int imm8) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
        ret = _mm_mpsadbw_epu8(a,b,1);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mpsadbw_epu8 takes "<< clk << std::endl;
}
void test_mm_mul_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
        ret = _mm_mul_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mul_epi32 takes "<< clk << std::endl;
}
void test_mm_mullo_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
        ret = _mm_mullo_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_mullo_epi32 takes "<< clk << std::endl;
}
void test_mm_packus_epi32 (__m128i a, __m128i b) 
{
    __m128i ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
        ret = _mm_packus_epi32(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_packus_epi32 takes "<< clk << std::endl;
}
void test_mm_round_pd (__m128d a, int rounding) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
        ret = _mm_round_pd(a,0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_round_pd takes "<< clk << std::endl;
}
void test_mm_round_ps (__m128 a, int rounding) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
        ret = _mm_round_ps(a,0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_round_ps takes "<< clk << std::endl;
}
void test_mm_round_sd (__m128d a, __m128d b, int rounding) 
{
    __m128d ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
        ret = _mm_round_sd(a,b,0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_round_sd takes "<< clk << std::endl;
}
void test_mm_round_ss (__m128 a, __m128 b, int rounding) 
{
    __m128 ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
        ret = _mm_round_ss(a,b,0);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_round_ss takes "<< clk << std::endl;
}
void test_mm_stream_load_si128 (const __m128i* mem_addr) 
{
    __m128i ret;
    clock_t t1 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
    }
    */
    clock_t t2 = clock();
    /*
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
        ret = _mm_stream_load_si128(mem_addr);
    }
    */
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_stream_load_si128 takes "<< clk << std::endl;
}
void test_mm_test_all_ones (__m128i a) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
        ret = _mm_test_all_ones(a);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_test_all_ones takes "<< clk << std::endl;
}
void test_mm_test_all_zeros (__m128i a, __m128i mask) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
        ret = _mm_test_all_zeros(a,mask);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_test_all_zeros takes "<< clk << std::endl;
}
void test_mm_test_mix_ones_zeros (__m128i a, __m128i mask) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
        ret = _mm_test_mix_ones_zeros(a,mask);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_test_mix_ones_zeros takes "<< clk << std::endl;
}
void test_mm_testc_si128 (__m128i a, __m128i b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
        ret = _mm_testc_si128(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_testc_si128 takes "<< clk << std::endl;
}
void test_mm_testnzc_si128 (__m128i a, __m128i b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
        ret = _mm_testnzc_si128(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_testnzc_si128 takes "<< clk << std::endl;
}
void test_mm_testz_si128 (__m128i a, __m128i b) 
{
    int ret;
    clock_t t1 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
    }
    clock_t t2 = clock();
    for (int iterator = 0; iterator < 1000000; iterator++)
    {
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
        ret = _mm_testz_si128(a,b);
    }
    clock_t t3 = clock();
    clock_t clk = (t3 - t2) - (t2 - t1);
    std::cout << "_mm_testz_si128 takes "<< clk << std::endl;
}
