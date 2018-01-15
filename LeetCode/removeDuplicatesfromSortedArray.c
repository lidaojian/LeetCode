//
//  removeDuplicatesfromSortedArray.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/15.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "removeDuplicatesfromSortedArray.h"
#include <stdlib.h>

/**
 Remove Duplicates from Sorted Array
 Given a sorted array, remove the duplicates in-place such that each element appear only once and return the new length.
 
 Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
 
 Example:
 
 Given nums = [1,1,2],
 
 Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
 It doesn't matter what you leave beyond the new length.

 题目大意： 移除数组中重复的元素 返回移除后数组的长度
 */

/*
 Submission Detail
 161 / 161 test cases passed.
 Status: Accepted
 Runtime: 17 ms
 Submitted: 0 minutes ago
 */
int removeDuplicates(int* nums, int numsSize) {
    if (!numsSize) {
        return numsSize;
    }
    int newlen = 1;
    for (int i = 1; i < numsSize; i ++) {
        if (nums[i] != nums[i - 1]) {
            nums[newlen] = nums[i];
            newlen ++;
        }
    }
    return newlen;
}
