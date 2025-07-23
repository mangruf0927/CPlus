#include <iostream>
#include <cstring>
#include <cctype> 

using namespace std;

// 1
/*
void Print(const char* str, int n = 0);

int main()
{  
    Print("Hello");
    Print("My name");
    Print("is");
    Print("Mangruf", 3);
    
    return 0;
}

void Print(const char* str, int n)
{
    static int count = 0;
    count++;

    if(n != 0) 
    {
        for(int i = 0; i < count; i++)
        {
            cout << str << endl;
        }
    }
    else cout << str << endl;
}
*/

// 2
/*
struct CandyBar
{
    char name[80];
    double weight;
    int calorie;
};

void SetCandy(CandyBar & candy, const char * name = "Millennium Munch", double w = 2.85, int c = 350);
void Print(const CandyBar & candy);

int main()
{  
    CandyBar candy;

    SetCandy(candy);
    Print(candy);

    cout << endl;

    SetCandy(candy, "mangruf", 9.27, 1999);
    Print(candy);

    return 0;
}

void SetCandy(CandyBar & candy, const char * name, double w, int c)
{
    strcpy(candy.name, name);
    candy.weight = w;
    candy.calorie = c;
}

void Print(const CandyBar & candy)
{
    cout << "name : " << candy.name << ", weight = " << candy.weight << ", calorie = " << candy.calorie << endl;
}
*/

// 3
/*
void LowertoUpper(string &);

int main()
{  
    string contents;

    while(true)
    {
        cout << "문자열을 입력하시오 (끝내려면 q) : ";
        getline(cin, contents);
        
        if(contents == "q") break;
        else 
        {
            LowertoUpper(contents);
            cout << contents << endl;
        }
    }

    cout << "끝." << endl;

    return 0;
}

void LowertoUpper(string & str)
{
    for(int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
}
*/

// 4
/*
struct stringy
{
    char * str;         // 문자열 지시
    int ct;             // 문자열의 길이 ('\0' 제외)
};

void set(stringy & str, const char []);
void show(const stringy & str, int num = 1);
void show(const char[], int num = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be";

    set(beany, testing);
    show(beany);
    show(beany, 2);

    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);

    show("Done!");

    delete [] beany.str;                // 까먹지 않기

    return 0;
}

void set(stringy & s, const char ch[])
{
    int length = strlen(ch);
    s.str = new char[length + 1];
    strcpy(s.str, ch);
    s.ct = length;
}

void show(const stringy & s, int num)
{
    if (num < 0) num = 0;
    for(int i = 0; i < num; i++)
    {
        cout << s.str << endl;
    }
}

void show(const char ch[], int num)
{
    if (num < 0) num = 0;
    for(int i = 0; i < num; i++)
    {
        cout << ch << endl;
    }
}
*/

// 5
/*
template <typename T>
T max5(T * arr)
{
    T max = arr[0];
    for(int i = 1; i < 5; i++)
    {
        if(max < arr[i]) max = arr[i];
    }
    return max;
}

int main()
{
    int intNums[5];
    double doubleNums[5];

    cout << "int형 변수 5개를 입력하시오 : " ;
    for(int i = 0; i < 5; i++)
    {
        cin >> intNums[i];
    }

    cout << "최댓값은 : " << max5(intNums) << "입니다.\n";

    cout << "double형 변수 5개를 입력하시오 : ";
    for(int i = 0; i < 5; i++)
    {
        cin >> doubleNums[i];
    }

    cout << "최댓값은 : " << max5(doubleNums) << "입니다.\n";

    return 0;
}
*/

// 6
/* 
template <typename T>
T maxN(T * arr, int num)
{
    T max = arr[0];
    for(int i = 1; i < num; i++)
    {
        if(max < arr[i]) max = arr[i];
    }

    return max;
}

template <> char* maxN<char*>(const char *str[], int num)
{
    int max = strlen(str[0]);
    int address = 0;

    for(int i = 1; i < num; i++)
    {
        if(max < strlen(str[i])) 
        {
            max = strlen(str[i]);
            address = i;
        }
    }

    return str[address];
}

int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    cout << "arr1배열의 원소 중 최대값 : " << maxN(arr1, 6) << endl;

    double arr2[4] = {1999.0, 9.27, 1996.0, 2.01};
    cout << "arr2배열의 원소 중 최대값 : " << maxN(arr2, 4) << endl;

    const char * arr3[5] = {"hello", "my", "name", "is", "hankyeol"};
    cout << "arr3배열 중 가장 긴 문자열의 주소는 : " << maxN(arr3, 5) << endl;

    return 0;
}
*/

// 7
/*
template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts mr_E[3] = {{"Ima Wolfe", 2400.0}, {"Ura Foxe", 1300.0}, {"Iby stout", 1800.0}};
    double * pd[3];

    for(int i = 0; i < 3; i++)
    {
        pd[i] = &mr_E[i].amount;
    }

    cout << "Mr.E의 재산 목록의 전체 개수 : ";
    cout << SumArray(things, 6) << endl;

    cout << "Mr.E의 채무의 합계 : ";
    cout << SumArray(pd, 3) << endl;

    return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
    cout << "템플릿 A\n";
    T sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    return sum;
}

template <typename T>
T SumArray(T * arr[], int n)
{
    cout << "템플릿 B\n";
    T sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += *arr[i];
    }
    
    return sum;
}
*/
