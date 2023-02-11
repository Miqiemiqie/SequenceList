#include "SequenceList.h"

void test1()
{
    SL sl;
    SeqListInit(&sl);
    SeqListPushBack(&sl,1);
    SeqListPushBack(&sl,2);
    SeqListPushBack(&sl,3);
    SeqListPushBack(&sl,4);
    SeqListPrint(&sl);
    SeqListPopBack(&sl);
    SeqListPrint(&sl);
    SeqListPushFront(&sl,10);
    SeqListPushFront(&sl,20);
    SeqListPushFront(&sl,30);
    SeqListPushFront(&sl,40);
    SeqListPrint(&sl);
    SeqListPopFront(&sl);
    SeqListPopFront(&sl);
    SeqListPopFront(&sl);
    SeqListPrint(&sl);
    SeqListDestroy(&sl);
    SeqListPrint(&sl);

}


int main() {
    test1();

    return 0;
}
