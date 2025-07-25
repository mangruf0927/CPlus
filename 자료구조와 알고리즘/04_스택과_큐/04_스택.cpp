#include <iostream>
#include "IntStack.h"
#include "DoubleStack.h"

using namespace std;

// 스택 
/*
int main()
{   
    IntStack stack;
    if(Initialize(&stack, 64) == -1)
    {
        cout << "스택 생성에 실패하였습니다.\n";
        return 1;
    }

    while(1)
    {
        int menu, x, search;
        cout << "현재 데이터 수 : " << Size(&stack) << " / " << Capacity(&stack) << endl;
        cout << "(1)푸시 (2)팝 (3)피크 (4)출력 (5)초기화 (6)검색 (0)종료 :";
        cin >> menu;

        if(menu == 0) break;

        switch (menu)
        {
        case 1:
            cout << "데이터 : ";
            cin >> x;
            if(Push(&stack, x) == -1) cout << "오류 : 푸시에 실패했습니다.\n";
            cout << endl;
            break;
        case 2:
            if(Pop(&stack, &x) == -1) cout << "오류 : 팝에 실패했습니다.\n";
            else cout << "팝 데이터는 " << x << "입니다.\n";
            cout << endl;
            break;
        case 3:
            if(Peek(&stack, &x) == -1) cout << "오류 : 피크에 실패했습니다.\n";
            else cout << "피크 데이터는 " << x << "입니다.\n";
            cout << endl;
            break;
        case 4:
            Print(&stack);
            break;
        case 5:
            Clear(&stack);
            cout << "스택을 초기화했습니다.\n";
            cout << endl;
            break;
        case 6:
            cout << "검색 데이터 : ";
            cin >> search;
            if(Search(&stack, search) == -1) cout << "오류 : 검색에 실패했습니다.\n";
            else cout << "검색 데이터 " << search << "가 존재합니다.\n";
            cout << endl;
            break;
        }
    }
    
    Terminate(&stack);
    return 0;
}
*/

// 이중 스택
/*
int main()
{
    DoubleStack stack;
    if(Initialize(&stack, 64) == -1)
    {
        cout << "스택 생성에 실패하였습니다.\n";
        return 1;
    }

    while(1)
    {
        int menu, x, search;
        char id;
        cout << "현재 데이터 수 : " << Size(&stack) << " / " << Capacity(&stack) << endl;
        cout << "(1)푸시 (2)팝 (3)피크 (4)출력 (5)초기화 (6)검색 (0)종료 :";
        cin >> menu;
        if(menu == 0) break;
        switch (menu)
        {
            case 1:
                cout << "스택 A or B : ";
                cin >> id;
                cout << "데이터 : ";
                cin >> x;
                if(Push(&stack, x, id) == -1) cout << "오류 : 푸시에 실패했습니다.\n";
                cout << endl;
                break;
            case 2:
                cout << "스택 A or B : ";
                cin >> id;
                if(Pop(&stack, &x, id) == -1) cout << "오류 : 팝에 실패했습니다.\n";
                else cout << "팝 데이터는 " << x << "입니다.\n";
                cout << endl;
                break;
            case 3:
                cout << "스택 A or B : ";
                cin >> id;
                if(Peek(&stack, &x, id) == -1) cout << "오류 : 피크에 실패했습니다.\n";
                else cout << "피크 데이터는 " << x << "입니다.\n";
                cout << endl;
                break;
            case 4:
                Print(&stack);
                cout << endl;
                break;
            case 5:
                Clear(&stack);
                cout << "스택을 초기화했습니다.\n";
                cout << endl;
                break;
            case 6:
                cout << "검색 데이터 : ";
                cin >> search;
                int idxA = SearchA(&stack, search);
                int idxB = SearchB(&stack, search);

                if(idxA == -1 && idxB == -1) cout << "오류 : 검색에 실패했습니다.\n";
                else
                {
                    if(idxA != -1) cout << "검색 데이터 " << search << "가 스택 A에 존재합니다.\n";
                    if(idxB != -1) cout << "검색 데이터 " << search << "가 스택 B에 존재합니다.\n";
                }
                cout << endl;
                break;
            }
        }
        
        Terminate(&stack);
        return 0;
}
*/
