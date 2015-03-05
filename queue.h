#include<stdio.h>
#include<stdlib.h>

#include "list.h"

/* by default, QueueElement is int
 Usage: #define QueueElement <TYPE> */
#ifndef QueueElement
#define QueueElement void*
#endif

typedef struct{
    int capacity;
    int size;
    QueueElement e;
    struct list_head list;
} Queue;

Queue * initQueue(int max);
QueueElement front(Queue *Q);	
QueueElement tail(Queue* Q);
void dequeue(Queue *Q);
void enqueue(Queue *Q, QueueElement element);

