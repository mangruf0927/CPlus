#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

// Q1
/*
#include "vect.h"

int main()
{
    using VECTOR::Vector;
    
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);

    unsigned long steps = 0;    // 총 걸음 수
    double target;              // 목표 거리
    double dstep;               // 보폭

    cout << "목표 거리를 입력하십시오 (끝내려면 q) : ";
    while(cin >> target)
    {
        cout << "보폭을 입력하십시오 : ";
        if(!(cin >> dstep)) break;

        while(result.magval() < target)
        {
            cout << steps << " : " << result;

            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;

            steps++;
        }
        cout << steps << " 걸음 후 술고래가 서 있는 위치 \n";
        cout << result;
        result.polar_mode();
        cout << " 또는 \n" << result << endl;
        cout << "걸음당 기둥에서 벗어난 평균 거리 = " << result.magval() / steps << endl;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "목표 거리를 입력하십시오 (끝내려면 q) : ";
    }

    cout << "프로그램을 종료합니다.\n";
    cin.clear();
    while(cin.get() != '\n') continue;

    return 0;
}
*/

// Q3
/*
#include "Q2_vect.h"
int main()
{
    using VECTOR::Vector;
    
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;

    double target;
    double dstep;
    int N;

    cout << "목표 거리를 입력하십시오 : ";
    cin >> target;

    cout << "보폭을 입력하십시오 : ";
    cin >> dstep;

    cout << "몇 번 시도하겠습니까 ? : ";
    cin >> N;

    vector<double> list;

    for(int i = 0; i < N; i++)
    {
        steps = 0;
        result.reset(0.0, 0.0);

        while(result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }

        list.push_back(steps);
    }

    double sum = list[0], min = list[0], max = list[0];
    for(int i = 1; i < list.size(); i++)
    {
        if(min > list[i]) min = list[i];
        if(max < list[i]) max = list[i];

        sum += list[i];
    }

    cout << "최고 걸음 수 : " << max << ", 최저 걸음 수 : " << min << ", 평균 걸음수 : " << sum / N << endl;

    return 0;
}
*/

// Q5
/*
#include "Q5_stonewt.h"

int main()
{
    Stonewt a(150.5);       // 부동소수점 파운드
    Stonewt b(10, 3.5);     // 스톤 형식
    Stonewt c;              // 기본

    a.setForm(Stonewt::FLOATPOUND);
    b.setForm(Stonewt::STONE);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    c = a + b;
    c.setForm(Stonewt::FLOATPOUND);
    cout << "a + b = " << c << endl;

    c = b - a;
    c.setForm(Stonewt::STONE);
    cout << "b - a = " << c << endl;

    c = a * 9.27;
    c.setForm(Stonewt::POUND);
    cout << "a * 9.27 = " << c << endl;

    cout << "a를 정수 파운드로 변환: " << int(a) << endl;
    cout << "b를 double 파운드로 변환: " << double(b) << endl;

    return 0;
}
*/

// Q6
/*
#include "Q6_stonewt.h"
int main()
{
    Stonewt standard(11, 0);        // 11스톤 = 154 파운드

    Stonewt stones[6] = {Stonewt(130), Stonewt(13, 5), Stonewt(155)};

    double pounds;
    for(int i = 3; i < 6; i++)
    {
        cout << i + 1 << "번째 파운드 : ";
        cin >> pounds;
        stones[i] = Stonewt(pounds);
    }

    Stonewt max = stones[0];
    Stonewt min = stones[0];
    int cnt = 0;

    for(int i = 0; i < 6; i++)
    {
        if(max < stones[i]) max = stones[i];
        if(min > stones[i]) min = stones[i];
        if(standard <= stones[i]) cnt++;
    }

    cout << "최소 : " << min;
    cout << "최대 : " << max;
    cout << "11스톤보다 큰 원소의 개수: " << cnt << endl;

    return 0;
}
*/

// Q7
/*
#include "Q7_complex.h"

int main()
{
    Complex a(3.0, 4.0);
    Complex c;

    cout << "하나의 복소수를 입력하십시오 (끝내려면 q) : \n";
    while(cin >> c)
    {
        cout << "c = " << c << "\n";
        cout << "공액복소수 = " << ~c << "\n";
        cout << "a = " << a << "\n";
        cout << "a + c = " << a + c << "\n";
        cout << "a - c = " << a - c << "\n";
        cout << "a * c = " << a * c << "\n";
        cout << "2 * c = " << 2 * c << "\n";
        cout << "하나의 복소수를 입력하십시오 (끝내려면 q) : \n";
    }

    cout << "프로그램을 종료합니다.\n";
    
    return 0;
}
*/
