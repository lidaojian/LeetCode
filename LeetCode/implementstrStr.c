//
//  implementstrStr.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/15.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "implementstrStr.h"
#include <string.h>

/**
 Implement strStr().
 
 Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
 
 Example 1:
 
 Input: haystack = "hello", needle = "ll"
 Output: 2
 Example 2:
 
 Input: haystack = "aaaaa", needle = "bba"
 Output: -1
 
 Input:
 ""
 ""
 Expected:
 0
 
 题目大意：
 第二个字符串在第一个字符串中出现的最小位置，如果没有出现则输出-1

 */

/*
 Submission Detail
 74 / 74 test cases passed.
 Status: Accepted
 Runtime: 733 ms
 Submitted: 0 minutes ago
 */
int strStr(char* haystack, char* needle) {
    if (!haystack && needle) {
        return -1;
    } else if (!needle) {
        return 0;
    }
    long haystacklen = strlen(haystack);
    long needlelen = strlen(needle);
    if (haystacklen < needlelen) {
        return -1;
    } else if (needlelen == 0) {
        return 0;
    }
    int i, j;
    for (i = 0; i < haystacklen; i ++) {
        for (j = 0; j < needlelen && i + j < haystacklen; j ++) {
            if (haystack[i + j] != needle[j]) {
                break;
            }
        }
        if (j == needlelen) {
            return i;
        }
    }
    return -1;
}
