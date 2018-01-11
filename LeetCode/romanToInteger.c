//
//  romanToInteger.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/11.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "romanToInteger.h"
#include <string.h>

/**
 Roman to Integer
 
 Given a roman numeral, convert it to an integer.
 
 Input is guaranteed to be within the range from 1 to 3999.
 */

int romanCharToInt(char s) {
    switch(s) {
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
    }
    return 0;
}

int romanToInt(char *s) {
    int res = 0;
    res = romanCharToInt(s[0]);
    for (int i = 1; i < strlen(s); i ++) {
        res += romanCharToInt(s[i]);
        if (romanCharToInt(s[i]) > romanCharToInt(s[i -1])) {
            res -= (romanCharToInt(s[i - 1]) * 2);
        }
    }
    return res;
}

