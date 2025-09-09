#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//2중for문
/*
int main()
{
    int n, x, cnt = 0;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    cin >> x;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(v[i] + v[j] == x) cnt++;
            else if(v[i] + v[j] > x) break;
        }
    }

    cout << cnt << endl;
    return 0;
}
*/

// 투 포인터
int main()
{
    int n, x, cnt = 0;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    cin >> x;

    int leftidx = 0, rightidx = n - 1;

    while(leftidx < rightidx)
    {
        int sum = v[leftidx] + v[rightidx];
        
        if(sum == x) 
        {
            leftidx++;
            rightidx--;
            cnt++;
        }
        else if(sum > x) rightidx--;
        else leftidx++;
    }

    cout << cnt << endl;
    return 0;
}
