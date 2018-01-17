//
//  sameTree.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/17.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "sameTree.h"


/**
 Same Tree
 Given two binary trees, write a function to check if they are the same or not.
 
 Two binary trees are considered the same if they are structurally identical and the nodes have the same value.
 
 Example 1:
 Input:
   1         1
  / \       / \
 2   3     2   3
 
 [1,2,3],   [1,2,3]
 Output: true
 
 Example 2:
 Input:
   1         1
  /           \
 2             2
 
 [1,2],     [1,null,2]
 Output: false
 
 Example 3:
 Input:
   1         1
  / \       / \
 2   1     1   2
 
 [1,2,1],   [1,1,2]
 Output: false
 
 题目大意：判断两个二叉树是否相等
 
 https://leetcode.com/submissions/detail/136604816/
 57 / 57 test cases passed.
 Status: Accepted
 Runtime: 4 ms
 */


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (!p && !q) {
        return true;
    } else if (!p || !q) {
        return false;
    } else if (p->val == q->val) {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    return false;
}
