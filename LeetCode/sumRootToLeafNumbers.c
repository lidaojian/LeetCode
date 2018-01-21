//
//  sumRootToLeafNumbers.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/21.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "sumRootToLeafNumbers.h"

/**
 Sum Root to Leaf Numbers
 Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.
 
 An example is the root-to-leaf path 1->2->3 which represents the number 123.
 
 Find the total sum of all root-to-leaf numbers.
 
 For example,
 
    1
   / \
  2   3
 The root-to-leaf path 1->2 represents the number 12.
 The root-to-leaf path 1->3 represents the number 13.
 
 Return the sum = 12 + 13 = 25.
 
        1
       / \
      2   5
     / \
    3   4
 
 sum :  123 + 124 + 15 =  262
 
 题目大意：
 求叶子节点的和
 
 典型的深度优先搜索(DFS)
 
 */

/**
 https://leetcode.com/submissions/detail/137158423/
 109 / 109 test cases passed.
 Status: Accepted
 Runtime: 3 ms
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int dfsGetSumNumbers(struct TreeNode *root, int sum) {
    if (!root) {
        return 0;
    } else if (!root->left && !root->right) {
        return sum * 10 + root->val;
    } else {
        return dfsGetSumNumbers(root->left, sum * 10 + root->val) + dfsGetSumNumbers(root->right, sum * 10 + root->val);
    }
}

int sumNumbers(struct TreeNode* root) {
    return dfsGetSumNumbers(root, 0);
}


