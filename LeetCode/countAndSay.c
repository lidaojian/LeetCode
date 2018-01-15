//
//  countAndSay.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/15.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "countAndSay.h"
#include <stdlib.h>
#include <string.h>

/*
  Count and Say
 The count-and-say sequence is the sequence of integers with the first five terms as following:
 
 1.     1
 2.     11
 3.     21
 4.     1211
 5.     111221
 1 is read off as "one 1" or 11.
 11 is read off as "two 1s" or 21.
 21 is read off as "one 2, then one 1" or 1211.
 Given an integer n, generate the nth term of the count-and-say sequence.
 
 Note: Each term of the sequence of integers will be represented as a string.
 
 Example 1:
 
 Input: 1
 Output: "1"
 Example 2:
 
 Input: 4
 Output: "1211"
 
 题目大意:
 1. 初始化为1                      1
 2. 就是1个1                      11
 3. 就是2个1                      21
 4. 就是1个2 1个1                 1211
 5. 就是1个1 1个2 2个1            111221
 6. 就是3个1 2个2 1个1            312211
 7. 就是1个3 1个1 2个2 2个1       13112221
 依次类推
 */

/*
 18 / 18 test cases passed.
 Status: Accepted
 Runtime: 4 ms
 Submitted: 0 minutes ago
 */
char* countAndSay(int n) {
    if (n == 1) {
        return "1";
    }
    char *lastRes = countAndSay(n - 1);
    char *res = (char *)malloc(sizeof(char) * 10000);
    memset(res, 0, sizeof(char) * 10000);
    long lastlen = strlen(lastRes);
    int charnum = 1, k = 0, i;
    for (i = 0; i < lastlen - 1; i ++) {
        if (lastRes[i] == lastRes[i + 1]) {
            charnum ++;
        } else {
            res[k] = charnum + '0';
            res[k + 1] = lastRes[i];
            k +=2;
            charnum = 1;
        }
    }
    res[k] = charnum + '0';
    res[k + 1] = lastRes[i];
    k +=2;
    res[k] = '\0';
    return res;
}
