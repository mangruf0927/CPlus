#include <iostream>

using namespace std;

// 1
/*
int main()
{
    int arr[8] = {4, 3, 6, 1, 3, 1, 5, 3};
    int num, count = 0;
    cin >> num;

    for(int i = 0; i < 8; i++)
    {
        if(arr[i] == num) count++;
    }

    cout << "숫자" << num << "개수는" << count << "개" << endl;

    return 0;
}
*/

// 2
/*
int main()
{
    char arr[3][5] = {{'A', 'B', 'C', 'D', 'E'}, {'E', 'A', 'B', 'A', 'B'}, {'A', 'C', 'D', 'E', 'R'}};
    char ch;
    int count = 0;
    cin >> ch;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(arr[i][j] == ch) count++;
        }
    }

    if(3 <= count) cout << "대발견";
    else if(1<= count && count < 3) cout << "발견";
    else cout << "미발견";

    return 0;
}
*/

// 3
/*
int main()
{
    char arr[6] = {'A', 'F', 'G', 'A', 'B', 'C'};
    char ch1, ch2;
    cin >> ch1 >> ch2;

    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < 6; i++)
    {
        if(ch1 == arr[i]) cnt1++;
        if(ch2 == arr[i]) cnt2++;
    }

    if(cnt1 > 0 && cnt2 > 0) cout << "2개" << endl;
    else if(cnt1 > 0 || cnt2 > 0) cout << "1개" << endl;
    else cout << "0개" << endl;

    return 0;
}
*/

// 4
/*
int main()
{
    int arr[6] = {3, 4, 2, 5, 7, 9};
    int a, b;
    cin >> a >> b;

    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
*/

// 5
/*
struct ABC
{
    int x;
    int y;
};


int main()
{
    ABC t;
    cin >> t.x >> t.y;

    int sum = t.x + t.y;
    cout << sum;

    return 0;
}
*/

// 6
/*
int main()
{
    char arr[3][3];
    char cur = 'A';

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            arr[i][j] = cur;
            cur++;
        }
    }

    int y1, x1, y2, x2;
    cin >> y1 >> x1;
    cin >> y2 >> x2;

    char temp = arr[y1][x1];
    arr[y1][x1] = arr[y2][x2];
    arr[y2][x2] = temp;

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

// 7
/*
int main()
{
    int count = 0;
    int students[6][2];

    for(int i = 0; i < 6; i++)
    {
        cin >> students[i][0] >> students[i][1];
    }

    for(int i = 0; i < 6; i++)
    {
        if(students[i][0] < students[i][1])
        {
            int temp = students[i][0];
            students[i][0] = students[i][1];
            students[i][1] = temp;

            count++;
        }
    }

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << students[i][j] << " ";
        }
        cout << "\n";
    }
    cout << count << "명" << endl;


    return 0;
}
*/

// 8
/*
void BBQ(int a, int b)
{
    cout << "합:" << a + b << "\n";
    cout << "차:" << a - b << "\n";
    cout << "곱:" << a * b << "\n";
    cout << "몫:" << a / b << "\n";  
}

int main()
{
    int a, b;
    cin >> a >> b;

    BBQ(a, b);

    return 0;
}
*/

// 9
/*
int arr[2][3] = {{'F', 'E', 'W'}, {'D', 'C', 'A'}};

void findCh(char target)
{
    int count = 0;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == target) count++;
        }
    }

    if(count > 0) cout << "발견\n";
    else cout << "미발견\n";
}

int main()
{
    char ch;
    cin >> ch;
    findCh(ch);
    
    return 0;
}
*/

// 10
/*
void CheckChar(char c)
{
    if('a' <= c && c <= 'z') cout << "소";
    else if('A' <= c && c <= 'Z') cout << "대";
}

int main()
{
    char arr[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        CheckChar(arr[i]);
    }
    
    return 0;
}
*/

// 11
/*
struct Person
{
    int age;
    int height;
};

Person a, b;

void Input()
{
    cin >> a.age >> a.height >> b.age >> b.height;
}

void Output()
{
    int age = (a.age + b.age) / 2;
    int height = (a.height + b.height) / 2;

    cout << age << " " << height;
}

int main()
{
    Input();
    Output();
    
    return 0;
}
*/

