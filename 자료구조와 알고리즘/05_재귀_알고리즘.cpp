#include <iostream>
#include <string>

using namespace std;

// Q1
int factorial(int n)
{
    if(n == 1 || n == 0) return 1;

    int res = 1;
    for(int i = n; i > 1; i--)
    {
        res *= i;
    }
    return res;
}

// Q2
int gcd(int x, int y)
{
    while(y != 0)
    {
        int temp = x;
        x = y;
        y = temp % y;
    }
    return x;
}

// Q3
int gcd_array(const int a[], int n)
{
    int result = a[0];
    
    for(int i = 1; i < n; i++)
    {
        result = gcd(result, a[i]);
    }
    return result;
}

// Q4
void recur(int n)
{
    if(n > 0) 
    {
        recur(n - 2);
        cout << n << endl;
        recur(n - 1);
    }
}

// n = 4라고 가정
// 하향식 분석 
// recur(4): recur(2)  → 출력 4 → recur(3)
// recur(2): recur(0)  → 출력 2 → recur(1)
// recur(1): recur(-1) → 출력 1 → recur(0)
// recur(3): recur(1)  → 출력 3 → recur(2)
// ... → 2 1 4 1 3 2 1

// 상향식 분석
// recur(1) : recur(-1) 1 recur(0) → 1
// recur(2) : recur(0)  2 recur(1) → 2 1
// recur(3) : recur(1)  3 recur(2) → 1 3 2 1
// recur(4) : recur(2)  3 recur(3) → 2 1 4 1 3 2 1

// Q5
int recur2(int n)
{
    static int count = 0;
    count++;

    if(n > 0)
    {
        recur2(n - 1);
        cout << n << endl;
        recur2(n - 2);
    }

    return count;
}

string memo[128];

int recur3(int n)
{
    static int count = 0;
    count++;

    if(memo[n + 1] != "") 
        cout << memo[n + 1];
    else 
    {
        if(n > 0)
        {
            recur3(n - 1);
            cout << n << endl;
            recur3(n - 2);

            memo[n + 1] = memo[n] + to_string(n) + "\n" + memo[n - 1]; 
        }
        else
        {
            memo[n + 1] = "";
        }
    }

    return count;
}

// Q6 
#include <stack>
struct StackInfo
{
    int num;
    int step;
};

void recur4(int n)
{
    stack<StackInfo> st; 

    st.push({n, 0});

    while(!st.empty())
    {
        if(st.top().num <= 0)
        {
            st.pop();
            continue;
        }

        if(st.top().step == 0)
        {
            st.top().step = 1;
            st.push({st.top().num - 1, 0});
        }
        else if(st.top().step == 1)
        {
            st.top().step = 2;
            st.push({st.top().num - 2, 0});
        }
        else
        {
            cout << st.top().num << endl;
            st.pop();
        }
    }
}

// Q7
#include <string>

string print(int n)
{
    if(n == 1) return "A 기둥";
    else if(n == 2) return "B 기둥";
    else return "C 기둥";
}

void hanoi(int n, int from, int to)
{
    int middle = 6 - from - to;

    if(n > 1)
        hanoi(n - 1, from, middle);

    cout << print(from) << " -> " << print(to) << endl;

    if(n > 1)
        hanoi(n -1, middle, to);
}
