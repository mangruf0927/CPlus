#ifndef STACK04_H_
#define STACK04_H_

#include <iostream>

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};            // 클래스용 상수
    Item * pitems;              // 스택 항목들을 저장
    int size;                   // 스택에 들어 있는 원소의 수
    int top;                    // 스택의 꼭대기 항목
public:
    Stack(int n = MAX);
    Stack(const Stack & st);    // 복사 생성자
    ~Stack();

    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    Stack & operator=(const Stack & st);    //   대입 연산자

    friend std::ostream & operator<<(std::ostream & os, const Stack & st);
};

#endif
