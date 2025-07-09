#include <iostream>

using namespace std;

// 1
/*
int main()
{
    int height;
    cout << "키를 입력하세요 : ㅡㅡㅡㅡcm\b\b\b\b\b\b\b";
    cin >> height;

    const int meter = height / 100;
    const int centimeter = height % 100;

    cout << "입력하신 키는" << meter << "m " << centimeter << "cm 입니다.\n";

    return 0;
}
*/

// 2
/*
int main()
{
    int feet, inch, pound;

    cout << "키를 피트와 인치 단위로 입력하세요 : ";
    cin >> feet >> inch;

    cout << "체중을 파운드 단위로 입력하세요 : ";
    cin >> pound;

    float height = (feet * 12 + inch) * (2.54 / 100);
    float weight = pound / 2.2;
    float BMI = weight / (height * height);    

    cout << "BMI는 " << BMI << "입니다.\n";

    return 0;
}
*/

// 3
/*
int main()
{
    int degree, minute, second;

    cout << "위도를 도, 분, 초 단위로 입력하시오 : \n";
    cout << "먼저, 도각을 입력하시오 : ";
    cin >> degree;
    cout << "다음에, 분각을 입력하시오 : ";
    cin >> minute;
    cout << "끝으로, 초각을 입력하시오 : ";
    cin >> second;

    const double latitude = degree + minute / 60.0 + second / 3600.0;

    cout << degree << "도, " << minute << "분, " << second << "초 = ";
    cout << latitude << "도\n";

    return 0;
}
*/

// 4
/*
int main()
{
    long sec;

    cout << "초 수를 입력하시오 : ";
    cin >> sec;  

    int day, hour, minute, second;

    second = sec;

    day = second / 60 / 60 / 24;
    second %= (24 * 3600);
    
    hour = second / 60 / 60;
    second %= 3600;

    minute = second / 60;
    second %= 60;

    cout << sec << "초 = " << day << "일, " << hour << "시간, " << minute << "분, " << second << "초 \n";

    return 0;
}
*/

// 5
/*
int main()
{
    long long world, us;

    cout << "세계 인구수를 입력하시오 : " ;
    cin >> world;

    cout << "미국의 인구수를 입력하시오 : ";
    cin >> us;

    double rate = (double) us / (double) world * 100.0;
    cout << "세계 인구수에서 미국이 차지하는 비중은 " << rate << "%이다.\n";

    return 0;
}
*/

// 6
/*
int main()
{
    int mile, gallon;

    cout << "주행한 거리를 입력하시오 : ";
    cin >> mile;
    cout << "소비한 휘발유의 양을 입력하시오 : ";
    cin >> gallon;

    cout << "갤런 당 마일 수는 " << (double) mile / (double) gallon << endl;

    return 0;
}
*/

// 7
/*
int main()
{
    double liters;

    cout << "휘발유 소비량을 입력하시오 : ";
    cin >> liters;

    double mpg = 62.14 / (liters / 3.875);

    cout << "약 " << mpg << "mpg(miles per gallon) 입니다.\n";

    return 0;
}
*/
