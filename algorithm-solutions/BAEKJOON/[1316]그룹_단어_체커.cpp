#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int N, cnt = 0;
    cin >> N;
    
    vector<string> words(N);
    for(int i = 0; i < N; i++)
        cin >> words[i];

    for(int i = 0; i < N; i++)
    {
        string temp = "";
        for(int j = 0; j < words[i].size() - 1; j++)
            if(words[i][j] != words[i][j + 1]) temp += words[i][j];
        temp += words[i].back();

        int size = temp.size();

        sort(temp.begin(), temp.end());
        auto last = unique(temp.begin(), temp.end());
        temp.erase(last, temp.end());

        if(size == temp.size()) cnt++;
    }

    cout << cnt << endl;
    return 0;
}

// set 사용
/*
int main()
{
    int N, cnt = 0;
    cin >> N;
    
    vector<string> words(N);
    
    for(int i = 0; i < N; i++)
        cin >> words[i];

    for(int i = 0; i < N; i++)
    {
        set<char> seen;
        char prev = 0;
        bool isgroup = true;
        
        for(int j = 0; j < words[i].size(); j++)
        {
            if(words[i][j] != prev)
            {
                if(seen.count(words[i][j])) 
                {
                    isgroup = false;
                    break;
                }
                seen.insert(words[i][j]);
                prev = words[i][j];
            }
        }
        if(isgroup) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
*/
