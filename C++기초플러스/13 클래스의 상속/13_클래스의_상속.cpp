#include <iostream>
#include <string>

using namespace std;

// 01 - 02
/*
#include "02_classic.h"

void Bravo(const Cd & disk);

int main()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
    Cd * pcd = & c1;

    cout << "객체를 직접 사용한다:\n";
    c1.Report();
    c2.Report();

    cout << "객체를 지시하는 Cd * 포인터를 사용한다:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();

    cout << "Cd 참조 매개변수를 사용하여 함수를 호출한다:\n";
    Bravo(c1);
    Bravo(c2);

    cout << "대입을 테스트한다:\n";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Bravo(const Cd & disk)
{
    disk.Report();
}
*/

// 03
/*
#include "03_dmaabc.h"

int main()
{
    dmaABC * pdma[3];
    char kind;

    char label[50], color[50], style[50];
    int rating;

    for (int i = 0; i < 3; ++i) 
    {
        cout << "baseDMA는 1, lacksDMA는 2, hasDMA는 3을 입력하십시오 : ";

        while(cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
            cout << "1, 2, 3 중 하나를 입력하십시오 : ";
        
        if(kind == '1')
        {
            cout << "label 입력 : ";
            cin >> label;
            cout << "rating 입력 : ";
            cin >> rating;
            pdma[i] = new baseDMA(label, rating);
        }
        else if(kind == '2')
        {
            cout << "color 입력 : ";
            cin >> color;
            pdma[i] = new lacksDMA(color);
        }
        else
        {
            cout << "style 입력 : ";
            cin >> style;
            pdma[i] = new hasDMA(style);
        }
        while(cin.get() != '\n') continue;
    }

    for(int i = 0; i < 3; i++)
    {
        pdma[i]->View();
        cout << endl;
    }
    
    for(int i = 0; i < 3; i++)
    {
        delete pdma[i];
    }

    cout << "프로그램은 종료됩니다.\n";
    return 0;
}
*/

// 04
/*
#include "04_port.h"

int main()
{
    Port p1("Gallo", "tawny", 20);
    VintagePort vp1("Cockburn", 3, "The King", 1945);

    cout << "Port 객체 출력 :\n";
    p1.Show();
    cout << "Vintage 객체 출력 : \n";
    vp1.Show();

    cout << endl;

    cout << "p1 += 5 : ";
    p1 += 5;
    cout << p1.BottleCount() << endl;
    cout << "vp1 -= 1 : ";
    vp1 -= 1;
    cout << vp1.BottleCount() << endl;

    cout << endl;

    VintagePort vp2 = vp1;
    cout << "VintagePort 복사 결과 : \n";
    cout << vp2 << endl;

    cout << endl;

    cout << "Port 포인터 배열 : \n";
    Port* pt[2];
    pt[0] = new Port(p1);
    pt[1] = new VintagePort("Warre", 2, "No.1", 1999);

    for (int i = 0; i < 2; ++i) 
    {
        pt[i]->Show();
        cout << endl;
    }
    for (int i = 0; i < 2; ++i) delete pt[i];

    cout << "프로그램은 종료됩니다.\n";
    return 0;
}
*/
