#include <iostream>

using namespace std;

int main()
{
    // 1
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // 2
    int arr[5] = {4, 1, 3, 6, 9};
    int n;
    cin >> n;
    cout << n << "번index의값은" << arr[n] << "입니다";

    // 3
    int arr[7];
    for(int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    cout << arr[0] + arr[6];

    // 4
    int num;
    cin >> num;
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        arr[i] = num + 5;
        cout << arr[i] << " ";
    }

    // 5
    int arr[6] = {3, 4, 1, 6, 7, 5};
    int a, b;
    cin >> a >> b;
    cout << arr[a] + arr[b];

    // 6
    int arr[4] = {3, 1, 2, 5};
    int num;
    cin >> num;
    if(arr[num] > 2) cout << "우와";
    else cout << "ㅠㅠ";

    // 7
    int arr[5] = {3, 9, 27, 81, 243};
    int num;
    cin >> num;
    cout << arr[num] - 100;

    // 8
    int num;
    cin >> num;
    if(num > 5) 
    {
        for(int i = 1; i <= 10; i++)
        {
            cout << i << "\n";
        }
    }
    else
    {
        for(int i = 5; i >= 1 ; i--)
        {
            cout << i << "\n";
        }
    }

    // 9
    int arr[5] = {5, 2, 3, 4, 7};
    for(int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    // 10
    int arr[6];
    int num;
    cin >> num;
    for(int i = 0; i < 6; i++)
    {
        arr[i] = num--;
    }
    cout << arr[2];

    // 11
    int arr[4];
    int sum = 0;
    for(int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;

    // 12
    int arr[10] = {5, 25, 54, 2, -33, 57, 82, -8, 13, 1};
    int index;
    cin >> index;
    for(int i = index; i < 10; i++)
    {
        cout << arr[i] << "\n";
    }
  
    // 훈련 문제 1
    int arr[6] = {3, 2, 6, 7, 1, 8};
    int index;
    cin >> index;
    cout << arr[index];

    // 훈련 문제 2
    int num;
    cin >> num;
    
    if(num != 3) cout << "3이 아니다\n";
    if(num != 5) cout << "5가 아니다\n";
    if(1 < num && num < 10)
    {
        for(int i = 5; i >= 1; i--)
        {
            cout << i << "\n";
        }
    }

    // 훈련 문제 3
    int arr[5];
    int num;
    cin >> num;
    for(int i = 0; i < 5; i++)
    {
        arr[i] = num;
        cout << arr[i];
    }

    // 훈련 문제 4
    int arr[5] = {1, 7, 3, 2, 6};
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }

    // 훈련 문제 5
    int arr[7];
    for(int i = 0; i < 7; i++)
    {
        cin >> arr[i];   
    }
    cout << arr[0] + arr[1] + arr[2];

    // 훈련 문제 6
    int arr[5] = {3, 9, 12, 15, 55};
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b + c > 10) cout << arr[4];
    else cout << arr[0];

    // 훈련 문제 7
    int arr[10] = {5, 7, 1, 8, -4, -73, 4, 2, 20, 84};
    int index;
    cin >> index;
    for(int i = index; i >= 0; i--)
    {
        cout << arr[i] << "\n";
    }

    // 훈련 문제 8
    int num;
    cin >> num;
    int arr[6];
    for(int i = 0; i < 6; i++)
    {
        arr[i] = num++;
        cout << arr[i] << "\n";
    }

    // 훈련 문제 9
    int arr[4] = {0, 0, 0, 0};
    int a, b;
    cin >> a >> b;
    arr[0] = a;
    arr[2] = b;

    for(int i = 0; i < 4; i++)
    {
        cout << arr[i];
    }
    

    return 0;
}
