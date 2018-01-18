//
//  maximumDepthOfBinaryTree.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/18.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "maximumDepthOfBinaryTree.h"

/**
 Maximum Depth of Binary Tree
 Given a binary tree, find its maximum depth.
 
 The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
 题目大意：
 求二叉树的最大深度(层级数)
 */


/*
 https://leetcode.com/submissions/detail/136757331/
 38 / 38 test cases passed.
 Status: Accepted
 Runtime: 9 ms
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if (!root) {
        return 0;
    }
    int leftChidDepth = maxDepth(root->left) + 1;
    int rightChildDepth = maxDepth(root->right) + 1;
    return leftChidDepth > rightChildDepth ? leftChidDepth : rightChildDepth;
}
