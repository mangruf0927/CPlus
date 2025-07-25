#include <iostream>

// Q4,Q5 
// #include "IntQueue.h"
// Q6 
//#include "Deque.h"

// Q4, Q5 큐
/*
int main()
{
    IntQueue queue;

    if(Initialize(&queue, 64) == -1)
    {
        cout << "큐의 생성에 실패하였습니다.\n";
        return 1;
    }

    while(1)
    {
        int menu, x, search;
        cout << "현재 데이터 수 : " << Size(&queue) << " / " << C
        cout << "(1)인큐 (2)디큐 (3)피크 (4)출력 (5)초기화 (6)검
        cin >> menu;

        if(menu == 0) break;

        switch (menu)
        {
        case 1:
            cout << "데이터 : ";
            cin >> x;
            if(Enqueue(&queue, x) == -1) cout << "오류 : 인큐에 
            cout << endl;
            break;
        case 2:
            if(Dequeue(&queue, &x) == -1) cout << "오류 : 디큐에 
            else cout << "디큐 데이터는 " << x << "입니다.\n";
            cout << endl;
            break;
        case 3:
            if(Peek(&queue, &x) == -1) cout << "오류 : 피크에 실
            else cout << "피크 데이터는 " << x << "입니다.\n";
            cout << endl;
            break;
        case 4:
            Print(&queue);
            cout << endl;
            break;
        case 5:
            Clear(&queue);
            cout << "큐을 초기화했습니다.\n";
            cout << endl;
            break;
        case 6:
            cout << "검색 데이터 : ";
            cin >> search;
            int idx = Search(&queue, search);
            if(idx == -1) cout << "오류 : 검색에 실패했습니다.\n"
            else 
            {
                cout << "검색 데이터 " << search << "가 존재합니
                cout << idx << ", " << Search2(&queue, search) <<
            }
            cout << endl;
            break;
        }
    }

    Terminate(&queue);
    return 0;
}
*/

// Q6 덱, 양방향 대기열
/*
int main()
{
    Deck queue;
    if(Initialize(&queue, 64) == -1)
    {
        cout << "큐의 생성에 실패하였습니다.\n";
        return 1;
    }
    while(1)
    {
        int menu, x, search;
        char dir;
        cout << "현재 데이터 수 : " << Size(&queue) << " / " << Capacity(&queue) << endl;
        cout << "(1)인큐 (2)디큐 (3)피크 (4)출력 (5)초기화 (6)검색 (0)종료 :";
        cin >> menu;
        if(menu == 0) break;
        switch (menu)
        {
            case 1:
                cout << "데이터 : ";
                cin >> x;
                cout << "왼쪽(L) / 오른쪽(R) : ";
                cin >> ws >> dir;
                if(Enqueue(&queue, x, dir) == -1) cout << "오류 : 인큐에 실패했습니다.\n";
                cout << endl;
                break;
            case 2:
                cout << "왼쪽(L) / 오른쪽(R) : ";
                cin >> ws >> dir;
                if(Dequeue(&queue, &x, dir) == -1) cout << "오류 : 디큐에 실패했습니다.\n";
                else cout << "디큐 데이터는 " << x << "입니다.\n";
                cout << endl;
                break;
            case 3:
                cout << "왼쪽(L) / 오른쪽(R) : ";
                cin >> ws >> dir;
                if(Peek(&queue, &x, dir) == -1) cout << "오류 : 피크에 실패했습니다.\n";
                else cout << "피크 데이터는 " << x << "입니다.\n";
                cout << endl;
                break;
            case 4:
                Print(&queue);
                cout << endl;
                break;
            case 5:
                Clear(&queue);
                cout << "큐을 초기화했습니다.\n";
                cout << endl;
                break;
            case 6:
                cout << "검색 데이터 : ";
                cin >> search;
                int idx = Search(&queue, search);
                if(idx == -1) cout << "오류 : 검색에 실패했습니다.\n";
                else cout << "검색 데이터 " << search << "가 존재합니다.\n";
                cout << endl;
                break;
            }
        }
        Terminate(&queue);
        return 0;
}
*/
