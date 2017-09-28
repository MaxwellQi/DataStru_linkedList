//
//  single_list.h
//  linkedlist_demo
//
//  Created by zhangqi on 28/9/2017.
//  Copyright © 2017 zhangqi. All rights reserved.
//

#ifndef single_list_h
#define single_list_h

#include <stdio.h>

#endif /* single_list_h */


typedef struct Node{
    int data;
    struct Node *next;
}Node;

// init single list
void initSingleList();

// create single list
Node* createSingleList();

// judge the single list is empty
int isEmptySingleList();

// get length for single list
int getLengthSingleList(Node* pList);

// revert a single list
Node* reverse(Node *pList);
