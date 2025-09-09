#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;

    int alpha[26];
    for(int i = 0; i < 26; i++) alpha[i] = -1;

    for(int i = 0; i < S.size(); i++)
    {
        int temp = S[i] - 'a';
        
        if(alpha[temp] == -1) alpha[temp] = i;
    }

    for(int i = 0; i < 26; i++)
        cout << alpha[i] << " ";

    return 0;
}
