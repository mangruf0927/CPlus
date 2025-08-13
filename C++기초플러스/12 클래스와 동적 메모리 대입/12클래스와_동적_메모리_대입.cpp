#include <iostream>

using namespace std;

// Q1
/*
#include "Q1_cow.h"
int main()
{
    Cow cow1;
    cow1.ShowCow();

    Cow cow2("cowboy", "running", 130);
    cow2.ShowCow();

    Cow cow3;
    cow3 = cow2;
    cow3.ShowCow();

    return 0;
}
*/

// Q2
/*
#include "Q2_string2.h" 
int main()
{
    String s1(" and I am a C++ student.");
    String s2 = "영문 이름을 입력하십시오: ";
    String s3;
    
    cout << s2;
    cin >> s3;

    s2 = "My name is " + s3;
    cout << s2 << ".\n";
    
    s2 = s2 + s1;
    s2.stringup();
    cout << "다음 문자열에는 \n" << s2 << "\n문자 'A'가 " << s2.has('A') << "개 들어 있습니다.\n";

    s1 = "red";

    String rgb[3] = { String(s1), String("green"), String("blue")};
    cout << "빛의 삼원색의 이름을 하나만 입력하십시오 : ";
    String ans;
    bool success = false;

    while(cin >> ans)
    {
        ans.stringlow();
        for(int i = 0; i < 3; i++)
        {
            if(ans == rgb[i])
            {
                cout << "맞았습니다!\n";
                success = true;
                break;
            }
        }

        if(success) break;
        else cout << "다시 입력하십시오: ";
    }
    cout << "프로그램을 종료합니다.\n";
    return 0;
}
*/

// Q3
/*
#include "Q3_stock.h"
int main()
{
    Stock stocks[4] = {
        Stock("NanoSmart", 12, 20.0), 
        Stock("Boffo Objects", 200, 2.0), 
        Stock("Monolithic Obelisks", 130, 3.25), 
        Stock("Fleep Enterprises", 60, 6.5)
    };

    cout << "보유주식 리스트 : \n";
    int st;
    for(st = 0; st < 4; st++)
        cout << stocks[st];
    
    const Stock * top = &stocks[0];

    for(st = 1; st < 4; st++)
        top = &top->topval(stocks[st]);

    cout << "\n최고 가치의 주식 : \n";
    cout << top;

    return 0;
}
*/

// Q4
/*
#include "Q4_stack.h"
int main()
{
    Stack s1(5); 
    cout << s1 << endl;

    for (int i = 1; i <= 5; i++)
        s1.push(i * 10); 

    unsigned long item;
    s1.pop(item);
    cout << "팝한 값: " << item << "\n";
    cout << s1 << endl;

    Stack s2 = s1;
    cout << s2 << endl;

    Stack s3;
    s3 = s1;
    cout << s3 << endl;

    s2.pop(item);
    cout << "s2에서 팝한 값: " << item << "\n";
    cout << s2 << endl;
    
    return 0;
}
*/
