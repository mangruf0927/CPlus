#include <iostream>
#include "DoubleStack.h"

// 스택 초기화
int Initialize(DoubleStack * s, int max)
{
    s->max = max;
    s->ptrA = 0;
    s->ptrB = s->max - 1;
    s->stk = new(std::nothrow) int[max];       // 메모리 할당 실패 확인
    if(!s->stk)
    {
        s->max = 0;
        return -1;
    }
    return 0;
}

// 스택에 데이터를 푸시
int Push(DoubleStack * s, int x, char id)
{
    if(IsFull(s)) return -1;

    if(id == 'a' || id == 'A')
    {
        s->stk[s->ptrA] = x;
        s->ptrA++;
    }
    else if(id == 'b' || id == 'B')
    {
        s->stk[s->ptrB] = x;
        s->ptrB--;
    }
    else return -1;

    return 0;
}

// 스택에 데이터를 팝
int Pop(DoubleStack * s, int *x, char id)
{
    if(id == 'a' || id == 'A')
    {
        if(s->ptrA <= 0) return -1;
        s->ptrA--;
        *x = s->stk[s->ptrA];
    }
    else if(id == 'b' || id == 'B')
    {
        if(s->ptrB >= s->max - 1) return -1;
        s->ptrB++;
        *x = s->stk[s->ptrB];
    }
    else return -1;

    return 0;
}

// 스택에서 데이터를 피크
int Peek(DoubleStack * s, int *x, char id)
{
    if(id == 'a' || id == 'A')
    {
        if(s->ptrA <= 0) return -1;
        *x = s->stk[s->ptrA - 1];
    }
    else if(id == 'b' || id == 'B')
    {
        if(s->ptrB >= s->max - 1) return -1;
        *x = s->stk[s->ptrB + 1];
    }
    else return -1;

    return 0;
}

// 스택 비우기
void Clear(DoubleStack * s)
{
    s->ptrA = 0;
    s->ptrB = s->max - 1;
}

// 스택의 최대 용량
int Capacity(const DoubleStack *s)
{
    return s->max;
}

// 스택의 데이터 개수
int Size(const DoubleStack * s)
{
    return s->ptrA + (s->max - 1 - s->ptrB);
}

// 스택이 비어있는지 확인
int IsEmpty(const DoubleStack * s, char id)
{
    if(id == 'a' || id == 'A') return s->ptrA <= 0;
    else if(id == 'b' || id == 'B') return s->ptrB >= s->max - 1;
    else return -1;
}

// 스택이 가득 찼는지 확인
int IsFull(const DoubleStack * s)
{
    return s->ptrA > s->ptrB;
}

// 스택에서 검색
int SearchA(const DoubleStack* s, int x) {
    for (int i = s->ptrA - 1; i >= 0; i--) {
        if (s->stk[i] == x) return i;
    }
    return -1;
}

int SearchB(const DoubleStack* s, int x) {
    for (int i = s->ptrB + 1; i < s->max; i++) {
        if (s->stk[i] == x) return i;
    }
    return -1;
}

// 모든 데이터 출력
void Print(const DoubleStack * s)
{
    if (IsEmpty(s, 'a') && IsEmpty(s, 'b'))
    {
        std::cout << "스택이 비어있습니다.\n";
        return;
    }

    std::cout << "[ 스택 A ]\n";
    for(int i = s->ptrA - 1; i >= 0; i--)
    {
        std::cout << s->stk[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "[ 스택 B ]\n";
    for(int i = s->ptrB + 1; i < s->max; i++)
    {
        std::cout << s->stk[i] << " ";
    }
    std::cout << std::endl;
}

// 스택 종료
void Terminate(DoubleStack * s)
{
    delete [] s->stk;
    s->stk = nullptr;
    s->ptrA = 0;
    s->ptrB = 0;
    s->max = 0;
}
