#ifndef LIST_H_
#define LIST_H_

const int MAX = 100;
typedef int Item;

class List
{
private:
    Item items[MAX];
    int num;
public:
    List();
    bool isEmpty() const;
    bool isFull() const;
    bool add(const Item & item);
    void visit(void (*pf)(Item &));
};

#endif
