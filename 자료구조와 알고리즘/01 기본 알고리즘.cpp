#include <iostream>
#include <iomanip>

using namespace std;

// Q1
/*
int max4(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;

    cout << "정수 4개를 입력하시오 : ";
    cin >> a >> b >> c >> d;

    cout << a << ", " << b << ", " << c << ", " << d << "의 최댓값은 " << max4(a, b, c, d) << "입니다\n"; 

    return 0;
}

int max4(int a, int b, int c, int d)
{
    int max = a;
    if(max < b) max = b;
    if(max < c) max = c;
    if(max < d) max = d;

    return max;
}
*/

// Q2
/*
int min3(int a, int b, int c);

int main()
{
    int a, b, c;

    cout << "정수 3개를 입력하시오 : ";
    cin >> a >> b >> c;

    cout << a << ", " << b << ", " << c << "의 최솟값은 " << min3(a, b, c) << "입니다\n"; 

    return 0;
}

int min3(int a, int b, int c)
{
    int min = a;
    if(min > b) min = b;
    if(min > c) min = c;

    return min;
}
*/

// Q3
/*
int min4(int a, int b, int c, int d);

int main()
{
    int a, b, c, d;

    cout << "정수 4개를 입력하시오 : ";
    cin >> a >> b >> c >> d;

    cout << a << ", " << b << ", " << c << ", " << d << "의 최솟값은 " << min4(a, b, c, d) << "입니다\n"; 

    return 0;
}

int min4(int a, int b, int c, int d)
{
    int min = a;
    if(min > b) min = b;
    if(min > c) min = c;
    if(min > d) min = d;

    return min;
}
*/

// Q4
/*
int med3(int a, int b, int c);

int main()
{
    cout << "med3(" << 3 << ", " << 2 << ", " << 1 << ") = " << med3(3, 2, 1) << endl;
    cout << "med3(" << 3 << ", " << 2 << ", " << 2 << ") = " << med3(3, 2, 2) << endl;
    cout << "med3(" << 3 << ", " << 1 << ", " << 2 << ") = " << med3(3, 1, 2) << endl;
    cout << "med3(" << 3 << ", " << 2 << ", " << 3 << ") = " << med3(3, 2, 3) << endl;
    cout << "med3(" << 2 << ", " << 1 << ", " << 3 << ") = " << med3(2, 1, 3) << endl;
    cout << "med3(" << 3 << ", " << 3 << ", " << 2 << ") = " << med3(3, 3, 2) << endl;
    cout << "med3(" << 3 << ", " << 3 << ", " << 3 << ") = " << med3(3, 3, 3) << endl;
    cout << "med3(" << 2 << ", " << 2 << ", " << 3 << ") = " << med3(2, 2, 3) << endl;
    cout << "med3(" << 2 << ", " << 3 << ", " << 1 << ") = " << med3(2, 3, 1) << endl;
    cout << "med3(" << 2 << ", " << 3 << ", " << 2 << ") = " << med3(2, 3, 2) << endl;
    cout << "med3(" << 1 << ", " << 3 << ", " << 2 << ") = " << med3(1, 3, 2) << endl;
    cout << "med3(" << 2 << ", " << 3 << ", " << 3 << ") = " << med3(2, 3, 3) << endl;
    cout << "med3(" << 1 << ", " << 2 << ", " << 3 << ") = " << med3(1, 2, 3) << endl;

    return 0;
}

int med3(int a, int b, int c)
{
    if(a >= b)
    {
        if(a <= c) return a;
        else if(b >= c) return b;
        else return c;
    }
    else if(a > c) return a;
    else if(b < c) return b;
    else return c;
}
*/

// Q6
/*
int main()
{
    int n;
    cout << "n 입력 : ";
    cin >> n;

    int sum = 0;
    int i = 1;

    while(i <= n)
    {
        sum += i;
        i++;
    }

    cout << "1부터" << n << "까지의 합 = " << sum;
    cout << "\ni 값 = " << i << endl;

    return 0;
}
*/

// Q7
/*
int main()
{
    int n;
    cout << "n 입력 : ";
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }

    for(int i = 1; i <= n; i++)
    {
        cout << i ;
        if(i != n) cout << " + ";
    }

    cout << " = " << sum << endl;

    return 0;
}
*/

// Q8
/*
int main()
{
    int n;
    cout << "n 입력 : ";
    cin >> n;

    int sum = n * (1 + n) / 2;

    for(int i = 1; i <= n; i++)
    {
        cout << i ;
        if(i != n) cout << " + ";
    }

    cout << " = " << sum << endl;

    return 0;
}
*/

