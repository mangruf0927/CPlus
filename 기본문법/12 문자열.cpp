#include <iostream>

using namespace std;

// 1
/*
int main()
{
    char str[256];
    cin >> str;

    int length = 0;
    for(int i = 0; i < 256; i++)
    {
        if(str[i]  == '\0') 
        {
            length = i;
            break;
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < length; j++)
        {
            cout << str[j];
        }
        cout << "\n";
    }

    return 0;
}
*/

// 2
/*
int main()
{
    char str1[256], str2[256];
    cin >> str1 >> str2;

    int length1 = 0, length2 = 0;

    for(int i = 0; i < 256; i++)
    {
        if(str1[i] == '\0')
        {
            length1 = i;
            break;
        }
    }

    for(int i = 0; i < 256; i++)
    {
        if(str2[i] == '\0')
        {
            length2 = i;
            break;
        }
    }

    cout << length1 << " " << length2 << endl;

    return 0;
}
*/

// 3
/*
int main()
{
    int num; 
    cin >> num;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << num;
        }
        cout << "\n";
        num--;
    }

    return 0;
}
*/

// 4
/*
int main()
{
    int num; 
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        for(int j = 1; j < 4; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    
    return 0;
}
*/

// 5
/*
int main()
{
    int num; 
    cin >> num;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 1 - i; j >= 0; j--)
        {
            cout << " ";
        }

        for(int j = 2 - i; j < 4; j++)
        {
            cout << num++;
        }

        cout << "\n";
    }

    return 0;
}
*/

// 6
/*
char str[8] = {'M', 'I', 'N', 'Q', 'U', 'E', 'S', 'T'};

int Length(char ch)
{
    for(int i = 0; i < 8; i++)
    {
        if(str[i] == ch) return i;
    }
}

int main()
{
    char a, b, c;
    cin >> a >> b >> c;

    int res1 = Length(a);
    int res2 = Length(b);
    int res3 = Length(c);

    cout << a << "=" << res1 << "\n" << b << "=" << res2 << "\n" << c <<"=" << res3 << endl;

    return 0;
}
*/

// 7
/*
int main()
{
    char str[11];
    cin >> str;

    char a, b, c;
    cin >> a >> b >> c;

    int length = 0;
    for(int i = 0; i < 11; i++)
    {
        if(str[i] == '\0') 
        {
            length = i;
            break;
        }
    }

    int aCnt = 0, bCnt = 0, cCnt = 0;
    
    for(int i = 0; i < length; i++)
    {
        if(str[i] == a) aCnt++;
        if(str[i] == b) bCnt++;
        if(str[i] == c) cCnt++;
    }

    cout << a << "=" << aCnt << endl;
    cout << b << "=" << bCnt << endl;
    cout << c << "=" << cCnt << endl;

    return 0;
}
*/

// 8
/*
int main()
{
    char str[10] = "DATAPOWER";

    int a, b;
    cin >> a >> b ;

    char newStr[10];
    int index = 0;

    for(int i = a; i <= b; i++)
    {
        newStr[index] = str[i];
        index++;
    }

    for(int i = 0; i < index; i++)
    {
        cout << newStr[i];
    }
    
    return 0;
}
*/

// 9
/*
int main()
{
    int arr[3][3] = {0};

    char ch;
    cin >> ch;

    if('0' <= ch && ch <= '9')
    {
        int cnt = 1;

        for(int i = 2; i >= 0; i--)
        {
            for(int j = 2; j >= i; j--)
            {
                arr[i][j] = cnt++;
            }
        }

    }
    else if('A' <= ch && ch <= 'Z')
    {
        int cnt = 1;

        for(int i = 2; i >= 0; i--)
        {
            for(int j = 0; j < i + 1; j++)
            {
                arr[i][j] = cnt++;
            }
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == 0) cout << " ";
            else cout << arr[i][j];
        }
        cout << "\n";
    }
    
    return 0;
}
*/

// 10
/*
int main()
{
    char arr[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = '0';
        }
    }

    int num;
    char ch;
    cin >> num >> ch;
    
    for(int i = 4; i >= 0; i--)
    {
        arr[num - 1][i] = ch++;
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}
*/

// 복습문제 1
/*
struct NODE
{
    int x;
    int y;
};


int main()
{
    NODE ta, tb;
    cin >> ta.x >> tb.x;

    ta.y = ta.x + 5;
    tb.y = tb.x - 5;

    cout << "ta.x=" << ta.x << "\nta.y=" << ta.y << "\ntb.x=" << tb.x << "\ntb.y=" << tb.y << endl;

    return 0;
}
*/

// 복습문제 2
/*
int main()
{
    int a, b;
    cin >> a >> b;

    char c, d;
    cin >> c >> d;

    int* p1 = &a, *p2 = &b;
    char* p3 = &c, *p4 = &d;

    for(int i = 0; i < *p1; i++)
    {
        cout << *p3;
    }

    cout << "\n";

    for(int i = 0; i < *p2; i++)
    {
        cout << *p4;
    }

    return 0;
}
*/

// 복습문제 3
/*
char arr[4][3] = {{'D', 'A', 'D'}, {'Q', 'W', 'Q'}, {'A', 'S', 'D'}, {'A', 'S', 'D'}};

void find(char c)
{
    int flag = 0;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == c)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1) break; 
    }

    if( flag == 1 ) cout << "존재";
    else cout << "없음";
}

int main()
{
    char c;
    cin >> c;

    find(c);
    
    return 0;
}
*/

// 복습문제 4
/*
int main()
{
    int arr[5][5] = {};
    int num;
    cin >> num;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i == 0 || j == 0 || i == 4 || j == 4)
            {
                arr[i][j] = num;
            }
        }
    }
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(arr[i][j] == 0) cout << "_";
            else cout << arr[i][j];
        }
        cout << "\n";
    }
    
    return 0;
}
*/

// 복습문제 5
/*
int main()
{
    int arr[5][5] = {{4, 5, 4, 5, 4}, {8, 9, 8, 9, 8}, {1, 2, 1, 2, 1}, {4, 5, 4, 5, 4}, {6, 7, 6, 7, 6}};

    for(int i = 0; i < 5; i++)
    {
        int y, x;
        cin >> y >> x;

        arr[y][x]++;
        if(arr[y][x] == 10) arr[y][x] = 0;
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}
*/

// 복습문제 6
/*
int main()
{
    char vect[100];

    cin >> vect;
    int length = 0, count = 0;

    for(int i = 0; i < 100; i++)
    {
        if(vect[i] == '\0')
        {
            length = i;
            break;
        }
    }

    char lastWord = vect[length - 1];

    for(int i = 0; i < length; i++)
    {
        if(vect[i] == lastWord) count++;
    }    

    cout << length << "\n" << count << endl;

    return 0;
}
*/

// 복습문제 7
/*
int main()
{
    char str[256], str2[256], str3[256];
    cin >> str >> str2 >> str3;

    int length = 0, length2 = 0, length3 = 0;

    for(int i = 0; str[i]!= '\0'; i++)
    {
        length++;
    }

    for(int i = 0; str2[i]!= '\0'; i++)
    {
        length2++;
    }

    for(int i = 0; str3[i]!= '\0'; i++)
    {
        length3++;
    }

    if(length >= length2 && length >= length3) cout << str;
    else if(length2 >= length && length2 >= length3) cout << str2;
    else cout << str3;

    return 0;
}
*/

// 복습문제 8
/*
int main()
{
    int arr[3][3] = {};

    int num;
    cin >> num;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 2 - i; j < 3; j++)
        {
            arr[i][j] = num++;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}
*/
