#ifndef DEQUE_H
#define DEQUE_H

struct Deck
{
    int max;
    int num;
    int front;
    int rear;
    int *que;
};

// 큐 초기화
int Initialize(Deck *q, int max);

// 큐에 데이터를 인큐
int Enqueue(Deck *q, int x, const char dir);

// 큐에 데이터를 디큐
int Dequeue(Deck *q, int *x, const char dir);

// 큐에서 데이터를 피크
int Peek(Deck *q, int *x, const char dir);

// 모든 데이터 삭제
void Clear(Deck *q);

// 큐의 최대 용량
int Capacity(const Deck *q);

// 큐에 저장된 데이터 개수
int Size(const Deck *q);

// 큐가 비었는지 확인
int isEmpty(const Deck *q);

// 큐가 가득 찼는지 확인
int isFull(const Deck *q);

// 큐에서 검색
int Search(const Deck *q, int x);

// 모든 데이터 출력
void Print(const Deck *q);

// 큐 종료
void Terminate(Deck *q);

# endif
