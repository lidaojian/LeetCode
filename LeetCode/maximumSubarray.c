//
//  maximumSubarray.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/15.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "maximumSubarray.h"
#include <stdlib.h>

/*
 Maximum Subarray
 Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
 
 For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
 the contiguous subarray [4,-1,2,1] has the largest sum = 6.
 
 click to show more practice.
 
 More practice:
 If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
 
 
 Input:
 [-2,1]
 Expected:
 1
 
 Input:
 [-1]
 Input:
 [-1]
 
 题目大意：
 找出连续最大子序列的和(至少包含一个数)
 */

/**
 https://leetcode.com/submissions/detail/136275324/
 Submission Detail
 202 / 202 test cases passed.
 Status: Accepted
 Runtime: 224 ms
 Submitted: 0 minutes ago
 
 T(n) = O(n^2)
 */
int maxSubArray(int* nums, int numsSize) {
    if (!numsSize) {
        return 0;
    }
    int maxSum = nums[0];
    for (int i = 0; i < numsSize; i ++) {
        int tempSum = nums[i];
        maxSum = maxSum < tempSum ? tempSum : maxSum;
        for (int j = i + 1; j < numsSize; j ++) {
            tempSum += nums[j];
            if (maxSum < tempSum) {
                maxSum = tempSum;
            }
        }
    }
    return maxSum;
}

/*
 Submission Detail
 202 / 202 test cases passed.
 Status: Accepted
 Runtime: 10 ms
 
 dynamic programming (DP)
 T(n) = O(n)
 */
int maxSubArray2(int* nums, int numsSize) {
    if (!numsSize) {
        return 0;
    }
    int *dpSum = (int *)malloc(sizeof(int) * numsSize);
    dpSum[0] = nums[0];
    int maxSum = dpSum[0];
    for(int i = 1; i < numsSize; i++) {
        if (dpSum[i - 1] > 0) {
            dpSum[i] = dpSum[i - 1] + nums[i];
        } else {
            dpSum[i] = nums[i];
        }
        maxSum = maxSum < dpSum[i] ? dpSum[i] : maxSum;
    }
    free(dpSum);
    return maxSum;
}
