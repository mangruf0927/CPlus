#include <iostream>

using namespace std;

int main()
{
    // 1
    int num;
    cin >> num;
    cout << "멋지군요!! 칭찬합니다.";

    // 2
    int num;
    cin >> num;
    cout << "입력하셨군요";

    // 3
    int num;
    cin >> num;
    cout << num << " " << num << " " << num;

    // 4
    int a, b, c;
    cin >> a >> b >> c;
    cout << a << a << a << "\n" << b << b << b << "\n" << c << c << c;

    // 5
    int a, b;
    cin >> a >> b;
    cout << "두 숫자의 차는 " << a-b << "입니다.";

    // 6
    int a, b;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a+b << endl;
    cout << a << "*" << b << "=" << a*b << endl;
    cout << a << "/" << b << "=" << a/b << endl;
  
    // 7
    int a, b;
    cin >> a >> b;
    if(a > b) cout << "a가 b보다 크다";
    else cout << "b가 a보다 같거나 크다";

    // 8
    int a, b;
    cin >> a >> b;
    if(a > b) cout << a << a << a << a;
    else cout << b << b << b << b;

    // 9
    int a;
    cin >> a ;
    cout << a << " 입력함" << "\n";
    cout << "a++을 수행하면 " << ++a << "이 됩니다";

    // 10
    int input;
    cin >> input;

    if(input > 3) input++;
    else input--;

    cout << input;
    
    // 11
    int num;
    cin >> num;

    if(num > 0) cout << "###" << "\n" << "###" << "\n" << "###";
    else if (num < 0) cout << "$$$" << "\n" << "$$$";

    // 12
    int a, b, c;
    cin >> a >> b >> c;

    if((a+b+c) >= (a*b*c)) cout << "행운의 수";
    else cout << " 소소한 수";

    // 복습 2
    int a, b;
    cin >> a >> b;
    if(a == b) cout << "같습니다";
    else cout << "다릅니다";

    // 복습 3
    int a, b, c;
    cin >> a >> b >> c;
    cout << "첫번째 숫자는 " << a << " 입니다.\n두번째 숫자는 " << b << " 입니다.\n세번째 숫자는 " << c << " 입니다.";

    // 복습 4
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "a + b = " << a+b << "\nc + d = " << c+d << "\nALL SUM = " << a+b+c+d;

    // 복습 5
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b == c) cout << "만세";

    // 복습 6
    int b1, b2, b3, b4;
    cin >> b1 >> b2 >> b3 >> b4;
    if(b1 >= b2 && b1 >= b3 && b1 >= b4) cout << "b1이 가장 크다";

    // 복습 7
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int average = (a + b + c + d) / 4;

    if(a > average) cout << a << ">" << average;
    else if (a == average) cout << a << "==" << average;
    else cout << a << "<" << average;

    cout <<"\n";

    if(b > average) cout << b << ">" << average;
    else if (b == average) cout << b << "==" << average;
    else cout << b << "<" << average;

    cout <<"\n";
    
    if(c > average) cout << c << ">" << average;
    else if (c == average) cout << c << "==" << average;
    else cout << c << "<" << average;

    cout <<"\n";

    if(d > average) cout << d << ">" << average;
    else if (d == average) cout << d << "==" << average;
    else cout << d << "<" << average;

    // 복습 8
    int a, b;
    cin >> a >> b;
    if((a - b) > 5) cout << "멀다";
    else cout << "가깝다";

    // 복습 9
    int a, b;
    cin >> a >> b;
    if(a + b > 10) cout << "합만세";
    if(a * b > 10) cout << "곱만세";

    // 복습 10
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    cout << d << " " << e << " " << f << " " << g;
  
  
    return 0;
}
