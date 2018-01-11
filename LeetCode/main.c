//
//  main.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/2.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include <stdio.h>
#include "twoSum.h"
#include "addTwoNumbers.h"
#include "reverseInteger.h"
#include "integerToRoman.h"
#include "romanToInteger.h"
#include "longestCommonPrefix.h"

int main(int argc, const char * argv[]) {
    // insert code here...
   
    //  Two Sum
    int twoSum_nums[4] = {1, 7, 8, 8};
    int *twoSum_result = twoSum(twoSum_nums, 4, 9);
    printf("========= Two Sum ==========\n");
    printf("the result is:\n%d %d\n", twoSum_result[0], twoSum_result[1]);
    
    //  Add Two Numbers
    int addTwoNumbers_number1Array[3] = {5, 6, 7};
    int addTwoNumbers_number2Array[3] = {5, 6, 4};
    struct ListNode *addTwoNumbers_number1 = tailCreatList(addTwoNumbers_number1Array, 3);
    struct ListNode *addTwoNumbers_number2 = tailCreatList(addTwoNumbers_number2Array, 3);
    printf("========= Add Two Numbers ==========\n");
    printList(addTwoNumbers(addTwoNumbers_number1, addTwoNumbers_number2));
    
    //  Reverse Integer
    printf("========= Reverse Integer ==========\n");
    printf("%d\n", reverse(1534236469));
    printf("%d\n", reverse(-123));
    
    //  Integer to Roman
    printf("========= Integer to Roman ==========\n");
    printf("%s\n", intToRoman(1456));
    
    //   Roman to Integer
    printf("========= Roman to Integer ==========\n");
    printf("%d\n", romanToInt("MCDLVI"));
    
    //  Longest Common Prefix
    printf("========= Longest Common Prefix ==========\n");
    char *longestCommonPrefix_strs[2] = {"ca","a"};
    printf("%s\n", longestCommonPrefix(longestCommonPrefix_strs, 2));
    
    return 0;
}



