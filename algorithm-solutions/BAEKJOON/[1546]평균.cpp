#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M = 0;
    cin >> N;

    vector<double> scores(N);
    for(int i = 0; i < N; i++)
    {
        cin >> scores[i];  

        if(M < scores[i]) 
            M = scores[i];
    }

    double total = 0;
    for(int i = 0; i < N; i++)
    {
        scores[i] = (scores[i] / M * 100);
        total += scores[i];
    }

    cout << fixed;
    cout << total / N << endl;
        
    return 0;
}
