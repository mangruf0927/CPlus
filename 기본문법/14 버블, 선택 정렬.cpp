#include <iostream>

using namespace std;

// 1
/*
int main()
{
    int a, b;
    cin >> a >> b;

    while(a <= b)
    {
        cout << a << " ";
        a++;
    }
    
    return 0;
}
*/

// 2 
/*
int main()
{
    int num, y = 0;
    cin >> num;

    while(y < 3)
    {
        int x = 0;
        while(x < 5)
        {
            cout << num;
            x++;
        }
        cout << "\n";
        y++;
    }
    
    return 0;
}
*/

// 3
/*
int main()
{
    char arr[3][3] = {};
    char ch;
    cin >> ch;

    int y = 2;
    while(y >= 0)
    {
        int x = 0;
        while(x <= 2 - y)
        {
            arr[y][x] = ch++;
            x++;
        }
        y--;
    }

    y = 0;
    while(y < 3)
    {
        int x = 0;
        while(x < 3)
        {
            cout << arr[y][x];
            x++;
        }
        cout << "\n";
        y++;
    }
    
    return 0;
}
*/

// 4
/*
int main()
{
    int arr[6];
    for(int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++)
    {
        int maxIdx = i;
        for(int j = i + 1; j < 6; j++)
        {
            if(arr[maxIdx] < arr[j])
            {
                maxIdx = j;
            }
        }
        if(maxIdx != i)
        {
            int temp = arr[maxIdx];
            arr[maxIdx] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }
    
    return 0;
}
*/

// 5
/*
int main()
{
    char str[256];
    cin >> str;

    int length = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    // 선택 정렬
    for(int i = 0; i < length - 1; i++)
    {
        int minIdx = i;
        for(int j = i + 1; j < length; j++)
        {
            if(str[j] < str[minIdx]) minIdx = j;
        }
        
        if(minIdx != i)
        {
            char temp = str[minIdx];
            str[minIdx] = str[i];
            str[i] = temp;
        }
    }
    
    // 버블 정렬
    for(int i = 5; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(str[j] > str[j+1])
            {
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    cout << str << endl;

    return 0;
}
*/

// 6
/*
int main()
{
    char vect[3][10] = {"BBQWORLD", "KFCAPPLE", "LOT"};
    char ch;
    cin >> ch;

    int count = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; vect[i][j] != '\0'; j++)
        {
            if(vect[i][j] == ch) count++;
        }
    }

    cout << count << endl;

    return 0;
}
*/

// 7
/*
void Magic(int (*pArr)[3])
{
    int num = 1;
    for(int i = 0; i < 3; i++)
    {
        for(int j = i; j < 3; j++)
        {
            pArr[i][j] = num++;
        }
    }
}

void Output(int arr[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == 0) cout << " ";
            else cout << arr[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    int arr[3][3] = {};
    
    Magic(arr);
    Output(arr);

    return 0;
}
*/

// 8
/*
void CountLine(char (*pArr)[10]) // 가로의 크기를 기준으로 
{
    for(int i = 0; i < 3; i++)
    {
        int length = 0;
        for(int j = 0; pArr[i][j] != '\0'; j++)
        {
            length++;
        }
        cout << length << "=" << pArr[i] << endl;
    }
}

int main()
{
    char arr[3][10];

    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    CountLine(arr);

    return 0;
}
*/

// 9
/*
int main()
{
    char arr[4][6];
    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    int flagA = 0, flagB = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; arr[i][j] != '\0'; j++)
        {
            if(arr[i][j] == 'A') flagA = 1;
            else if(arr[i][j] == 'B') flagB = 1;
        }
    }

    if(flagA == 1 && flagB == 1) cout << "대발견";
    else if(flagA == 1 || flagB == 1) cout << "중발견";
    else cout << "미발견";

    return 0;
}
*/

// 10
/*
int main()
{
    char arr2[2][6];
    char arr[12] = {};
    
    cin >> arr2[0] >> arr2[1];

    int length1 = 0, length2 = 0;

    for(int i = 0; arr2[0][i] != '\0'; i++)
    {
        length1++;
    }

    for(int i = 0; arr2[1][i] != '\0'; i++)
    {
        length2++;
    }

    for(int i = 0; i < length1; i++)
    {
        arr[i] = arr2[0][i];
    }

    for(int i = length1; i < length1 + length2; i++)
    {
        arr[i] = arr2[1][i - length1];
    }

    cout << arr << endl;

    return 0;
}
*/

// 11
/*
int main()
{
    char str[2][6] = {"DATAW", "BBQK"};
    int num;
    cin >> num;

    if(num % 2 == 1)
    {
        // 버블 정렬
        for(int i = 4; i >= 0; i--)
        {
            for(int j = 0; j < i; j++)
            {
                if(str[0][j] > str[0][j+1])
                {
                    char temp = str[0][j];
                    str[0][j] = str[0][j+1];
                    str[0][j+1] = temp;
                }
            }
        }
    }
    else
    {
        // 선택 정렬
        for(int i = 0; i < 4; i++)
        {
            int minIdx = i;
            for(int j = i + 1; j < 4; j++)
            {
                if(str[1][j] < str[1][minIdx]) minIdx = j;
            }

            if(minIdx != i)
            {
                char temp = str[1][minIdx];
                str[1][minIdx] = str[1][i];
                str[1][i] = temp;
            }
        }
    }

    for(int i = 0; i < 2; i++)
    {
        cout << str[i] << endl;
    }

    return 0;
}
*/

// 12
/*
int main()
{
    char arr[3][6] = {"POTIO", "ABCDE", "YOURE"};
    int a, b;
    cin >> a >> b;

    for(int i = 0; i < 3; i++)
    {
        for(int j = a; j <= b; j++)
        {
            cout << arr[i][j];
        }
    }

    return 0;
}
*/

// 13
/*
int main()
{
    char a, b;
    cin >> a >> b;

    char* pA = &a;
    char* pB = &b;

    int temp = *pA;
    *pA = *pB;
    *pB = temp;

    cout << a << " " << b << endl;

    return 0;
}
*/

// 14
/*
int main()
{
    char arr[2][9] = {};
    for(int i = 0; i < 2; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for(int i = 0; i < 9; i++)
    {
        if(arr[0][i] == '\0' && arr[1][i] == '\0') break;
        if(arr[0][i] != arr[1][i]) count++; 
    }

    cout << count << endl;

    return 0;
}
*/
