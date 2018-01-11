//
//  longestCommonPrefix.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/11.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "longestCommonPrefix.h"
#include <string.h>
#include <stdlib.h>

/**
 Longest Common Prefix
 
 Write a function to find the longest common prefix string amongst an array of strings.
 
 
 Input:
 ["ca","a"]
 
 Expected:
 ""
 */

char* longestCommonPrefix(char** strs, int strsSize) {
    if(!strsSize) {
        return "";
    }
    char *minStr = strs[0];
    for (int i = 0; i < strsSize; i ++) {
        if (strlen(minStr) > strlen(strs[i])) {
            minStr = strs[i];
        }
    }
    char *res = (char *)malloc(sizeof(char) * strlen(minStr));
    memset(res, 0, sizeof(char) * strlen(minStr));
    for (int i = 0; i < strlen(minStr); i ++) {
        for (int j = 0; j < strsSize; j ++) {
            if (minStr[i] != strs[j][i]) {
                strncpy(res, minStr, i);
                return res;
            }
        }
    }
    res = minStr;
    return res;
}

