//
//  lowestCommonAncestorOfABinaryTree.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/19.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "lowestCommonAncestorOfABinaryTree.h"

/**
 Lowest Common Ancestor of a Binary Tree
 Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.
 
 According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).”
 
            _______3______
           /              \
        ___5__          ___1__
       /      \        /      \
       6       2       0       8
     /  \
     7   4
 For example, the lowest common ancestor (LCA) of nodes 5 and 1 is 3. Another example is LCA of nodes 5 and 4 is 5, since a node can be a descendant of itself according to the LCA definition.
 题目大意：
 找最近的公共父节点
 
 */


/**
 https://leetcode.com/submissions/detail/136909660/
 31 / 31 test cases passed.
 Status: Accepted
 Runtime: 16 ms
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* lowestCommonAncestor2(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root == NULL || p == root || q == root) {
        return root;
    }
    struct TreeNode *left = lowestCommonAncestor2(root->left, p, q);
    struct TreeNode *right =  lowestCommonAncestor2(root->right, p, q);
    if (left && right) {
        return root;
    }
    return left == NULL ? right : left;
}
