//
//  validParentheses.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/11.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "validParentheses.h"
#include <string.h>
#include <stdlib.h>

/*
    Valid Parentheses
 
 Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 
 The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
*/


bool isValid(char* s) {
    if (strlen(s) % 2) {
        return false;
    }
    char *stackChar = (char *)malloc(sizeof(char) * strlen(s));
    int stackLength = 0;
    for (int i = 0; i < strlen(s); i ++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stackChar[stackLength] = s[i];
            stackLength ++;
        } else if (stackLength > 0) {
            if (s[i] == ')' && stackChar[stackLength - 1] == '(') {
                stackChar[stackLength - 1] = 0;
                stackLength --;
            } else if (s[i] == '}' && stackChar[stackLength - 1] == '{') {
                stackChar[stackLength - 1] = 0;
                stackLength --;
            } else if (s[i] == ']' && stackChar[stackLength - 1] == '[') {
                stackChar[stackLength - 1] = 0;
                stackLength --;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    if (stackLength > 0) {
        return false;
    }
    return true;
}
