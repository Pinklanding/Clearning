////
////  array.c
////  Clearning
////
////  Created by 关春 on 2019/12/27.
////  Copyright © 2019 关春. All rights reserved.
////
//
//#include "array.h"
//#include <stdio.h>
//#include <stdlib.h>
////#pragma once
//
//typedef struct {
//    int *array;
//    int size;
//}Array;
//
////Array array_create(init_size);
////void array_free(Array *a);
////int array_size(const Array *a);
////int* array_at(Array *a, int index);
////void array_inflate(Array *a, int more_size);
//
//Array array_create(int init_size){
//    Array a;
//    a.size = init_size;
//    a.array = (int*)malloc(sizeof(int)*init_size);
//    return a;
//}
//
//void array_free(Array *a){
//    free(a->array);
//    a->array = NULL;
//    a->size = 0;
//}
//
////封装，保护a的size;
//int array_size(const Array *a){
//    return a->size;
//}
//
//int* array_at(Array *a, int index){
//    return &(a->array[index]);
//}
//
//void array_inflate(Array *a, int more_size){
//    int *p = (int*)malloc(sizeof(int)*(a->size+more_size));
//    for (int i=0; i<a->size; i++){
//        p[i]=a->array[i];
//    }
//    free(a->array);
//    a->array = p;
//    a->size += more_size;
//}
//
//int array_get(const Array *a, int index){
//    return a->array[index];
//}
//
//void array_set(Array *a, int index, int value){
//    a->array[index] = value;
//}
//
//int main(int argc, char const *argv[]){
//    Array a = array_create(100);
//    
//    printf("%d\n",array_size(&a));
//    array_get(&a, 0);
//    array_set(&a, 0, 10);
//    printf("%d\n",*array_at(&a,0));
//    
//    *array_at(&a,0) = 12;
//    printf("%d\n",*array_at(&a,0));
//    
//    //printf("%d\n",array_size(&a));
//    
//    array_free(&a);
//    return 0;
//}
//
//
