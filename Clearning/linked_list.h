//
//  linked_list.h
//  Clearning
//
//  Created by 关春 on 2019/12/27.
//  Copyright © 2019 关春. All rights reserved.
//

#ifndef linked_list_h
#define linked_list_h

#include <stdio.h>
typedef struct _node {
    int value;
    struct _node *next;
} Node;

typedef struct _list{
    Node *head;
    //Node *tail;
}List;

#endif /* linked_list_h */
