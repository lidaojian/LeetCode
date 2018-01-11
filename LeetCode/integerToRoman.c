//
//  integerToRoman.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/11.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "integerToRoman.h"
#include <string.h>
#include <stdlib.h>

/*
 Integer to Roman
 
 Given an integer, convert it to a roman numeral.
 
 Input is guaranteed to be within the range from 1 to 3999.
 */
char* intToRoman(int num) {
    
    int val[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *romanCharVal[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    char *res = (char *)malloc(sizeof(char) * 100);
    int valLength = sizeof(val)/sizeof(val[0]);
    for (int i = 0; i < valLength; i ++) {
        while (num >= val[i]) {
            num -= val[i];
            strcat(res, romanCharVal[i]);
        }
    }
    return res;
}
