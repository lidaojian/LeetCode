//
//  lowestCommonAncestorOfABinarySearchTree.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/19.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "lowestCommonAncestorOfABinarySearchTree.h"

/**
 Lowest Common Ancestor of a Binary Search Tree
 Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.
 
 According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).”
 
            _______6______
           /              \
        ___2__          ___8__
       /      \        /      \
       0       4      7        9
     /  \
    3    5
 For example, the lowest common ancestor (LCA) of nodes 2 and 8 is 6. Another example is LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.
 题目大意：
  给定一个二叉排序树（二叉查找树），查找最近的公共父节点
 
 解题报告：
 通过观察排序二叉树的结构可以发现二叉树的特点 左孩子(节点)都小于父节点 右孩子(节点)都大于父节点这一特征，找到这个规律后，就可以逐步缩小查找范围了。
 */

/**
 https://leetcode.com/submissions/detail/136908058/
 27 / 27 test cases passed.
 Status: Accepted
 Runtime: 20 ms
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root->val > p->val && root->val > q->val) {
        return lowestCommonAncestor(root->left, p, q);
    } else if (root->val < p->val && root->val < q->val) {
        return lowestCommonAncestor(root->right, p, q);
    }
    return root;
}
