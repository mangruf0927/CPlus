#include <iostream>

using namespace std;

// 1번
/*
int main()
{
    int arr[5] = {3, 5, 2, 4, 1};
    int arr2[3][2] = {{9, 8}, {7, 1}, {3, 4}}; 

    int num;
    cin >> num;

    if(num % 2 != 0)
    {
        for(int i = 0 ; i < 5; i++)
        {
            cout << arr[i];
        }
    }
    else
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                cout << arr2[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}
*/

// 2번
/*
int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int diff;
    if(num1 > num2) diff = num1 - num2;
    else diff = num2 - num1;

    if(diff % 2 == 0)
    {
        cout << "짝";
    }
    else
    {
        cout << "홀";
    }

    return 0;
}
*/

// 3번
/*
int main()
{
    int arr2[2][3] = {{3, 1, 1}, {2, 3, 2}};

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr2[i][j];
        }
    }

    return 0;
}
*/

// 4번
/*
int main()
{
    int arr[5];
    int count = 0;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];

        if(3 <= arr[i] && arr[i] <=7) count++; 
    }

    cout << count;

    return 0;
}
*/

// 5번
/*
int main()
{
    int num;
    cin >> num;

    if(80 <= num) cout << "수";
    else if(70 <= num && num < 80) cout << "우";
    else if(60 <= num && num < 70) cout << "미";
    else cout << "재시도";

    return 0;
}
*/

// 6번
/*
int main()
{
    int num;

    for(int i = 0; i < 4; i++)
    {
        cin >> num;
        if(num < 20) cout << "더 큰수를 입력하세요";
        else if(20 < num) cout << "더 작은수를 입력하세요";
        else cout << "정답입니다";
    }
    return 0;
}
*/

// 7번
/*
int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int max = 0, min = 0;

    if(num1 >= num2 && num1 >= num3) max = num1;
    else if(num2 >= num1 && num2 >= num3) max = num2;
    else if(num3 >= num1 && num3 >= num2) max = num3;

    if(num1 <= num2 && num1 <= num3) min = num1;
    else if(num2 <= num1 && num2 <= num3) min = num2;
    else if(num3 <= num1 && num3 <= num2) min = num3;

    cout << "MAX=" << max << "\nMIN=" << min;

    return 0;
}
*/

// 8번
/*
int main()
{
    int arr2[3][3] = {{3, 4, 1}, {2, 1, 4}, {3, 3, 0}};

    int even = 0, odd = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr2[i][j] % 2 == 0) even++;
            else odd++;
        }
    }

    cout << "짝수 : " << even << "\n홀수 : " << odd;

    return 0;
}
*/

// 9번
/*
int main()
{
    int arr[5];
    for(int i = 0 ; i < 5; i++)
    {
        cin >> arr[i];
        cout << i + 1 << "번사람은" << arr[i] << "점";
        
        if(70 <= arr[i]) cout << "PASS\n";
        else if (50 <= arr[i] && arr[i] < 70) cout << "RETEST\n";
        else cout << "FAIL\n";
    }

    return 0;
}
*/

// 10번
/*
char arr2[4][4];
void Input(char ch)
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            arr2[i][j] = ch;
        }
    }
}

void Output()
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << arr2[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    char c;
    cin >> c;
    Input(c);
    Output();

    return 0;
}
*/

// 11번
/*
int num;
int arr2[3][3];
void Input()
{
    cin >> num;
}

void Process()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            arr2[i][j] = num++;
        }
    }
}

void Output()
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr2[i][j];
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

// 12번
/*
int num;
void BBQ() 
{
    if(0 < num && num < 5) cout << "초기값";
    else if(6 < num && num < 10) cout << "중간값";
    else cout << "알 수 없는 값";
}

int main()
{
    cin >> num;

    if(num == 3 || num == 5 || num == 7)
    {
        for(int i = 1; i <= 10; i++)
        {
            cout << i;
        }
    }
    else if(num == 0 || num == 8) 
    {
        for(int i = 10; i >= 1; i--)
        {
            cout << i;
        }
    }
    else
    {
        BBQ();
    }

    return 0;
}
*/

// 훈련문제 1번
/*
int main()
{
    int num;
    cin >> num;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << num;
        }
        cout << "\n";
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << num;
        }
        cout << "\n";
    }

    return 0;
}
*/

// 훈련문제 2번
/*
int main()
{
    int arr[6];
    int index1, index2, index3;
    
    cin >> index1 >> index2 >> index3;

    for(int i = 0; i < 6; i++)
    {
        arr[i] = 0;

        if(i == index1 || i == index2 || i == index3) arr[i] = 1;

        cout << arr[i];
    }

    return 0;
}
*/

// 훈련문제 3번
/*
char a, b;

void Input() { cin >> a >> b; }

void Output()
{
    if('A' <= a && a <= 'Z' && 'A' <= b && b <= 'Z') cout << "대문자들";
    else if(('A' <= a && a <= 'Z') || ('A' <= b && b <= 'Z')) cout << "대문자";
    else
    {
        for(char c = 'a'; c <= 'z'; c++)
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

// 훈련문제 4번
/*
int main()
{
    char arr2[3][5];
    char ch;
    cin >> ch;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            arr2[i][j] = ch++;
        }
    }

    cout << (char)(arr2[2][2] - 'A' + 'a');

    return 0;
}
*/

// 훈련문제 5번
/*
int main()
{
    char arr[3];
    int count = 0;

    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];

        if('A' <= arr[i] && arr[i] <= 'Z') count ++;
    }

    if(count == 3) cout << "풍족하다";
    else if(count == 2 || count == 1) cout << "적절하다";
    else cout << "부족하다";

    return 0;
}
*/

// 훈련문제 6번
/*
int main()
{
    int arr2[2][4];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            arr2[i][j] = 0;
        }
    }

    int x, y;
    cin >> x >> y;
    arr2[x][y] = 1;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
*/

// 훈련문제 7번
/*
int main()
{
    int arr2[3][2];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            int num;
            cin >> num;
            arr2[i][j] = num + 2;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
*/
