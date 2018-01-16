//
//  plusOne.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/16.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "plusOne.h"
#include <stdlib.h>

/**
 Plus One
 Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.
 
 You may assume the integer do not contain any leading zero, except the number 0 itself.
 
 The digits are stored such that the most significant digit is at the head of the list.
 
 input
 [0]
 Expected
 [1]
 
 input
 [9, 9, 9]
 Expected
 [1, 0, 0, 0]
 
 题目大意：
 给出一个数组，在最后一位加1 输出一个新的数组，并且标记新数组的长度
 
 解题报告：
 数组加一  遍历数组(从后向前) + 1操作
    1.若最后没有进位的话，数组的长度还是原来的长度，
    2.若最后有进位的话，数组的长度比原来的长度+1
 */

/**
 https://leetcode.com/submissions/detail/136449669/
 108 / 108 test cases passed.
 Status: Accepted
 Runtime: 4 ms
 Submitted: 0 minutes ago
 */

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1;
    int addsum = 0;
    for (int i = digitsSize - 1; i >= 0; i --) {
        addsum = digits[i] + carry;
        digits[i] = addsum % 10;
        carry = addsum / 10;
        if (carry == 0) {
            break;
        }
    }
    
    if (carry) {
        int *plusnum = malloc(sizeof(int) * (digitsSize + 1));
        plusnum[0] = carry;
        for (int i = 0; i < digitsSize; i ++) {
            plusnum[i + 1] = digits[i];
        }
        *returnSize = digitsSize + 1;
        return plusnum;
    }
    *returnSize = digitsSize;
    return digits;
}
