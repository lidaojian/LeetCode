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

void printList(struct ListNode *p);

struct ListNode *tailCreatList(int a[], int n);

#endif /* leetCodeCommon_h */
