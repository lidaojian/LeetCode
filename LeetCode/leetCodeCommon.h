//
//  leetCodeCommon.h
//  LeetCode
//
//  Created by lidaojian on 2018/1/11.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#ifndef leetCodeCommon_h
#define leetCodeCommon_h

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Create tail List  尾插法创建链表
struct ListNode *tailCreatList(int a[], int n);

void printList(struct ListNode *p);

// Create BinaryTree 创建二叉树
struct TreeNode *createBinaryTree(void);

// 前序遍历二叉树
void preOrderTraversalBinaryTree(struct TreeNode *T);

// 中序遍历二叉树
void inOrderTraversalBinaryTree(struct TreeNode *T);

// 后序遍历二叉树
void postOrderTraversalBinaryTree(struct TreeNode *T);

#endif /* leetCodeCommon_h */
