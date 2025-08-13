#include "Q4_stack.h"

Stack::Stack(int n)
{
    size = n;
    pitems = new Item[size];
    top = 0;
}

Stack::Stack(const Stack & st)
{
    size = st.size;
    pitems = new Item[size];

    for(int i = 0; i < size; i++)
        pitems[i] = st.pitems[i];

    top = st.top;
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == size;
}

bool Stack::push(const Item & item)
{
    if(isfull()) return false;

    pitems[top++] = item;
    return true;
}

bool Stack::pop(Item & item)
{
    if(isempty()) return false;

    item = pitems[--top];
    return true;
}

Stack & Stack::operator=(const Stack & st)
{
    if(this == & st) return *this;

    delete [] pitems;

    size = st.size;
    pitems = new Item[size];
    for(int i = 0; i < size; i++)
        pitems[i] = st.pitems[i];
    top = st.top;

    return *this;
}

std::ostream & operator<<(std::ostream & os, const Stack & st)
{
    if(st.isempty()) os << "스택이 비어있습니다.";
    else
    {
        for(int i = 0; i < st.top; i++)
        {
            os << st.pitems[i] << " ";
        }
    }   
    return os;
}