// Q9
/*
int sumof(int a, int b)
{
    int start = (a < b) ? a : b;
    int end = (a > b) ? a : b;;
    
    int sum = 0;

    for(int i = start; i <= end; i++)
    {
        sum += i;
    }

    // ((a + b) * (b - a + 1)) / 2;

    return sum;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << sumof(a, b) << endl;

    return 0;
}
*/

// Q10
/*
int main()
{
    int a, b;

    cout << "a 값 : ";
    cin >> a;

    do
    {
        cout << "b값 : ";
        cin >> b;
        if(b <= a) cout << "a보다 큰 값을 입력하세요 !\n";

    } while (b <= a);

    cout << "b - a는 " << b - a << "입니다.\n";

    return 0;
}
*/

// Q11
/*
int main()
{
    int num, count = 1;

    do
    {
        cout << "양의 정수를 입력해주세요 : ";
        cin >> num;
    } while (num <= 0);
    
    while(num / 10 != 0)
    {
        num /= 10;
        count ++;
    }

    cout << "\'그 수는 " << count << "자리입니다.\'\n";

    return 0;
}
*/

// Q12
/*
int main()
{
    cout << setw(3) << " |";
    for(int i = 1; i <= 9; i++)
    {
        cout << setw(3) << i;
    }
    cout << "\n";

    for(int i = 0; i <= 9; i++)
    {
        if(i == 1) cout << "+";
        cout << "---";
    }
    cout << "\n";

    for(int i = 1; i <= 9; i++)
    {
        cout << i << " |";
        for(int j = 1; j <= 9; j++)
        {
            cout << setw(3) << i * j;
        }
        cout << "\n";
    }

    return 0;
}
*/

// Q13
/*
int main()
{
    cout << setw(3) << " |";
    for(int i = 1; i <= 9; i++)
    {
        cout << setw(3) << i;
    }
    cout << "\n";

    for(int i = 0; i <= 9; i++)
    {
        if(i == 1) cout << "+";
        cout << "---";
    }
    cout << "\n";

    for(int i = 1; i <= 9; i++)
    {
        cout << i << " |";
        for(int j = 1; j <= 9; j++)
        {
            cout << setw(3) << i + j;
        }
        cout << "\n";
    }

    return 0;
}
*/

// Q14
/*
int main()
{
    int n;
    cout << "정사각형을 출력합니다.\n";
    cout << "입력할 수 : ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}
*/

// Q15
/*
int main()
{
    int height, width;
    cout << "정사각형을 출력합니다.\n";
    cout << "높이 : ";
    cin >> height;
    cout << "너비 : ";
    cin >> width;

    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}
*/

// Q16
/*
void triangleLU(int n);
void triangleLB(int n);
void triangleRU(int n);
void triangleRB(int n);

int main()
{
    int n;
    cout << "몇 단 삼각형입니까 ? : ";
    cin >> n;

    cout << "왼쪽 위가 직각\n";
    triangleLU(n);

    cout << "---------------\n왼쪽 아래가 직각\n";
    triangleLB(n);
    
    cout << "---------------\n오른쪽 위가 직각\n";
    triangleRU(n);

    cout << "---------------\n오른쪽 아래가 직각\n";
    triangleRB(n);
    
    return 0;
}

void triangleLU(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void triangleLB(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void triangleRU(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for(int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void triangleRB(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for(int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
*/

// Q17
/*
void spira(int n);

int main()
{
    int n;
    cout << "몇 단 피라미드입니까 ? : ";
    cin >> n;

    spira(n);
    
    return 0;
}

void spira(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for(int j = 1; j <= i * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
*/

// Q18
/*
void nrpira(int n);

int main()
{
    int n;
    cout << "몇 단 피라미드입니까 ? : ";
    cin >> n;

    nrpira(n);
    
    return 0;
}

void nrpira(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout << " ";
        }
        
        for(int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            cout << i % 10;
        }
        cout << endl;
    }
}
*/

// Q18+
/*
#include <iostream>
#include <iomanip>

using namespace std;

void pira(int n);
void pira2(int n);

int main()
{
    int n;
    cout << "몇 단 피라미드입니까 ? : ";
    cin >> n;

    pira(n);

    cout << "-------------\n";

    pira2(n);
    
    return 0;
}

void pira(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << (i + 1) % 10;
        }
        cout << endl;
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < i * 2 + 1; j++)
        {
            cout << (n - i) % 10;
        }
        cout << endl;
    }
}

void pira2(int n)
{
    int total = 2 * n - 1;

    for(int i = 0; i < total; i++)
    {
        for(int j = 0; j < total; j++)
        {
            if(i < n)
            {
                if(j >= i && j < total - i) cout << (i + 1) % 10;
                else cout << " ";
            }
            else
            {
                if(j <= i && j >= total - i - 1) cout << total - i;
                else cout << " ";
            }
        }
        cout << endl;
    }
}
*/
