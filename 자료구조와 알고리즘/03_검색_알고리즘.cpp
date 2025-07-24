#include <iostream>

using namespace std;

// Q1
/*
int search(int a[], int n, int key)
{
    a[n] = key;
    int i;
    for(i = 0; i <= n; i++)
    {
        if(a[i] == key) break;
    }

    return i == n ? -1: i;
}

int main()
{
    int nx, ky;

    cout << "선형 검색(보초법)\n";
    cout << "요수 개수 : ";
    cin >> nx;

    int * arr = new int[nx + 1];

    for(int i = 0; i < nx; i++)
    {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "검색값 : ";
    cin >> ky;

    int idx = search(arr, nx, ky);
    if(idx == -1) cout << "검색에 실패했습니다.\n";
    else cout << ky << "은(는) arr[" << idx << "]에 있습니다.\n";

    delete [] arr;
    return 0;
}
*/

// Q2
/*
int search(int a[], int n, int key)
{
    cout << "   | ";
    for(int i = 0; i < n; i++)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << "---+";

    for(int i = 0; i < n; i++)
    {
        cout << "---";
    }

    cout << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "   |";

        for(int j = 0; j < n; j++)
        {
            if(j == i) cout << " *";
            else cout << "  ";
        }

        cout << "\n  " << i << "| ";

        for(int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
        cout << "\n";

        if(a[i] == key) return i;

        cout << "   |\n";
    }

    return -1;
}

int main()
{   
    int num, key;
    cout << "요소 개수 : ";
    cin >> num;

    int * arr = new int[num];

    cout << "데이터 입력 : ";
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    cout << "검색값 : ";
    cin >> key;

    int idx = search(arr, num, key);

    if(idx == -1) cout << key << "이/가 존재하지 않습니다.\n";
    else cout << key << "은 arr[" << idx << "]에 존재합니다.\n";

    return 0;
}
*/

// Q3
/*
int search_idx(const int a[], int n, int key, int idx[])
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            idx[count] = i;
            count++;
        }
    }
    return count;
}

int main()
{   
    int arr[8] = {1, 9, 2, 9, 4, 6, 7, 9};
    int key = 9;

    int idx[8] = {};

    int count = search_idx(arr, 8, key, idx);

    if(count > 0)
    {
        cout << "{";
        for(int i = 0; i < count; i++) 
        {
            cout << idx[i];
            if(i < count - 1) cout << ", ";
        }
        cout << "}\n";
        cout << "배열 arr에 " << key << "는 " << count << "개 존재합니다.\n";
    }
    else cout << "배열 arr에 " << key << "는 존재하지 않습니다.\n";
        
    return 0;
}
*/

// Q4
/*
int bin_search(const int a[], int n, int key)
{
    cout << "   |";
    for (int i = 0; i < n; i++)
        cout << setw(3) << i;
    cout << "\n";

    cout << "---+";
    for (int i = 0; i < n; i++)
        cout << "---";
    cout << "\n";

    int pl = 0, pr = n - 1;

    while (pl <= pr)
    {
        int pc = (pl + pr) / 2;

        cout << "   |";
        for (int i = 0; i < n; i++)
        {
            if (i == pl) cout << " <- ";
            else if (i == pc) cout << " + ";
            else if (i == pr) cout << " -> ";
            else cout << "   ";
        }
        cout << "\n";

        cout << setw(3) << pc << "|";
        for (int i = 0; i < n; i++)
            cout << setw(3) << a[i];
        cout << "\n";

        if (a[pc] == key) return pc;
        else if (key < a[pc]) pr = pc - 1;
        else pl = pc + 1;

        cout << "   |\n";
    }

    return -1;
}

int main()
{   
    int x[7] = {1, 2, 8, 9, 10, 32, 56};
    int key = 32;

    int idx = bin_search(x, 7, key);

    if(idx == -1) cout << "검색에 실패했습니다.\n";
    else cout << key << "는(은) x[" << idx << "]에 있습니다.\n";

    return 0;
}
*/

// Q5
/*
int bin_search(const int a[], int n, int key)
{
    int pl = 0, pr = n - 1, result = -1;

    while (pl <= pr)
    {
        int pc = (pl + pr) / 2;

        if (a[pc] == key)
        {
            result = pc;
            pr = pc - 1;
        }
        else if (key < a[pc]) pr = pc - 1;
        else pl = pc + 1;
    }

    return result;
}

int main()
{   
    int x[11] = {1, 3, 5, 7, 7, 7, 7, 8, 8, 9, 9};
    int key = 7;

    int idx = bin_search(x, 11, key);

    if(idx == -1) cout << "검색에 실패했습니다.\n";
    else cout << key << "는(은) x[" << idx << "]에 있습니다.\n";

    return 0;
}
*/
