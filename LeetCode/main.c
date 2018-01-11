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
    /**
    int nums[4] = {1, 7, 8, 8};
    int *result = twoSum(nums, 4, 9);
    printf("%d %d\n", result[0], result[1]);
    **/
    
    //  Add Two Numbers
    /**
    int number1Array[3] = {5, 6, 7};
    int number2Array[3] = {5, 6, 4};
    struct ListNode *number1 = tailCreatList(number1Array, 3);
    struct ListNode *number2 = tailCreatList(number2Array, 3);
    printList(addTwoNumbers(number1, number2));
     */
    
    //  Reverse Integer
    /**
    printf("%d\n", reverse(1534236469));
    printf("%d\n", reverse(-123));
    */
    
    //  Integer to Roman
    /**
    printf("%s\n", intToRoman(1456));
     */
    
    //   Roman to Integer
    /**
    printf("%d\n", romanToInt("MCDLVI"));
    */
    
    return 0;
}



