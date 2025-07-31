#include <iostream>
#include <array>
#include <string>
#include <cstring>

using namespace std;

// 1
/*
int main()
{
    int a, b;

    cout << "두 개의 정수를 입력해주세요 ";
    cin >> a >> b;

    int sum = 0;

    for(int i = a; i <= b; i++)
    {
        sum += i;
    }

    cout << a << "부터 " << b << "까지의 합은 " << sum << "입니다.\n";

    return 0;
}
*/

// 2
/*
int main()
{
    array<long double, 101> factorials;

    factorials[0] = 1.0;

    for(int i = 1; i <= 100; i++)
    {
        factorials[i] = i * factorials[i - 1];
    }

    cout << "100! = " << factorials[100] << endl;

    return 0;
}
*/

// 3
/*
  int main()
{
    int num, sum = 0;

    while(num != 0)
    {   
        cout << "숫자를 입력하세요 (0 입력 시 종료) : ";
        cin >> num;
        sum += num;
    }

    cout << "합 : " << sum << endl;

    return 0;
}
*/

// 4
/*
int main()
{
    double A = 100000, B = 100000;
    int year = 0;

    while(A >= B)
    {
        A += (100000 * 0.10);
        B *= 1.05;

        year++;
    }

    cout << "A의 투자 가치 : " << A << ", B의 투자 가치 : " << B;
    cout << "\nB의 투자 가치가 A의 투자 가치를 초과하는 년 수는 " << year << "이다.\n";

    return 0;
}
*/

// 5
/*
int main()
{
    int sales[12], total = 0;
    
    string month[12] = {"January", "February", "March", "April", "May", "June", 
                        "July", "August", "September", "October", "November", "December"};

    // char * months[12] = {"January", "February", "March", "April", "May", "June", 
    //                    "July", "August", "September", "October", "November", "December"};

    for(int i = 0; i < 12; i++)
    {
        cout << month[i] << "의 판매량을 입력하시오 : ";
        cin >> sales[i];
        total += sales[i];
    }

    cout << "총 판매량 : " << total << endl;

    return 0;
}
*/

// 6
/*
int main()
{
    int sales[3][12], totals[3] = {0};
    
    string month[12] = {"January", "February", "March", "April", "May", "June", 
                        "July", "August", "September", "October", "November", "December"};


    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 12; j++)
        {
            cout << i + 1 << ")" << month[j] << "의 판매량을 입력하시오 : ";
            cin >> sales[i][j];
            totals[i] += sales[i][j];
        }
    } 
                        
    for(int i = 0; i < 3; i++)
    {
        cout << i + 1 << "년째 판매량 : " << totals[i] << "\n";
    }

    return 0;
}
*/

// 7
/*
struct car
{
    char name[30];
    int year;
};


int main()
{
    int num;

    cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
    cin >> num;
    
    car *carList = new car[num];

    for(int i = 0; i < num; i ++)
    {
        cout << "자동차 #" << i + 1 << ":\n";
        cout << "제작업체: ";
        cin.ignore();
        cin.getline(carList[i].name, 30);
        cout << "제작년도 : ";
        cin >> carList[i].year;
    }

    cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다.\n";

    for(int i = 0; i < num; i++)
    {
        cout << carList[i].year << "년형 " << carList[i].name << "\n";
    }

    delete [] carList;

    return 0;
}
*/

// 8
/*
int main()
{   
    char word[100];
    int count = 0;

    cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력) : \n";
    
    while(true)
    {
        cin >> word;
        if(strcmp(word, "done") == 0) break;
        count++;
    }

    cout << "총 " << count << "단어가 입력되었습니다.\n";
    

    return 0;
}
*/

// 9
/*
int main()
{   
    string word;
    int count = 0;

    cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력) : \n";
    
    while(true)
    {
        cin >> word;
        if(word == "done") break;
        count++;
    }

    cout << "총 " << count << "단어가 입력되었습니다.\n";

    return 0;
}
*/

// 10
/*
int main()
{   
    int num;

    cout << "출력할 행 수를 입력하십시오: ";
    cin >> num;

    for(int i = 1; i <= num; i++)
    {
        for(int j = num - i; j > 0; j--)
        {
            cout << ".";
        }

        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
*/
