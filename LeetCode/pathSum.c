//
//  pathSum.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/18.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "pathSum.h"

/**
 Path Sum
 Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.
 
 For example:
 Given the below binary tree and sum = 22,
        5
       / \
      4   8
     /   / \
    11  13  4
   /  \      \
  7    2      1
 return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
 
 题目大意：
 从根节点到叶子节点路径节点的和是否等于sum
 
 */


/**
 https://leetcode.com/submissions/detail/136762706/
 114 / 114 test cases passed.
 Status: Accepted
 Runtime: 7 ms
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int sum) {
    if (!root) {
        return false;
    } else if (!root->left && !root->right && sum == root->val) {
        return true;
    }
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}

