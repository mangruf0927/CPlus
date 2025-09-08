#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int cnt = 0;
    for(int i = 0; i < str.size(); i++)
        if(str[i] == ' ') cnt++;
    
    if(str.front() == ' ') cnt--;
    if(str.back() == ' ') cnt--;

    if(str.empty()) cout << 0 << endl;
    else cout << cnt + 1;
        
    return 0;
}
