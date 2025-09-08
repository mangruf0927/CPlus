#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int start = 666;
    int count = 0;

    for(int i = start;; i++)
    {
        if(to_string(i).find("666") != string::npos) count++;

        if(N == count)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
