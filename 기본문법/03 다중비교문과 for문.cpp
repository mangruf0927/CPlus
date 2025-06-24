#include <iostream>

using namespace std;

int main()
{
    // 1
    int num;
    cin >> num ;
    if(num >= 10) cout << "WOW";
    else cout << "OMG";

    // 2
    int a, b;
    cin >> a >> b;
    if(a == b) cout << "같은숫자";
    else if (a > b) cout << "큰수는 " << a;
    else cout << "큰수는 " << b;

    // 3
    int a;
    cin >> a;
    if(a == 5 || a == 10) cout << "만세";
    else cout << "재도전";

    // 4
    int a, b;
    cin >> a >> b;
    if(a == 7 && b == 9) cout << "인증됨";
    else cout << "재시도";

    // 5
    for(int i = 3; i <= 10; i++)
    {
        cout << i << "\n";
    }

    // 6
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b ; i++)
    {
        cout << i << "\n";
    }

    // 7
    for(int i = 0; i < 25 ; i++)
    {
        cout << "PIZZAHOT\n";
    }

    // 8
    int num;
    cin >> num;
    for(int i = 0; i < num ; i++)
    {
        cout << "##\n";
    }

    // 9
    for(int i = 10; i > 0; i--)
    {
        cout << i << " ";
    }
  
    // 10
    int num;
    cin >> num;
    if((num * 2 + 20) / 5 != 100) cout << "Magic";

    // 11
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        cout << i;
    }

    // 12
    int num;
    cin >> num;
    for(int i = 0; i <= num; i++)
    {
        cout << i << "\n";
    }

    // 13
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b + c > 10) cout << a * b * c;
    else cout << 0;

    // 14
    int num;
    cin >> num;
    for(int i = num; i >= 0; i--)
    {
        cout << i << "\n";
    }
    cout << "발사";

    // 15
    for(int i = -5; i <= 5; i++)
    {
        cout << i << "\n";
    }

    // 복습 1
    for(int i = 3; i <= 8; i++)
    {
        cout << i << " ";
    }

    // 복습 2
    int num;
    cin >> num;
    for(int i = num; i < num + 3; i++)
    {
        cout << i << i << i << "\n";
    }

    // 복습 3
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == 1 && b == 2 && c == 3 && d == 4) cout << "로그인 성공";

    // 복습 4
    int num;
    cin >> num;
    for(int i = num + 2; i < num + 5; i++)
    {
        cout << i << " ";
    }

    // 복습 5
    int a, b, c;
    cin >> a >> b >> c;
    if(a >= b && a >= c) cout << "MAX발견";
    else cout << "MAX아님";

    // 복습 6
    int a, b;
    cin >> a >> b;
    if(30 < a * b && a * b < 50) cout << "적당한 사이즈";
    else if(a * b >= 50) cout << "큰 사이즈";
    else cout << "작은 사이즈";

    // 복습 7
    int a, x;
    cin >> a >> x;
    for(int i = a - 1; i >= a - x; i--)
    {
        cout << i << " ";
    }

    // 복습 8
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = a; i <= b; i++)
    {
        cout << i << " ";
    }
    cout << "\n";
    for(int i = a; i <= c ; i++)
    {
        cout << i << " ";
    }

    // 복습 9
    for(int i = 9; i >= 6; i--)
    {
        cout << i << " " << i - 3 << "\n";
    }

    // 복습 10
    int num;
    cin >> num;
    for(int i = 1; i <= num; i += 2)
    {
        cout << i << " ";
    }
    
    // 복습 11
    cout << "시작\n";
    for(int i = 1; i <= 5; i++)
    {
        cout << i;
    }
    cout << "\n종료";

    // 복습 12
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cout << "##\n@@\n";
    }

    // 복습 13
    for(int i = 1; i <= 5; i++)
    {
        cout << i <<"번go!!\n";
    }

    // 복습 14
    int id, password;
    cin >> id >> password;
    if(id == 1111 && password == 2222) cout << "로그인성공";
    else if(id != 1111) cout << "아이디가 틀렸습니다";
    else if(id == 1111 && password != 2222) cout << "비밀번호가 틀렸습니다";

    // 복습 15
    int num;
    cin >> num;
    for(int i = num; i >= 0; i--)
    {
        cout << i ;
    }

    


    return 0;
}
