#include <iostream>

using namespace std;

int main()
{
    // 2
    cout << "@@@@" << endl;
    cout << "main()" << endl;
    cout << "std::cout<<\"@@@@\"" << endl;

    // 3
    cout << "123###456" << endl;

    // 4
    cout << "CODING" << endl;
    cout << "##   ##" << endl;
    cout << "std::cout \"CODING\";" << endl;
    cout << "std::cout << std::endl;" << endl;
    cout << "std::cout << \"##   ##\";" << endl;

    // 5 
    cout << "5 4 3 2 1 GO!" << endl;

    // 6
    int num = 5;
    cout << num << endl;

    // 7
    int t = 5;
    cout << "t에서 1씩 증가=" << t << " " << t + 1 << " " << t + 2 << endl;
    cout << "t에서 2씩 감소=" << t << " " << t - 2 << " " << t - 4 << endl;

    // 8
    int a = 5;
    int b = -1;
    int c = 2;
    cout << "a, b, c 값은 각각 a는 " << a << ", b는 " << b << ", c는 " << c << "입니다" << endl;
 
    // 9
    int a = 7;
    int b = 2;
    cout << "a+b=" << a+b << endl;
    cout << "a-b=" << a-b << endl;
  
    // 10
    int k, g;
    k = 8, g = 4;
    cout << "8*4=" << k*g << endl;
    cout << "8/4=" << k/g << endl;
 
    // 11
    int a, b, c, d;
    a = 3, b = 5, c = 3, d = 4;
    cout << ((a+b)*c)/d << endl;

    // 12
    int a;
    a = 8;
    cout << a * a * a * a * a << endl;

    // 13
    int a;
    a = 8;
    a += 4;
    cout << a << endl;

    // 복습 1
    cout << 1234 << "\n" << 567 << "\n" << 89 << "\n" << 0 << endl;

    // 복습 2
    cout << "158% 입니다" << endl;

    // 복습 3
    int q = 1, w = 2, e = 3;
    cout << "#q=" << q << "," << q << "," << q << endl;
    cout << "#w=" << w << "," << w << "," << w << endl;
    cout << "#e=" << e << "," << e << "," << e << endl;

    // 복습 4
    int a = 10;
    cout << "a의 값은 " << a << "입니다" << endl;

    // 복습 5
    int bbq = 5;
    cout << "bbq의 값은 " << bbq << "입니다" << endl;

    // 복습 6
    int a, b, c, g, h;
    a = 40, b = 60, c = 10;
    g = a + c, h = b - c;
    cout << g << "\n" << h << endl;

    // 복습 7
    int a, b;
    a = 10, b = 3;
    cout << "10 * 3 = " << a*b << "\n" << "10 / 3 = " << a/b << endl;

    // 복습 8
    int a, b, c, d;
    a = 3, b = 2, c = 6, d = 2;
    cout << (a+b)*(c/d) << endl;

    // 복습 9
    int a, b, c, d;
    a = 3, b = 3, c = 8, d = 3;
    cout << (a*b)+(c*d) << endl;

    return 0;
}
