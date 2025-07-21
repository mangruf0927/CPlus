#include <iostream>
#include <string>
#include <cstring>

using namespace std;
// 1
/*
int main()
{
    string firstName, lastName;
    char grade;
    int age;

    cout << "영문 퍼스트 네임(이름) : ";
    getline(cin, firstName);
    cout << "영문 라스트 네임(성) : ";
    cin >> lastName;
    cout << "학생이 원하는 학점 : ";
    cin >> grade;
    cout << "나이 : ";
    cin >> age;

    cout << "성명: " << lastName << ", " << firstName << "\n";
    cout << "학점: " << (char)(grade + 1) << "\n나이: " << age << endl;

    return 0;
}
*/

// 2 
/*
int main()
{
    string name, dessert;
    
    cout << "이름을 입력하십시오 : \n";
    getline(cin, name);
    cout << "좋아하는 디저트를 입력하십시오 : \n";
    getline(cin, dessert);

    cout << "맛있는 " << dessert;
    cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";

    return 0;
}
*/

// 3
/*
int main()
{
    char first[20], last[20], name[50];

    cout << "퍼스트 네임(이름)을 입력하시오: ";
    cin.getline(first ,20);
    cout << "라스트 네임(성)을 입력하시오: ";
    cin.getline(last ,20);

    strcpy(name, last);
    strcat(name, ", ");
    strcat(name, first);

    cout << "하나의 문자열로 만들면: " << name << endl;

    return 0;
}
*/

// 4
/*
int main()
{
    string first, last, name;

    cout << "퍼스트 네임(이름)을 입력하시오: ";
    cin >> first;
    cout << "라스트 네임(성)을 입력하시오: ";
    cin >> last;

    name = last + ", " + first;

    cout << "하나의 문자열로 만들면: " << name << endl;

    return 0;
}
*/

// 5
/*
struct CandyBar
{
    char name[20];
    double weight;
    int calorie;
};

int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "이름 : " << snack.name << "\n중량 : " << snack.weight << "\n칼로리 : " << snack.calorie << endl;

    return 0;
}
*/

// 6
/*
struct CandyBar
{
    char name[20];
    double weight;
    int calorie;
};

int main()
{
    CandyBar snacks[3];

    snacks[0] = {"abc", 2.4, 800};
    snacks[1] = {"Hello candy ", 4.9, 709};
    snacks[2] = {"snack bar", 3.4, 260};

    cout << "1. 이름 : " <<  snacks[0].name << ", 중량 : " << snacks[0].weight << ", 칼로리 : " << snacks[0].calorie << endl;
    cout << "2. 이름 : " <<  snacks[1].name << ", 중량 : " << snacks[1].weight << ", 칼로리 : " << snacks[1].calorie << endl;
    cout << "3. 이름 : " <<  snacks[2].name << ", 중량 : " << snacks[2].weight << ", 칼로리 : " << snacks[2].calorie << endl;

    return 0;
}
*/

// 7
/*
struct TCL
{
    char name[20];
    double diameter;
    double weight;
};

int main()
{
    TCL pizza;

    cout << "피자 회사의 이름을 입력하시오 : ";
    cin.getline(pizza.name, 20);
    cout << "피자의 지름을 입력하시오 : ";
    cin >> pizza.diameter;
    cout << "피자의 중량을 입력하시오 : ";
    cin >> pizza.weight;
    
    cout << "피자 회사 이름 : " << pizza.name << "\n피자의 지름 : " << pizza.diameter << "\n피자의 중량 : " << pizza.weight << endl;

    return 0;
}
*/

// 8
/*
int main()
{
    TCL *pizza = new TCL;

    cout << "피자 지름을 입력하세요 : ";
    cin >> pizza -> diameter;
    cin.ignore();
    cout << "피자 회사 이름을 입력하세요 : ";
    getline(cin, pizza->name);
    cout << "피자 중량을 입력하세요 : ";
    cin >> pizza -> weight;

    cout << "피자 회사의 이름 : " << pizza -> name << ", 피자의 지름 : " << pizza -> diameter << ", 피자의 중량 : " << pizza ->weight << endl;

    delete pizza;

    return 0;
}
*/

// 9
/*
int main()
{
    CandyBar * snacks = new CandyBar[3];

    snacks[0] = {"abc", 2.4, 800};
    snacks[1] = {"Hello candy ", 4.9, 709};
    snacks[2] = {"snack bar", 3.4, 260};

    cout << "1. 이름 : " <<  snacks->name << ", 중량 : " << snacks->weight << ", 칼로리 : " << snacks->calrie << endl;
    cout << "2. 이름 : " <<  (snacks + 1)->name << ", 중량 : " << (snacks + 1)->weight << ", 칼로리 : " << (snacks + 1)->calrie << endl;
    cout << "3. 이름 : " <<  (snacks + 2)->name << ", 중량 : " << (snacks + 2)->weight << ", 칼로리 : " << (snacks + 2)->calrie << endl;

    delete [] snacks;

    return 0;
}
*/

// 10
/* 
int main()
{
    int results[3], sum = 0;

    cout << "달리기 결과에 대해서 세 번 입력하시오 ";
    cin >> results[0] >> results[1] >> results[2];

    sum = results[0] + results[1] + results[2];
    double average = sum / 3;

    cout << "평균 기록 : " << average << "초\n";

    return 0;
}
*/
