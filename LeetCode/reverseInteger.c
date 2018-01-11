//
//  reverseInteger.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/11.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "reverseInteger.h"
#include <stdlib.h>

/*
 Reverse Integer
 Given a 32-bit signed integer, reverse digits of an integer.
 
 Example 1:
 
 Input: 123
 Output:  321
 Example 2:
 
 Input: -123
 Output: -321
 Example 3:
 
 Input: 120
 Output: 21
 
 Input : 1534236469
 OutPut: 0
 Note:
 Assume we are dealing with an environment which could only hold integers within the 32-bit signed integer range. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 
 */
int reverse(int x) {
    int res = 0;
    int n = 0;
    while (x) {
        n = x % 10;
        if (abs(res) > (INT32_MAX) / 10) {
            return 0;
        }
        res = res * 10 + n;
        x = x / 10;
    }
    return res;
}
