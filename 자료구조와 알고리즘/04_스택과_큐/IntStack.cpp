#include <iostream>
#include "IntStack.h"


// 스택 초기화
int Initialize(IntStack * s, int max)
{
    s->ptr = 0;
    s->stk = new(std::nothrow) int[max];       // 메모리 할당 실패 확인
    if(!s->stk)
    {
        s->max = 0;
        return -1;
    }
    s->max = max;

    return 0;
}

// 스택에 데이터를 푸시
int Push(IntStack * s, int x)
{
    if(IsFull(s)) return -1;

    s->stk[s->ptr] = x;
    s->ptr++;

    return 0;
}

// 스택에 데이터를 팝
int Pop(IntStack * s, int *x)
{
    if(s->ptr <= 0) return -1;

    s->ptr--;
    *x = s->stk[s->ptr];

    return 0;
}

// 스택에서 데이터를 피크
int Peek(IntStack * s, int *x)
{
    if(s->ptr <= 0) return -1;

    *x = s->stk[s->ptr - 1];

    return 0;
}

// 스택 비우기
void Clear(IntStack * s)
{
    s->ptr = 0;
}

// 스택의 최대 용량
int Capacity(const IntStack *s)
{
    return s->max;
}

// 스택의 데이터 개수
int Size(const IntStack * s)
{
    return s->ptr;
}

// 스택이 비어있는지 확인
int IsEmpty(const IntStack * s)
{
    return s->ptr <= 0;
}

// 스택이 가득 찼는지 확인
int IsFull(const IntStack * s)
{
    return s->ptr >= s->max;
}

// 스택에서 검색
int Search(const IntStack * s, int x)
{
    for(int i = s->ptr - 1; i >= 0; i--)
    {
        if(s->stk[i] == x) return i;
    }

    return -1;
}

// 모든 데이터 출력
void Print(const IntStack * s)
{
    if(IsEmpty(s))
    {
        std::cout << "스택이 비어있습니다.\n";
        return;
    }

    for(int i = 0; i < s->ptr; i++)
    {
        std::cout << s->stk[i] << " ";
    }
    std::cout << std::endl;
}

// 스택 종료
void Terminate(IntStack * s)
{
    s->max = 0;
    s->ptr = 0;
    delete [] s->stk;
    s->stk = nullptr;
}
