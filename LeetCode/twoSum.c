//
//  twoSum.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/11.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "twoSum.h"
#include <stdlib.h>

/*
 Two Sum
 Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 
 You may assume that each input would have exactly one solution, and you may not use the same element twice.
 
 Example:
 Given nums = [2, 7, 11, 15], target = 9,
 
 Because nums[0] + nums[1] = 2 + 7 = 9,
 return [0, 1].
 
 */
int *twoSum(int* nums, int numsSize, int target) {
    int *result = (int *)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i ++) {
        for (int j = i + 1; (j < numsSize && j != i); j ++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                break;
            }
        }
    }
    return result;
}
