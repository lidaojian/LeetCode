//
//  addTwoNumbers.c
//  LeetCode
//
//  Created by lidaojian on 2018/1/11.
//  Copyright © 2018年 lidaojian. All rights reserved.
//

#include "addTwoNumbers.h"
#include <stdlib.h>

/*
 Add Two Numbers
 You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
 
 You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 
 Example
 
 Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 Output: 7 -> 0 -> 8
 Explanation: 342 + 465 = 807.
 
 */

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }
    struct ListNode *result = NULL;
    struct ListNode *current = result;
    int carry = 0;
    while (l1 != NULL || l2 != NULL) {
        int sum = 0, a = 0, b = 0;
        a = (l1 != NULL) ? l1->val : 0;
        b = (l2 != NULL) ? l2->val : 0;
        sum = a + b + carry;
        carry = sum / 10;
        if (!result) {
            result = (struct ListNode *)malloc(sizeof(struct ListNode));
            current = result;
        } else {
            current->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            current = current->next;
        }
        current->val = sum % 10;
        if (l1) {
            l1 = l1->next;
        }
        if (l2) {
            l2 = l2->next;
        }
    }
    
    if (carry > 0) {
        current->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        current = current->next;
        current->val = carry;
    }
    current->next = NULL;
    return result;
}

// has Header node
/**
struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }
    struct ListNode *result = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *current = result;
    int carry = 0;
    while (l1!=NULL || l2!=NULL) {
        int sum = 0, a = 0, b = 0;
        a = (l1!=NULL) ? l1->val : 0;
        b = (l2!=NULL) ? l2->val : 0;
        sum = a + b + carry;
        carry = sum / 10;
        current->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        current = current->next;
        current->val = sum % 10;
        if (l1) {
            l1 = l1->next;
        }
        if (l2) {
            l2 = l2->next;
        }
    }
    
    if (carry > 0) {
        current->next = (struct ListNode *)malloc(sizeof(struct ListNode));
        current = current->next;
        current->val = carry;
    }
    current->next = NULL;
    return result->next;
}
*/

struct ListNode *tailCreatList(int a[], int n) {
    struct ListNode *head = NULL, *tail = NULL, *p = NULL;
    for (int i = 0; i < n; i ++) {
        p = (struct ListNode *)malloc(sizeof(struct ListNode));
        p->val = a[i];
        p->next = NULL;
        if (head == NULL) {
            head = p;
            tail = head;
        } else {
            tail->next = p;
            tail = p;
        }
    }
    
    return head;
}

void printList(struct ListNode *p) {
    while (p) {
        printf("%d ", p->val);
        p = p->next;
    }
    printf("\n");
}
