//
// Created by 蒋兴宇 on 29/1/2023.
//
#include "SequenceList.h"
void SeqListPrint(SL* ps)
{
    assert(ps);
    for (int i = 0; i < ps->size; ++i) {
        printf("%d ",ps->a[i]);
    }
    printf("\n");
}
void SeqListInit(SL* ps)
{
    assert(ps);
    ps->a=NULL;
    ps->capacity=ps->size=0;
}
void SeqListDestroy(SL* ps)
{
    free(ps->a);
    ps->a = NULL;
    ps->size = ps->capacity = 0;
}
void CheckCapacity(SL* ps)
{
    assert(ps);
    if (ps->size == ps->capacity)
    {
        int newCapacity = ps->capacity==0 ? 4 : ps->capacity*2;
        SLDataType* tmp = realloc(ps->a, sizeof(SLDataType)*newCapacity);
        if (tmp == NULL)
        {
            perror("realloc");
            exit(-1);
        }
        ps->a = tmp;
        ps->capacity = newCapacity;
    }
}
void SeqListPushBack(SL* ps, SLDataType x)
{
    assert(ps);
    CheckCapacity(ps);
    ps->a[ps->size]=x;
    ps->size++;
}
void SeqListPopBack(SL* ps)
{
    assert(ps);
    assert(ps->size > 0);
    ps->size--;
}
void SeqListPushFront(SL* ps, SLDataType x)
{
    assert(ps);
    CheckCapacity(ps);
    //首先挪动数据
    int prev = ps->size-1;
    while (prev>=0)
    {
        ps->a[prev+1] = ps->a[prev];
        prev--;
    }
    ps->a[0] = x;
    ps->size++;
}
void SeqListPopFront(SL* ps)
{
    assert(ps);
    int begin = 1;
    while (begin < ps->size)
    {
        ps->a[begin-1] = ps->a[begin];
        begin++;
    }
    ps->size--;
}