// 복습문제 1
/*
int main()
{
    int arrA[5] = {2, 1, 2, 4, 5};
    int arrB[3][3] = {{2, 5, 3}, {4, 5, 7}, {8, 7, 2}};

    int n, count = 0;
    cin >> n;

    for(int i = 0; i < 5; i++)
    {
        if(arrA[i] == n) count++;
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arrB[i][j] == n) count++;
        }
    }

    cout << count << endl;
    
    return 0;
}
*/

// 복습문제 2
/*
int main()
{
    char arr[5];
    int count = 0;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if(arr[i] == 'A') count++;
    }

    cout << "문자 A는 " << count << "개발견\n";

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == 'A') cout << i << "번\n";
    }
    
    return 0;
}
*/

// 복습문제 3
/*
int main()
{
    char arr[5][3] = {{'D', 'A', 'A'}, {'B', 'C', 'D'}, {'E', 'F', 'A'}, {'A', 'A', 'D'}, {'F', 'G', 'E'}};
    char ch;
    cin >> ch;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == ch) cout << "(" << i << "," << j << ")\n";
        }
    }
    
    return 0;
}
*/

// 복습문제 4
/*
int main()
{
    int arr[3][3] = {{10, 3, 20}, {60, 30, 40}, {20, 30, 40}};

    int num1, num2, count = 0;
    cin >> num1 >> num2;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(num1 <= arr[i][j] && arr[i][j] <= num2) count++;
        }
    }

    cout << count;
    
    return 0;
}
*/

// 복습문제 5
/*
char arr[2][3];

void Input()
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void findUpper()
{
    int count = 0;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if('A' <= arr[i][j] && arr[i][j] <= 'Z') count++ ;
        }
    }
    cout << "대문자" << count << "개\n";
}

void findLower()
{
    int count = 0;
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if('a' <= arr[i][j] && arr[i][j] <= 'z') count++ ;
        }
    }
    cout << "소문자" << count << "개\n";
}

int main()
{
    Input();
    findUpper();
    findLower();
    
    return 0;
}
*/

// 복습문제 6
/*
int main()
{
    int arr[3][3] = {{3, 5, 14}, {2, 3, 9}, {6, 2, 7}};
    int num, count = 0;
    cin >> num;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] % num == 0) count++ ;
        }
    }

    cout << count;

    return 0;
}
*/

// 복습문제 7
/*
struct PROJECT
{
    int num;
    char id;
    int vect[4]; // 배열은 선언과 동시에만 초기화 가능
};

int main()
{
    PROJECT z;
    int num;
    cin >> num;

    if(0 < num && num < 10)
    {
        z.num = 5;
        z.id = 'G';
        z.vect[0] = 1;
        z.vect[1] = 2;
        z.vect[2] = 3;
        z.vect[3] = 4;
    }
    else if(10 <= num && num < 100)
    {
        z.num = 8;
        z.id = 'T';
        z.vect[0] = 5;
        z.vect[1] = 1;
        z.vect[2] = 2;
        z.vect[3] = 3;
    }
    else
    {
        z.num = 10;
        z.id = 'Q';
        z.vect[0] = 9;
        z.vect[1] = 1;
        z.vect[2] = 6;
        z.vect[3] = 2;
    }

    cout << z.num << "\n" << z.id << "\n";
    for(int i = 0; i < 4; i++)
    {
        cout << z.vect[i] << " ";
    }

    return 0;
}
*/

// 복습문제 8
/*
void BBQ(int n)
{
    for(int i = 1; i < n; i++)
    {
        cout << i ;
    }
}

void KFC(char ch)
{
    for(int i = 0; i <= 7; i++)
    {
        cout << ch;
    }
}

int main()
{
    int n1, n2;
    char ch;
    cin >> n1;

    if(n1 % 2 == 1)
    {
        cin >> n2;
        BBQ(n2); 
    }
    else
    {
        cin >> ch;
        KFC(ch);
    }

    return 0;
}
*/
