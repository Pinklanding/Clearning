//
//  linked_list.c
//  Clearning
//
//  Created by 关春 on 2019/12/27.
//  Copyright © 2019 关春. All rights reserved.
//

#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void add(List *plist, int number);

int main(int argc, char const *argv[]){
    
    List list;
    list.head = NULL;
    int number;
    
    do {
        printf("Input");
        scanf("%d", &number);
        if (number != -1) {
            add(&list, number);
        }
    }while (number != -1);
    
    return 0;
}

void add(List *plist, int number){
    Node *p = (Node*)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    //find the last
    Node *last = plist->head;
    if (last) {
        while (last->next) {
            last = last ->next;
        }
        //attach
        last->next = p;
    }else{
        plist->head = p;
    }
}

int show(List *plist, int number){
    return 1;
}

