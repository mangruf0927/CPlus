#include <iostream>
#include <cctype>

using namespace std;

// Q1
/*
#include "Q1_account.h"

int main()
{
    BankAccount kim{"hankyeol", "110-333-444444", 100000.0};
    kim.Show(); 

    cout << "100000원 입금\n";
    kim.Deposit(10000);
    kim.Show();

    cout << "120000원 출금\n";
    kim.Withdraw(120000);
    kim.Show();

    cout << "15000원 출금\n";
    kim.Withdraw(15000);
    kim.Show();

    return 0;
}
*/

// Q2
/*
#include "Q2_person.h"
int main()
{
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    one.Show();
    one.FormalShow();

    cout << endl;

    two.Show();
    two.FormalShow();

    cout << endl;

    three.Show();
    three.FormalShow();

    return 0;
}
*/

// Q3
/*
#include "Q3_golf.h"

int main()
{
    Golf golf1;
    golf1.ShowGolf();
    golf1.SetGolf();
    golf1.ShowGolf();
    golf1.Handicap(5);
    golf1.ShowGolf();
    
    
    Golf golf2{"mangruf", 24};
    golf2.ShowGolf();
    golf2.Handicap(21);
    golf2.ShowGolf();

    return 0;
}
*/

// Q4
/*
#include "Q4_sales.h"

int main()
{
    using namespace SALES;

    Sales sale1;
    sale1.SetSales();
    sale1.ShowSales();
    
    double arr[4] = {1999.9, 1996.2, 1997.2, 1993.11};
    Sales sale2 = {arr, 4};
    sale2.ShowSales();
    
    return 0;
}
*/

// Q5
/*
#include "Q5_stack.h"

int main()
{
    Stack st;
    char ch;
    customer cus;
    double total = 0;

    cout << "주문을 추가하려면 A, 주문을 처리하려면 P, \n" << "종료하려면 Q를 입력하십시오.\n";

    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n') continue;

        if(!isalpha(ch)) continue;

        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "고객의 이름을 입력하세요 : ";
            cin.getline(cus.fullname, 35);
            cout << "지불 금액을 입력하세요 : ";
            cin >> cus.payment;
            cin.ignore();

            if(st.isfull()) cout << "스택이 가득 차 있습니다.\n";
            else st.push(cus);
            break;
        case 'p':
        case 'P':
            if(st.isempty()) cout << "스택이 비어 있습니다.\n";
            else 
            {
                st.pop(cus);
                total += cus.payment;
                cout << "#" << cus.fullname << "고객님의 주문서를 처리했습니다.\n";
                cout << "지금까지 총 수입 : " << total << endl;
            }
            break;
        }

        cout << "주문을 추가하려면 A, 주문을 처리하려면 P, \n" << "종료하려면 Q를 입력하십시오.\n";
    }

    cout << "총 수입 : " << total << endl;
    cout << "프로그램을 종료합니다.\n";

    return 0;
}
*/

// Q6
/*
#include "Q6_move.h"

int main()
{
    Move move1;
    move1.Reset(3, 6);
    move1.ShowMove();

    Move move2 = Move(6, 7);
    move2.ShowMove();

    Move move3 = move2.Add(move1);
    move3.ShowMove();

    return 0;
}
*/

// Q7
/*
#include "Q7_plorg.h"

int main()
{
    Plorg plorg1;
    plorg1.ShowPlorg();

    Plorg plorg2 {"Samsung Lions"};
    plorg2.ShowPlorg();
    plorg2.ResetCI(100);
    plorg2.ShowPlorg();
}
*/

// Q8
/*
#include "Q8_list.h"

void ShowItem(Item & item)
{
    cout << item << " ";
}

int main()
{
    List list;
    cout << boolalpha;
    cout << "리스트가 비어 있는가 ? : " << list.isEmpty() << endl;

    if(list.add(9)) cout << "추가 성공\n";
    else cout << "리스트가 가득 찼습니다.\n";
    if(list.add(2)) cout << "추가 성공\n";
    else cout << "리스트가 가득 찼습니다.\n";
    if(list.add(7)) cout << "추가 성공\n";
    else cout << "리스트가 가득 찼습니다.\n";

    cout << "리스트 항목들 : ";
    list.visit(ShowItem);
    cout << endl;

    cout << boolalpha;
    cout << "리스트가 꽉 찼는가 ? : " << list.isFull() << endl;

    return 0;
}
*/
