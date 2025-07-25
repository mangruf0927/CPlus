#include <iostream>
#include "IntQueue.h"

int Initialize(IntQueue *q, int max)
{
    q->num = 0;
    q->front = 0;
    q->rear = 0;
    
    q->que = new (std::nothrow) int[q->max];
    if(!q->que)
    {
        q->max = 0;
        return -1;
    }
    
    q->max = max;
    return 0;
}

// 큐에 데이터를 인큐
int Enqueue(IntQueue *q, int x)
{
    if(q->num >= q->max) return -1;
    else
    {
        q->num++;
        q->que[q->rear] = x;
        q->rear++;
        if(q->rear == q->max) q->rear = 0;
        return 0;
    }
}

// 큐에 데이터를 디큐
int Dequeue(IntQueue *q, int *x)
{
    if(q->num <= 0) return -1;
    else
    {
        q->num--;
        *x = q->que[q->front];
        q->front++;
        if(q->front == q->max) q->front = 0;
        return 0;
    }
}

// 큐에서 데이터를 피크
int Peek(IntQueue *q, int *x)
{
    if(q->num <= 0) return -1;
    *x = q->que[q->front];
    return 0;
}

// 모든 데이터 삭제
void Clear(IntQueue *q)
{
    q->num = 0;
    q->front = 0;
    q->rear = 0;
}

// 큐의 최대 용량
int Capacity(const IntQueue *q)
{
    return q->max;
}

// 큐에 저장된 데이터 개수
int Size(const IntQueue *q)
{
    return q->num;
}

// 큐가 비었는지 확인
int isEmpty(const IntQueue *q)
{
    return q->num <= 0;
}

// 큐가 가득 찼는지 확인
int isFull(const IntQueue *q)
{
    return q->num >= q->max;
}

// 큐에서 검색
int Search(const IntQueue *q, int x)
{
    if(q->num <= 0) return -1;

    for(int i = 0; i < q->num; i++)
    {
        int idx = (i + q->front) % q->max;
        if(x == q->que[idx]) return idx;
    }

    return -1;
}

// 모든 데이터 출력
void Print(const IntQueue *q)
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

// 큐 종료
void Terminate(IntQueue *q)
{
    q->num = 0;
    q->max = 0;
    q->front = 0;
    q->rear = 0;
    delete [] q->que;
    q->que = nullptr;
}
