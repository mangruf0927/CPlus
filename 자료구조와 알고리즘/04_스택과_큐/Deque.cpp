#include <iostream>
#include "Deque.h"

int Initialize(Deck *q, int max)
{
    q->num = q->front = q->rear = 0;
    q->que = new(std::nothrow) int[max];
    if(!q->que)
    {
        q->max = 0;
        return -1;
    }
    q->max = max;
    return 0;
}

int Enqueue(Deck *q, int x, const char dir)
{
    if(q->num >= q->max) return -1;

    q->num++;
    if(dir == 'l' || dir == 'L')
    {
        q->front--;
        if(q->front < 0) q->front = q->max - 1;
        q->que[q->front] = x;
    }
    else if(dir == 'r' || dir == 'R')
    {
        q->que[q->rear] = x;
        q->rear++;
        if(q->rear >= q->max) q->rear = 0;
    }
    else return -1;

    return 0;
}

int Dequeue(Deck *q, int *x, const char dir)
{
    if(q->num <= 0) return -1;

    q->num--;
    if(dir == 'l' || dir == 'L')
    {
        *x = q->que[q->front];
        q->front++;
        if(q->front >= q->max) q->front = 0;
    }
    else if(dir == 'r' || dir == 'R')
    {
        q->rear--;
        *x = q->que[q->rear];
        if(q->rear < 0) q->rear = q->max - 1;
    }
    else return -1;

    return 0;
}

int Peek(Deck *q, int *x, const char dir)
{
    if(dir == 'l' || dir == 'L')
    {
        *x = q->que[q->front];
    }
    else if(dir == 'r' || dir == 'R')
    {
        int idx = (q->rear - 1 + q->max) % q->max;
        *x = q->que[idx];
    }
    else return -1;

    return 0;
}

void Clear(Deck *q)
{
    q->num = q->front = q->rear = 0;
}

int Capacity(const Deck *q)
{
    return q->max;
}

int Size(const Deck *q)
{
    return q->num;
}

int isEmpty(const Deck *q)
{
    return q->num <= 0;
}

int isFull(const Deck *q)
{
    return q->num >= q->max;
}

int Search(const Deck *q, int x)
{
    if(q->num <= 0) return -1;

    for(int i = 0; i < q->num; i++)
    {
        int idx = (i + q->front) % q->max;
        if(x == q->que[idx]) return i;
    }

    return -1;
}

void Print(const Deck *q)
{
    if(q->num <= 0) 
    {
        std::cout << "큐가 비어있습니다.\n";
        return;
    }

    for(int i = 0; i < q->num; i++)
    {
        int idx = (i + q->front) % q->max;
        std::cout << q->que[idx] << " ";
    }
    std::cout << std::endl;
}

void Terminate(Deck *q)
{
    q->num = 0;
    q->max = 0;
    q->front = 0;
    q->rear = 0;
    delete [] q->que;
    q->que = nullptr;
}
