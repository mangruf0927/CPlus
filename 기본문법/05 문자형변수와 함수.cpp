#include <iostream>

using namespace std;

// 문제 1
/*
int main() 
{
    char text;
    cin >> text;
    for (int i = 0; i < 3; i++) 
    {
        cout << text;
    }
    cout << "\n";
    return 0;
}
*/

// 문제 2
/*
int main() 
{
    int arr[4];
    int sum = 0;
    for (int i = 0; i < 4; i++) 
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum << "\n";
    return 0;
}
*/

// 문제 3
/*
int main() {
    char arr[3] = {'m', 'i', 'n'};
    int index;
    cin >> index;
    cout << arr[index] << "\n";
    return 0;
}
*/


// 문제 4
/*
void KFC() 
{ 
  cout << "KFC입니다\n"; 
}
void MC() 
{ 
  cout << "MC입니다\n"; 
}

int main() 
{
    int num;
    cin >> num;
    if (num == 1) KFC();
    else if (num == 2) MC();
    return 0;
}
*/


// 문제 5
/*
void LOT() 
{
    for (int i = 1; i <= 5; i++) 
    {
        cout << i;
    }
    cout << "\n";
}

int main() 
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) 
    {
        LOT();
    }
    return 0;
}
*/

// 문제 6
/*
void KFC() 
{
    for (int i = 0; i < 10; i++) 
    {
      cout << "#";
    }
    cout << "\n";
}

void MC() 
{
    for (int i = 0; i < 10; i++) 
    {
      cout << "@";
    }
    cout << "\n";
}

int main() 
{
    KFC();
    MC();
    return 0;
}
*/


// 문제 7
/*
int main() 
{
    int arr[6];
    for (int i = 0; i < 3; i++) 
    {
      cin >> arr[i];
    }
    
    int num;
    cin >> num;

    for (int i = 3; i < 6; i++) 
    {
      arr[i] = num++;
    }
    for (int i = 0; i < 6; i++) 
    {
      cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
*/

// 문제 8
/*
int num;
void KFC()
{
    cin >> num;
}

void BBQ()
{
    if(num > 5) cout << "만세";
    else cout << "다시";
}

int main() 
{
    KFC();
    BBQ();
    return 0;
}
*/

// 문제 9
/*
char arr[3] = {'A', 'B', 'C'};

void KFC() 
{
    for (int i = 0; i < 3; i++) 
    {
      cout << arr[i];
    }
    cout << "\n";
}

int main() 
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++) 
    {
        KFC();
    }
    return 0;
}
*/

// 문제 10
/*
int arr[4];

void Input() 
{
    for (int i = 0; i < 4; i++) 
    {
      cin >> arr[i];
    }
}

void Output() 
{
    for (int i = 3; i >= 0; i--) 
    {
      cout << arr[i];
    }
    cout << "\n";
}

int main() 
{
    Input();
    Output();
    return 0;
}
*/

// 문제 11
/*
void PrintAll(int arr[], int num) 
{
    for (int i = 0; i < num; i++) 
    {
      cout << arr[i] << "\n";
    }
}

int main() 
{
    int arr[6];
    int num;
    cin >> num;

    for (int i = 0; i < 6; i++) 
    {
      arr[i] = num++;
    }
    PrintAll(arr, 6);
    return 0;
}
*/

// 문제 12
/*
void QTR(){ cout << "QTR100%"; }
void BBQ() { cout << "BBQ100%"; }

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }

    if(sum  >= 10) QTR();
    else BBQ();


    return 0;
}
*/

// 문제 13
/*
int main()
{
    int arr[11] = {3, 4, 1, 5, 8, 1, 7, 7, 3, 6, 9};
    int num;
    cin >> num;
    for(int i = 0; i < 11; i += num)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
*/

// 복습 문제 1 
/*
void Coding()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << "(" << num1 << ")(" << num2 << ")3";
}

int main()
{
    Coding();

    return 0;
}
*/

// 복습 문제 2 
/*
void KFC() {cout << "KFC\n";}
void BBQ() {cout << "BBQ\n";}

int main()
{
    char c;
    cin >> c;
    if(c == 'B') 
    {
        KFC();
        BBQ();
    }
    else if(c == 'b')
    {
        BBQ();
    }
    else if(c == '7')
    {
        KFC();
    }

    return 0;
}
*/

// 복습 문제 3 
/*
void PrintAll(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << "\n";
}

int main()
{
    int arr1[5], arr2[5];
    int num1, num2;
    cin >> num1 >> num2;
    for(int i = 0; i < 5; i++)
    {
        arr1[i] = num1;
        arr2[i] = num2;
    }

    PrintAll(arr1, 5);
    PrintAll(arr2, 5);

    return 0;
}
*/

// 복습 문제 4 
/*
void PrintAll(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << "\n";
}

int main()
{
    int arr[5];
    int num;
    cin >> num;

    for(int i = 0; i < 5; i++)
    {
        arr[i] = num--;
    }

    PrintAll(arr, 5);

    return 0;
}
*/

// 복습 문제 5
/*
int main()
{
    int arr[5] = {4, 1, 2, 3, 5};
    char c;
    cin >> c;
    if(c == 'a' || c == 'b' || c == 'c')
    {
        for(int i = 3; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        for(int i = 4; i > 0; i--)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
*/

// 복습 문제 6 
/*
int main()
{
    int arr[7] = {3, 5, 1, 2, 4, 6, 7};
    int num1, num2;
    cin >> num1 >> num2;
    if(num1 == 3 && num2 == 5)
    {
        for(int i = 3; i <= 5; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
*/

// 복습 문제 7 
/*
int main()
{
    int data[4];
    int num;
    cin >> num;
    for(int i = 0; i < sizeof(data)/sizeof(data[0]); i++)
    {
        data[i] = num--;
        cout << data[i] << " ";
    }

    return 0;
}
*/

// 복습 문제 8
/*
int main()
{
    int arr[6];
    int a, b;
    cin >> a >> b;
    for(int i = 0; i < 3; i++)
    {
        arr[i] = a++;
    }
    for(int i = 3; i < 6; i++)
    {
        arr[i] = b--;
    }

    return 0;
}
*/

// 복습 문제 9
/*
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        arr[i] = num1 + num2 * i;
    }

    return 0;
}
*/

// 복습 문제 10
/*
int main()
{
    int num;
    cin >> num;
    int arr[6];
    for(int i = 0; i < 6; i++)
    {
        arr[i] = num * (i+1);
    }

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
*/
