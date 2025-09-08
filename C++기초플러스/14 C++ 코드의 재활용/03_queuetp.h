#ifndef QUEUETP_H_
#define QUEUETP_H_

template <class Type>
class QueueTP
{
private:
    enum {Q_SIZE = 10};
    struct Node
    {
        Type type;
        Node * next;
    };
    
    Node * front;       // Queue의 머리
    Node * rear;        // Queue의 꼬리
    int items;          // 현재 항목 수
    const int qsize;    // 최대 항목 수

    // 대입 연산자와 복사 연산자 막기
    QueueTP(const QueueTP&) = delete;
    QueueTP& operator=(const QueueTP&) = delete;
public:
    QueueTP(int qs = Q_SIZE);
    ~QueueTP();

    bool isEmpty() const { return items == 0; }
    bool isFull() const { return items == qsize; }
    int queueCount() const { return items; }
    
    bool enqueue(const Type & type);
    bool dequeue(Type & type);
};

template <class Type>
QueueTP<Type>::QueueTP(int qs) : qsize(qs)
{
    front = rear = 0;
    items = 0;
}

template <class Type>
QueueTP<Type>::~QueueTP()
{
    Node * temp;
    while(front != 0)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
    rear = 0;
    items = 0;
}

template <class Type>
bool QueueTP<Type>::enqueue(const Type & type)
{
    if(isFull()) return false;

    Node * add = new Node{type, nullptr};
    items++;

    if(front == 0) front = add;
    else rear->next = add;

    rear = add;
    return true;
}

template <class Type>
bool QueueTP<Type>::dequeue(Type & type)
{
    if(isEmpty()) return false;

    type = front->type;
    items--;

    Node * temp = front;
    front = front->next;
    delete temp;

    if(items == 0) rear = 0;
    return true;
}

#endif
