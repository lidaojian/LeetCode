//
//  invertBinaryTree.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/18.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "invertBinaryTree.h"

/**
 Invert a binary tree.
        4
      /   \
     2     7
    / \   / \
   1   3 6   9
 to
        4
      /   \
     7     2
    / \   / \
   9   6 3   1
 Trivia:
 This problem was inspired by this original tweet by Max Howell:
 Google: 90% of our engineers use the software you wrote (Homebrew), but you can’t invert a binary tree on a whiteboard so fuck off.
 
 题目大意：
 翻转二叉树（求二叉树的镜像）
 */

/**
 https://leetcode.com/submissions/detail/136759942/
 68 / 68 test cases passed.
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
struct TreeNode* invertTree(struct TreeNode* root) {
    if (!root) {
        return NULL;
    }
    root->left = invertTree(root->left);
    root->right = invertTree(root->right);
    struct TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
    return root;
}
