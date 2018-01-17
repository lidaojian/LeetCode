//
//  sqrtx.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/17.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "sqrtx.h"

/**
 Sqrt(x)
Implement int sqrt(int x).

Compute and return the square root of x.

x is guaranteed to be a non-negative integer.


Example 1:
Input: 4
Output: 2
 
Example 2:
Input: 8
Output: 2
 
Example 3:
Input: 5
Output: 2
 
Example 4:
Input: 2147483647
Expected: 46340
 
Explanation: The square root of 8 is 2.82842..., and since we want to return an integer, the decimal part will be truncated.
 
 题目大意：
 求平方根 (返回结果为整数，小数部分舍弃)
 **/

/**
 暴力解法  必须用long long 类型
 https://leetcode.com/submissions/detail/136530687/
 1017 / 1017 test cases passed.
 Status: Accepted
 Runtime: 37 ms
 */
int mySqrt(int x) {
    long long sqrt = 1;
    for (long long i = 1; i <= x / 2 + 1; i ++) {
        if (i * i > x) {
            sqrt = i - 1;
            break;
        } else if (i * i == x) {
            sqrt = i;
            break;
        }
    }
    return (int)sqrt;
}


/**
 二分解法 必须用long long 类型
 https://leetcode.com/submissions/detail/136531099/
 1017 / 1017 test cases passed.
 Status: Accepted
 Runtime: 16 ms
 */
int mySqrt_method2(int x) {
    long long  i = 0, j = x / 2 + 1;
    while (i <= j) {
        long long mid = (i + j) / 2;
        long long square = mid * mid;
        if (square == x) {
            return (int)mid;
        } else if (square < x) {
            i = mid + 1;
        } else {
            j = mid - 1;
        }
    }
    return (int)j;
}

/**
 牛顿迭代法 参考http://www.cnblogs.com/AnnieKim/archive/2013/04/18/3028607.html
 计算x2 = n的解，令f(x)=x2-n，相当于求解f(x)=0的解
 https://leetcode.com/submissions/detail/136540247/
 1017 / 1017 test cases passed.
 Status: Accepted
 Runtime: 22 ms
 */
int mySqrt_method3(int x) {
    if (x == 0) {
        return 0;
    }
    double last = 0;
    double res = 1;
    while (res != last) {
        last = res;
        res = (res + x / res) / 2;
    }
    return (int)res;
}


