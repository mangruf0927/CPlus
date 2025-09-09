#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// 01-02
/*
#include "01_wine.h"
#include "02_wine.h"
int main()
{
    cout << "와인 이름을 입력하시오 : ";
    char lab[50];
    cin.getline(lab, 50);
    cout << "수확 년도 개수를 입력하시오: ";
    int yrs;
    cin >> yrs;

    Wine holding(lab, yrs);
    holding.GetBottles();
    holding.Show();

    const int YRS = 3;
    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};

    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();

    cout << more.Label() << " 전체 수량 : " << more.Sum() << endl;
    cout << "프로그램을 종료합니다.\n";

    return 0;
}
*/

// 03
/*
#include "03_queuetp.h"
#include "workermi.h"

const int SIZE = 5;

int main()
{
    QueueTP<Worker *> queue(SIZE);

    int num;
    cout << "1. Enqueue\t2. Dequeue\t0. 종료\n";
    
    while(cin >> num && num != 0)
    {
        if(num == 1)
        {
            if (queue.isFull()) cout << "큐가 가득 찼습니다.\n";
            else 
            {
                char choice;
                cout << "\n직종을 입력하십시오 : \n";
                cout << "w : 웨이터\ts : 가수\tt : 가수 겸 웨이터\n";
                cin >> choice;
                while (strchr("wst", choice) == NULL) 
                {
                    cout << "w, s, t 중에서 하나를 선택하십시오 : ";
                    cin >> choice;
                }

                Worker* p = nullptr;
                switch (choice) 
                {
                    case 'w': p = new Waiter; 
                        break;
                    case 's': p = new Singer; 
                        break;
                    case 't': p = new SingingWaiter; 
                        break;
                }

                cin.get();      // 남은 개행 제거
                p->Set();

                if(queue.enqueue(p)) cout << "큐 등록 완료 ! 큐 크기 : " << queue.queueCount() << endl;
                else cout << "큐 등록 실패 !\n";
            }
        }
        if(num == 2)
        {
            if (queue.isEmpty()) cout << "큐가 비었습니다.\n";
            else 
            {
                Worker* p = nullptr;
                queue.dequeue(p);
                if (p) 
                {
                    cout << "\n사원 정보는 다음과 같습니다:\n";
                    p->Show();
                    delete p;
                }
            }
        }

        cout << "1. Enqueue\t2. Dequeue\t0. 종료\n";
    }

    cout << "프로그램을 종료합니다.\n";
    return 0;
}
*/

// 04
/*
#include "04_person.h"

int main()
{
    Person * pers[3];

    pers[0] = new PokerPlayer("HK", "Kim", 10);           
    pers[1] = new Gunslinger("JW", "Koo", 5.3, 3);        
    pers[2] = new BadDude("JH", "LEE", 8.0, 1, 7);

    for(int i = 0; i < 3; i++)
        pers[i]->Show();

    for(int i = 0; i < 3; i++)
        delete pers[i];

    

    cout << "프로그램을 종료합니다.\n";
        
    return 0;
}
*/

// 05
/*
#include "05_emp.h"

int main()
{
    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();

    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();
    highfink hf(ma, "Curly Kew");
    hf.ShowAll();

    cout << "다음 출력을 위해 아무 키나 누르십시오 : \n";
    cin.get();
    highfink hf2;
    hf2.SetAll();

    cout << "abstr_emp * 포인터의 사용 : \n";
    abstr_emp * tri[4] = { &em, &fi, &hf, &hf2 };
    for(int i = 0; i < 4; i++)
        tri[i] -> ShowAll();
    
    return 0;
}
*/
