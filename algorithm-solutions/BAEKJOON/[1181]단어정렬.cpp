#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b)
{
    if(a.size() == b.size()) return a < b;
    else return a.size() < b.size();
}

int main()
{
    int N;
    cin >> N;

    vector<string> words(N);

    for(int i = 0; i < N; i++)
        cin >> words[i];

    sort(words.begin(), words.end(), compare);
    words.erase(unique(words.begin(), words.end()), words.end());
    
    for(int i = 0; i < words.size(); i++)
        cout << words[i] << endl;

    return 0;
}
