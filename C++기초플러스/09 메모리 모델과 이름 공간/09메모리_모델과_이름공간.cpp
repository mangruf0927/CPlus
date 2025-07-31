#include <iostream>
#include <cstring>
#include <new>

using namespace std;

// Q1
/* 
#include "Q1_golf.h"

int main()
{
    golf ann;
    setgolf(ann, "AnnBirdfree", 24);
    showgolf(ann);

    handicap(ann, 3);
    showgolf(ann);

    golf andy;
    int ret = setgolf(andy);

    cout << "setgolf(andy) 반환값 : " << ret << endl;

    golf golfs[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        if(setgolf(golfs[i]) == 0) break;
    }

    for(int j = 0; j < i; j++)
    {
        showgolf(golfs[j]);
    }

    return 0;
}
*/

// Q2
/*
void strcount(const string& str);

int main()
{
    string input;

    cout << "영문으로 한 행을 입력하십시오 :\n";
    getline(cin, input);
    
    while(input != "")
    {   
        strcount(input);
        cout << "다음 행을 입력하십시오 (끝내려면 빈 행을 입력) : \n";
        getline(cin, input);
    }

    cout << "프로그램을 종료합니다.\n";

    return 0;
}

void strcount(const string& str)
{
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\"에는 ";
    count = str.length();
    total += count;

    cout << count << "개의 문자가 있습니다.\n";
    cout << "지금까지 총 " << total << "개의 문자를 입력하셨습니다.\n";
}
*/

// Q3
/*
struct chaff
{
    char dross[20];
    int slag;
};

const int N = 2;
const int BUF = sizeof(chaff) * N;

int main()
{
    // 버퍼에 정적 배열 사용
    char buffer[BUF]; 
    chaff *p1 = new(buffer) chaff[N];

    strcpy(p1[0].dross, "정적 배열1");
    p1[0].slag = 10;
    strcpy(p1[1].dross, "정적 배열2");
    p1[1].slag = 20;

    for(int i = 0; i < N; i++)
    {
        cout << i + 1 << ") dross : " << p1[i].dross << ", slag : " << p1[i].slag << endl;
    }


    // 보통의 new를 사용하여 버퍼 입력

    char * buffer2 = new char[BUF];
    chaff *p2 = new (buffer2) chaff[2];

    strcpy(p2[0].dross, "new1");
    p2[0].slag = 30;
    strcpy(p2[1].dross, "new2");
    p2[1].slag = 40;

    for(int i = 0; i < N; i++)
    {
        cout << i + 1 << ") dross : " << p2[i].dross << ", slag : " << p2[i].slag << endl;
    }

    delete [] buffer2;

    return 0;
}
*/

// Q4
/*
#include "Q4_sales.h"

int main()
{
    using SALES::Sales;
    using SALES::SetSales;
    using SALES::showSales;
    
    Sales sales[2];

    double arr[4] = {1.5, 2.2, 3.8, 4.0};
    SetSales(sales[0], arr, 3);
    SetSales(sales[1]);

    for(int i = 0; i < 2; i++)
    {
        showSales(sales[i]);
    }
}
*/
