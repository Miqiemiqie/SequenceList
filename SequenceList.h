//
// Created by 蒋兴宇 on 29/1/2023.
//

#ifndef TEST_SEQUENCELIST_H
#define TEST_SEQUENCELIST_H
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct SeqList
{
    SLDataType* a;
    int size;
    int capacity;
}SL;

void SeqListInit(SL* ps);
void SeqListPrint(SL* ps);
void CheckCapacity(SL* ps);
void SeqListDestroy(SL* ps);

void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);

void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);




#endif //TEST_SEQUENCELIST_H
