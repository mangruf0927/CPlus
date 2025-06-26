#include <iostream>

using namespace std;

// 1
/*
int main()
{
    int n;
    cin >> n;
    
    int i = 1;
    while(i <= n)
    {
        cout << i << " ";
        i++;
    }

    return 0;
}
*/

// 2
/*
int main()
{
    int arr[6];

    for(int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] == 7) break;

        cout << arr[i] << " ";
    }

    return 0;
}
*/

// 3
/*
int num1, num2;

void Input() { cin >> num1 >> num2; }
void Output() 
{ 
    int i = 5;
    while(i <= num1 + num2)
    {
        cout << i << " ";
        i++;
    }
}

int main()
{
    Input();
    Output();

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

    for(int i = 5; i >= 0; i--)
    {
        cout << arr[i] << " ";
        if(arr[i] == 7) break;
    }
    
    return 0;
}
*/

// 5
/*
int main()
{
    int arr[6] = {3, 4, 1, 6, 7, 5};

    int idx = 0;
    while(idx < 6)
    {
        cout << arr[idx] << " ";
        idx++;
    }
    
    return 0;
}
*/

// 6
/*
int arr2[3][4];
int num;

void Input() 
{ 
    cin >> num; 

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            arr2[i][j] = num++;
        }
    }
}

void Process()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            arr2[i][j]++;
        }
    }
}

void Output() 
{ 
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    Input();
    Process();
    Output();
    
    return 0;
}
*/

// 7
/*
char arr1[5] = {'B', 'D', '5', 'Q', 'A'};
char arr2[5] = {'Q', 'E', 'R', 'E', 'F'};
char ch;

void Input() { cin >> ch; }

void Output() 
{ 
    if('a' <= ch && ch <= 'z')
    {
        for(int i = 0; i < 5; i++)
        {
            cout << arr1[i];
        }
    }
    else if('A' <= ch && ch <= 'Z') 
    {
        for(int i = 0; i < 5; i++)
        {
            cout << arr2[i];
        }
    }
    else if('0' <= ch && ch <= '9')
    {
        for(char c = 'H'; c >= 'A'; c--)
        {
            cout << c;
        }
    }
}

int main()
{
    Input();
    Output();
    
    return 0;
}
*/

// 8
/*
int main()
{
    char arr[6] = {'#', '-', '#', '-', '#', '#'};

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] == '#') cout << "샵";
        else if(arr[i] == '-') cout << "무";
    }
    
    return 0;
}
*/

// 9
/*
int arr2[2][3];
int sum = 0;

void Input() 
{ 
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr2[i][j];
        }
    }
}

void Process()
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum += arr2[i][j];
        }
    }
}

void Output() 
{ 
    cout << sum;
}

int main()
{
    Input();
    Process();
    Output();
    
    return 0;
}
*/

// 10
/*
int main()
{
    int arr2[3][4] = {{4, 3, 1, 1}, {3, 1, 2, 1}, {0, 0, 1, 2}};
    int num, count = 0;
    cin >> num;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(arr2[i][j] == num) count++; 
        }
    }

    cout << count << "개 존재합니다";
    
    return 0;
}
*/

// 11
/*
void startBox()
{
    for(int i = 1; i <= 20; i++)
    {
        if(i % 2 == 1) cout << i << " ";
    }
}

void macDoll() 
{
    for(char c = 'H'; c >= 'A'; c--)
    {
        cout << c << " ";
    }
}

void copyBean() 
{ 
    for(int i = -5; i <= 5; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int price;
    cin >> price;

    if(3500 <= price && price <= 5000) startBox();
    else if(2500 <= price && price < 3500) macDoll();
    else copyBean();
    
    return 0;
}
*/

// 복습문제 1
/*
int main()
{
    int arr[6];
    for(int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 6; i++)
    {
        cout << i << "번은 " << arr[i] << "점 ";
        
        if(arr[i] >= 5) cout << "합격\n";
        else cout << "불합격\n";
    }
    
    return 0;
}
*/

// 복습문제 2
/*
int main()
{
    char arr[6] = {'D', 'T', 'A', 'B', 'W', 'Q'};
    char ch;
    cin >> ch;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] == ch)
        {
            cout << i << "번 INDEX\n";
            break;
        }
    }

    return 0;
}
*/

// 복습문제 3
/*
int main()
{
    char arr[5];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
*/

// 복습문제 4
/*
char c1, c2, c3;
char arr[17];

void Input()
{
    cin >> c1 >> c2 >> c3;

    for(int i = 0; i <= 6; i++)
    {
        arr[i] = c1;
    }
    for(int i = 7; i <= 12; i++)
    {
        arr[i] = c2;
    }
    for(int i = 13; i <= 16; i++)
    {
        arr[i] = c3;
    }
}

int main()
{
    Input();

    for(int i = 16; i >= 0; i--)
    {
        cout << arr[i];
    }

    return 0;
}
*/

// 복습문제 5
/*
int main()
{
    char upper1, upper2;
    int num;

    cin >> upper1 >> upper2 >> num;

    for(int i = 0; i < num; i++)
    {
        for(char c = upper1; c <= upper2; c++)
        {
            cout << c;
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
    char ch;
    int num;

    cin >> ch >> num;

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
        {
            cout << ch;
        }
        cout << "\n";
    }

    return 0;
}
*/

// 복습문제 7
/*
int main()
{
    int arr[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            arr[i][j] = 0;
        }
    }

    int y, x, num;
    cin >> y >> x >> num;

    arr[y][x] = num;

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

// 복습문제 8
/*
int main()
{
    int arr[6][3];

    int num1, num2;
    cin >> num1 >> num2;


    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i < 3) arr[i][j] = num1;
            else arr[i][j] = num2;
        }
    }

    for(int i = 0; i < 6; i++)
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

// 복습문제 9
/*
int main()
{
    char c1, c2;
    cin >> c1 >> c2;

    char arr[3][6];

    int x = 0, y = 0;
    while(y < 3)
    {
        x = 0;
        while(x < 6)
        {
            if(x < 4) arr[y][x] = c1;
            else arr[y][x] = c2;

            x++;
        }
        y++;
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}
*/
