#include "Q8_list.h"

List::List()
{
    num = 0;
}

bool List::isEmpty() const
{
    return num == 0;
}

bool List::isFull() const
{
    return num == MAX;
}

bool List::add(const Item & item)
{
    if(isFull()) return false;
    else 
    {
        items[num++] = item;
        return true;
    }
}

void List::visit(void (*pf)(Item &))
{
    for(int i = 0; i < num; i++)
    {
        pf(items[i]);
    }
}
