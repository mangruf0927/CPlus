#include <iostream>
#include <cmath>

using namespace std;

// 01
/*
#include "01_tvrm.h"
int main()
{
    Tv samsung;
    samsung.settings();
    samsung.onoff();
    samsung.chanup();
    samsung.settings();

    Remote lions;
    lions.set_chan(samsung, 14);
    lions.voldown(samsung);
    lions.voldown(samsung);
    samsung.settings();

    samsung.set_remotemode(lions);
    lions.show_mode();

    samsung.set_remotemode(lions);
    lions.show_mode();

    return 0;
}
*/

// 02
/*
#include "02_excmean.h"

double hmean(double a, double b)
{
    if (a == -b) 
        throw bad_hmean();   
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0) 
        throw bad_gmean();  
    return std::sqrt(a * b);
}

int main()
{
    double x, y, z, g;

    cout << "두 수를 입력하십시오 : ";
    while(cin >> x >> y)
    {
        try
        {
            z = hmean(x, y);
            cout << x << ", " << y << "의 조화평균은 " << z << "입니다.\n";
            
            g = gmean(x, y);
            cout << x << ", " << y << "의 기하평균은 " << g << "입니다.\n";
            cout << "다른 두수를 입력하십시오 (끝내려면 q): ";

        }
        catch(bad_hmean & bg)
        {
            cout << bg.what();
            cout << "다시 하십시오.\n";
            continue;
        }
        catch(bad_gmean & hg)
        {
            cout << hg.what();
            cout << "죄송합니다. 더 이상 진행할 수 없습니다.\n";
            break;
        }
    }
    cout << "프로그램을 종료합니다.\n";
    return 0;
}
*/

// 03
/*
#include "03_excmean.h"

double hmean(double a, double b)
{
    if (a == -b) 
        throw bad_hmean(a, b);   
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0) 
        throw bad_gmean(a, b);  
    return std::sqrt(a * b);
}

int main()
{
    double x, y, z, g;

    cout << "두 수를 입력하십시오 : ";
    while(cin >> x >> y)
    {
        try
        {
            z = hmean(x, y);
            cout << x << ", " << y << "의 조화평균은 " << z << "입니다.\n";
            
            g = gmean(x, y);
            cout << x << ", " << y << "의 기하평균은 " << g << "입니다.\n";
            cout << "다른 두수를 입력하십시오 (끝내려면 q): ";

        }
        catch(bad_hmean & bg)
        {
            bg.mesg();
            cout << "다시 하십시오.\n";
            continue;
        }
        catch(bad_gmean & hg)
        {
            hg.mesg();
            cout << "죄송합니다. 더 이상 진행할 수 없습니다.\n";
            break;
        }
    }
    cout << "프로그램을 종료합니다.\n";
    return 0;
}
*/
