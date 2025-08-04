#include <iostream>

using namespace std;

// 버블 정렬 (Q1 ~ Q6)

// Q1
void bubbleSort(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

// Q2
void printBubbleSort(int *a, int n)
{
    int swapCnt = 0, compareCnt = 0;

    for(int i = 0; i < n - 1; i++)
    {
        cout << "패스 " << i + 1 << ":\n";
        
        for(int j = n - 1; j > i; j--)
        {
            for(int k = 0; k < j - 1; k++)
            {
                cout << a[k] << "   ";
            }

            if(a[j - 1] > a[j])
            {
                cout << a[j - 1] << " + " << a[j] << "   ";

                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;

                swapCnt++;
            }
            else cout << a[j - 1] << " - " << a[j] << "   ";

            compareCnt++;

            for(int k = j + 1; k < n; k++)
            {
                cout << a[k] << "   ";
            }
            cout << endl;
        }

        for(int j = 0; j < n; j++)
        {
            cout << a[j] << "   ";
        }
        cout << "\n\n";
    }
    cout << "비교를 " << compareCnt << "회 했습니다.\n교환을 " << swapCnt << "회 했습니다.\n";
}

// Q3
int is_sorted(const int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] > a[i + 1]) return 0;
    }

    return 1;
}

// Q4
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void printBubbleSort2(int *a, int n)
{
    int swapCnt = 0, compareCnt = 0;

    for(int i = 0; i < n - 1; i++)
    {
        int cnt = 0;
        cout << "패스 " << i + 1 << ":\n";

        for(int j = n - 1; j > i; j--)
        {
            for(int k = 0; k < j - 1; k++)
            {
                cout << a[k] << "   ";
            }

            if(a[j - 1] > a[j])
            {
                cout << a[j - 1] << " + " << a[j] << "   ";
                
                swap(a[j - 1], a[j]);

                cnt++;
                swapCnt++;
            }
            else cout << a[j - 1] << " - " << a[j] << "   ";

            compareCnt++;

            for(int k = j + 1; k < n; k++)
            {
                cout << a[k] << "   ";
            }
            cout << endl;
        }
        for(int j = 0; j < n; j++)
        {
            cout << a[j] << "   ";
        }
        cout << "\n\n";

        if(cnt == 0) break;
    }
    cout << "비교를 " << compareCnt << "회 했습니다.\n교환을 " << swapCnt << "회 했습니다.\n";
}

// Q5
void printBubbleSort3(int *a, int n)
{
    int k = 0, idx = 1;
    int swapCnt = 0, compareCnt = 0;

    while(k < n - 1)
    {
        int last = n - 1;
        cout << "패스" << idx++ << ":\n";
        
        for(int j = n - 1; j > k; j--)
        {
            for(int x = 0; x < j - 1; x++)
            {
                cout << a[x] << "   "; 
            }

            if(a[j - 1] > a[j])
            {
                cout << a[j - 1] << " + " << a[j] << "   ";

                swap(a[j - 1], a[j]);
                
                last = j;
                swapCnt++;
            }
            else cout << a[j - 1] << " - " << a[j] << "   ";

            compareCnt++;

            for(int x = j + 1; x < n; x++)
            {
                cout << a[x] << "   ";
            }
            cout << endl;
        }
        k = last;
        cout << " k = " << k << endl;

        for(int j = 0; j < n; j++)
        {
            cout << a[j] << "   ";
        }
        cout << "\n\n";
    }
        cout << "비교를 " << compareCnt << "회 했습니다.\n교환을 " << swapCnt << "회 했습니다.\n";
}

// Q6
void shakeSort(int *a, int n)
{
    int first = 0, last = n - 1;
    int passCnt = 1;

    while(first < last)
    {
        int j = last, k = first;

        if(passCnt % 2 == 0)    // 짝수일 때 (앞 -> 뒤)
        {
            for(int i = first; i < last; i++)
            {
                if(a[i] > a[i+1])
                {
                    swap(a[i], a[i+1]);
                    j = i;
                }
            }
            last = j;
        }   
        else                // 홀수일 때 (뒤 -> 앞)
        {
            for(int i = last; i > first; i--)
            {
                if(a[i - 1] > a[i])
                {
                    swap(a[i - 1], a[i]);
                    k = i;
                }
            }
            first = k;
        } 
        passCnt++;                                                        
    }
}

// 선택 정렬 (Q7)
void printSelection(int *a, int n, int standard, int min)
{
    for(int i = 0; i < n; i++)
    {
        if(i == standard) cout << "*";
        else if(i == min) cout << "+";
        else cout << " ";

        cout << " ";
    }
    
    cout << endl;

    for(int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }
}

void selectionSort(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        int minIdx = i;

        for(int j = i + 1; j < n; j++)
        {
            if(a[minIdx] > a[j]) minIdx = j;
        }

        printSelection(a, n, i, minIdx);
        cout << endl;

        if(i != minIdx) swap(a[i], a[minIdx]);
    }
}
