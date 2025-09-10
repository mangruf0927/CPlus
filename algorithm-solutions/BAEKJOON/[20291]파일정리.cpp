#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    map<string, int> m;

    for(int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        str = str.substr(str.find('.') + 1);
        m[str]++;
    }
        

    for(auto iter = m.begin(); iter != m.end(); iter++)
        cout << iter->first << " " << iter->second << endl;

    return 0;
}
