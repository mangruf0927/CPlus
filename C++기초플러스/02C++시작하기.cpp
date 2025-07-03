#include <iostream>

using namespace std;

void PrintMice()
{
    cout << "Three blind mice" << endl;
}

void PrintRun()
{
    cout << "See how they run" << endl;
}

int main()
{
    // 1
    cout << "이름 : 김한결\n주소 : @@시 $$동" << endl; 

    // 2
    double mile;
    cout << "거리를 입력하세요 (마일 단위) : ";
    cin >> mile;
    cout << "거리는 " << mile * 1.60934 << "킬로미터입니다." << endl;

    // 3
    PrintMice();
    PrintMice();
    PrintRun();
    PrintRun();

    // 4
    int age;
    cout << "Enter your age : ";
    cin >> age;
    cout << "당신의 나이를 월수로 나타낼 경우 " << age * 12 << "입니다." << endl;

    // 5
    float celsius;
    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오 : ";
    cin >> celsius;
    cout << "섭씨 " << celsius << "도는 화씨로 " << celsius * 1.8 + 32.0 << "도입니다." << endl;

    // 6 
    double years;
    cout << "광년 수를 입력하고 Enter 키를 누르십시오 : ";
    cin >> years;
    cout << years << " 광년은" << years * 63240 << " 천문 단위입니다." << endl;

    // 7
    int hour, minutes;
    cout << "시간 값을 입력하시오 : ";
    cin >> hour;
    cout << "분 값을 입력하시오 : ";
    cin >> minutes;
    cout << "시각: " << hour << ":" << minutes << endl;

    return 0;
}

