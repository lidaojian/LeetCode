//
//  searchInsertPosition.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/15.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "searchInsertPosition.h"

/**
 Search Insert Position
 Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
 
 You may assume no duplicates in the array.
 
 Example 1:
 Input: [1,3,5,6], 5
 Output: 2
 
 Example 2:
 Input: [1,3,5,6], 2
 Output: 1
 
 Example 3:
 Input: [1,3,5,6], 7
 Output: 4
 
 Example 4:
 Input: [1,3,5,6], 0
 Output: 0
 
 题目大意：
 给定一个有序的数字，输入一个数，返回应该插入的位置。
 
 */

/*
 https://leetcode.com/submissions/detail/136258255/
 Submission Detail
 62 / 62 test cases passed.
 Status: Accepted
 Runtime: 4 ms
 */
int searchInsert(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i ++) {
        if (nums[i] == target || nums[i] > target) {
            return i;
        }
    }
    return numsSize;
}

