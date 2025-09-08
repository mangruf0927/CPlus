#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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
