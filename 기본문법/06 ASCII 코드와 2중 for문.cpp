#include <iostream>

using namespace std;

// 1번 
/*
char c, ch;
void ABC()
{
    cin >> c >> ch;
}

void Output()
{
    cout << c << " " << ch;
}

int main()
{
    ABC();
    Output();

    return 0;
}
*/

// 2번
/*
int main()
{
    char A, B, C;
    cin >> A >> B >> C;
    cout << (int) A << "\n" << (int) B << "\n" << (int) C;

    return 0;
}
*/

// 3번
/*
int main()
{
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
*/

// 4번
/*
int main()
{
    char arr[6] = {'$', '@', 'D', 'A', '9', '#'};
    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << ":" << (int) arr[i] << "\n";
    }

    return 0;
}
*/

// 5번
/*
int main()
{
    char arr[4] = {'B', 'T', 'K', 'A'};
    int num;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << arr[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
*/

// 6번
/*
int main()
{
    char ch;
    cin >> ch;

    if('a' <= ch && ch <= 'z') cout << "소문자입니다";
    else if('A' <= ch && ch <= 'Z') cout << "대문자입니다";

    return 0;
}
*/

// 7번
/*
int main()
{
    int num;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
            cout << '#';
        }
        cout << '\n';
    }

    return 0;
}
*/

// 8번
/*
int main()
{
    char input;
    cin >> input;

    if('0' <= input && input <= '9')
    {
        cout << input - '0' + 5;
    }

    return 0;
}
*/

// 9번
/*
int main()
{
    char capital;
    cin >> capital;

    for(char c = 'A'; c <= capital; c++)
    {
        cout << c;
    }

    return 0;
}
*/

// 10번
/*
int main()
{
    char small;
    cin >> small;
    cout << (char) (small - 'a' + 'A');

    return 0;
}
*/

// 11번
/*
int main()
{
    char ch1, ch2;
    cin >> ch1 >> ch2;

    for(int i = 0; i < 4; i++)
    {
        for(char c = ch1; c <= ch2; c++)
        {
            cout << c << " ";
        }
        cout << "\n";
    }

    return 0;
}
*/

// 12번
/*
char flag, a, b, c;
void Input() { cin >> a >> b >> c; }
void Process() { if(a == 'A' && b == 'B' && c == 'C') flag = 1; }
void Output()
{
    if(flag == 1) cout << "ABC를 찾았다";
    else cout << "못찾았다";
}

int main()
{
    Input();
    Process();
    Output();
    
    return 0;
}
*/

// 13번
/*
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = 0; i < c; i++)
    {
        for(int j = a; j <= b; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}
*/

// 복습문제 1번
/*
int main()
{
    char ch1, ch2;
    cin >> ch1 >> ch2;

    cout << "문자\'" << ch1 << "\'의 아스키코드값은 " << (int) ch1 
    << "\n문자\'" << ch2 << "\'의 아스키코드값은 " << (int) ch2;

    return 0;
}
*/

// 복습문제 2번
/*
int main()
{
    char lower;
    cin >> lower;
    for(char c = lower; c >= 'a'; c--)
    {
        cout << c;
    }

    return 0;
}
*/

// 복습문제 3번
/*
int main()
{
    int arr1[5], arr2[5];
    int num;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr1[i];
    }
    cout << "\n";
    for(int i = 0; i < 5; i++)
    {
        cout << arr2[i];
    }

    return 0;
}
*/

// 복습문제 4번 
/*
int main()
{
    char c;
    cin >> c;

    if('a' <= c && c <= 'z') cout << "소문자 입력!!";
    else if('A' <= c && c <= 'Z') cout << "대문자 입력!!";
    else if ('0' <= c && c <= '9') cout << "숫자문자 입력!!";

    return 0;
}
*/

// 복습문제 5번
/*
int main()
{
    int arr[3];
    int sum = 0;

    for(int i = 0; i < 3; i++) 
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for(int i = 0; i < sum; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
*/

// 복습문제 6번
/*
int main()
{
    char arr[5];
    int count = 0;
    
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];

        if('0' <= arr[i] && arr[i] <= '9') count++;
    }
    
    if(count > 0) cout << "숫자" << count << "개발견";
    else cout << "숫자미발견";

    return 0;
}
*/

// 복습문제 7번
/*
char ChangeCase(char c)
{
    if('a' <= c && c <= 'z') c = (char) (c - 'a' + 'A');
    else if('A' <= c && c <= 'Z') c = (char) (c - 'A' + 'a');

    return c;
}

int main()
{
    char ch1, ch2;
    cin >> ch1 >> ch2;

    ch1 = ChangeCase(ch1);
    ch2 = ChangeCase(ch2);
    
    cout << ch1 << " " << ch2;

    return 0;
}
*/

// 복습문제 8번
/*
int main()
{
    char arr1[5], arr2[5];
    char ch;
    cin >> ch;
    
    for(int i = 0; i < 5; i++)
    {
        arr1[i] = ch + i;
    }
    for(int i = 0; i < 5; i++)
    {
        arr2[i] = ch - i;
    }

    for(int i = 0; i < 5; i++)
    {
        cout << arr1[i];
    }
    cout << "\n";
    for(int i = 0; i < 5; i++)
    {
        cout << arr2[i];
    }


    return 0;
}
*/

// 복습문제 9번
/*
int main()
{
    int arr[6] = {5, 4, 1, 2, 7, 8};

    int num;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        for(int j = 5; j >= 0; j--)
        {
            cout << arr[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
*/

// 복습문제 10번
/*
int main()
{
    char uppers[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> uppers[i];
    }

    if(uppers[0] >= uppers[1] && uppers[0] >= uppers[2]) cout << "옳다" << uppers[0];
    else cout << "옳지 않음";

    return 0;
}
*/

// 복습문제 11번
/*
int main()
{
    char ch1, ch2;
    cin >> ch1 >> ch2;
    cout << ch2 - ch1;

    return 0;
}
*/
