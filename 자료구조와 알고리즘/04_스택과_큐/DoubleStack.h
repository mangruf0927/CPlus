#ifndef DOUBLE_STACK_H
#define DOUBLE_STACK_H

struct DoubleStack
{
    int max;        // 스택 용량
    int ptrA;       // 스택 A 포인터
    int ptrB;       // 스택 B 포인터
    int *stk;       // 스택의 첫 요소에 대한 포인터
};

// 스택 초기화
int Initialize(DoubleStack * s, int max);

// 스택에 데이터를 푸시
int Push(DoubleStack * s, int x, char id);

// 스택에 데이터를 팝
int Pop(DoubleStack * s, int *x, char id);

// 스택에서 데이터를 피크
int Peek(DoubleStack * s, int *x, char id);

// 스택 비우기
void Clear(DoubleStack * s);

// 스택의 최대 용량
int Capacity(const DoubleStack *s);

// 스택의 데이터 개수
int Size(const DoubleStack * s);

// 스택이 비어있는지 확인
int IsEmpty(const DoubleStack * s, char id);

// 스택이 가득 찼는지 확인
int IsFull(const DoubleStack * s);

// 스택에서 검색
int SearchA(const DoubleStack * s, int x);
int SearchB(const DoubleStack * s, int x);

// 모든 데이터 출력
void Print(const DoubleStack * s);

// 스택 종료
void Terminate(DoubleStack * s);

#endif
