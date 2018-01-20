//
//  majorityElement.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/20.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "majorityElement.h"
#include <stdlib.h>
#include <string.h>

/**
 Majority Element
 Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
 
 You may assume that the array is non-empty and the majority element always exist in the array.
 
 Credits:
 Special thanks to @ts for adding this problem and creating all test cases.
 题目大意：
 查找出现最多的元素 个数大于数组长度的一半
 */

/**
 先对数组排序 中间的即为所求
 https://leetcode.com/submissions/detail/136972172/
 44 / 44 test cases passed.
 Status: Accepted
 Runtime: 14 ms
 */
int sortCompar(const void * a,const void * b)
{
    return (*(int *)a - *(int * )b);
}

int majorityElement(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int),sortCompar);
    return nums[numsSize / 2];
}


/**
 https://leetcode.com/submissions/detail/136977142/
 44 / 44 test cases passed.
 Status: Accepted
 Runtime: 10 ms
 */
int majorityElement2(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    int count = 0, res = nums[0];
    for (int i = 0; i < numsSize; i ++) {
        if (count == 0) {
            res = nums[i];
            count ++;
        } else if (res == nums[i]) {
            count ++;
        } else {
            count --;
        }
    }
    return res;
}
