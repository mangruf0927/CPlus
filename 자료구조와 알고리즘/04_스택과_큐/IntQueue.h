#ifndef INTQUEUE_H
#define INTQUEUE_H

struct IntQueue
{
    int max;
    int num;
    int front;
    int rear;
    int *que;
};

// 큐 초기화
int Initialize(IntQueue *q, int max);

// 큐에 데이터를 인큐
int Enqueue(IntQueue *q, int x);

// 큐에 데이터를 디큐
int Dequeue(IntQueue *q, int *x);

// 큐에서 데이터를 피크
int Peek(IntQueue *q, int *x);

// 모든 데이터 삭제
void Clear(IntQueue *q);

// 큐의 최대 용량
int Capacity(const IntQueue *q);

// 큐에 저장된 데이터 개수
int Size(const IntQueue *q);

// 큐가 비었는지 확인
int isEmpty(const IntQueue *q);

// 큐가 가득 찼는지 확인
int isFull(const IntQueue *q);

// 큐에서 검색
int Search(const IntQueue *q, int x);
int Search2(const IntQueue *q, int x);

// 모든 데이터 출력
void Print(const IntQueue *q);

// 큐 종료
void Terminate(IntQueue *q);

# endif
