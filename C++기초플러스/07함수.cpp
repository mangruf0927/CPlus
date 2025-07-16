#include <iostream>

using namespace std;

// 1
/*
double CalculateMean(int, int);

int main()
{   
    int x, y;

    while(true)
    {
        cin >> x >> y;
        if(x == 0 || y == 0) break;
        
        cout << x << "와 " << y << "의 조화 평균 : " << CalculateMean(x, y) << endl;
    }


    return 0;
}

double CalculateMean(int x, int y)
{
    double mean = 2.0 * x * y / ( x + y );

    return mean;
}
*/

// 2
/*
const int Max = 10;

int InputScores(double * arr);
double Calculate(const double * arr, int size);
void Print(const double * arr, int size);

int main()
{   
    double scores[Max];
    int count = InputScores(scores);    
    Print(scores, count);
    
    cout << "평균 스코어 : " << Calculate(scores, count) << endl;

    return 0;
}

int InputScores(double * arr)
{
    cout << "골프 스코어를 입력하시오 (최대 10개)\n";

    int count = 0;

    while(count < Max)
    {
        cin >> arr[count];

        if(arr[count] < 0) break;

        count++;
    }

    return count;
}

double Calculate(const double * arr, int size)
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
}

void Print(const double * arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "스코어" << i + 1 << " : " << arr[i] << endl;
    }
}
*/

// 3
/*
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void PrintBox(const box b);
void CalculateVolume(box * pb);

int main()
{   
    box Box;

    cout << "메이커 입력 : ";
    cin.getline(Box.maker, 40);
    cout << "높이 입력 : ";
    cin >> Box.height;
    cout << "폭 입력 : ";
    cin >> Box.width;
    cout << "길이 입력 : ";
    cin >> Box.length;

    CalculateVolume(&Box);
    PrintBox(Box);
    
    return 0;
}


void PrintBox(const box b)
{
    cout << "메이커 : " << b.maker << endl;
    cout << "높이 : " << b.height << ", 폭 : " << b.width << endl;
    cout << "길이 : " << b.length << ", 면적 : " << b.volume << endl; 
}

void CalculateVolume(box * pb)
{
    pb->volume = pb->height * pb->width * pb ->length;
}
*/

// 4
/*
long double probability(unsigned numbers, unsigned numbers2);

int main()
{   
    unsigned total1, total2;

    cout << "전체 수의 개수와 메가 수를 입력하시오 : ";
    
    cin >> total1 >> total2;
    
    cout << "확률은 " << probability(total1, total2) << "번 중 한 번입니다.\n";
    

    return 0;
}

long double probability(unsigned numbers, unsigned numbers2)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for(n = numbers, p = 5; p > 0; n--, p--)
    {
        result = result * n / p;
    }

    result *= numbers2;

    return result;
}
*/

// 5
/*
int factorial(unsigned int n);

int main()
{   
    int n;

    cout << "정수를 입력하세요 : ";
    cin >> n;

    cout << n << "! = " << factorial(n) << endl;

    return 0;
}

int factorial(unsigned int n)
{
    if(n == 1 || n == 0) return 1;

    return n * factorial(n - 1);
}
*/

// 6
/*
#include <iostream>

using namespace std;

const int Max = 10;

int Fill_array(double arr[], int size);
void Show_array(const double arr[], int size);
void Reverse_array(double arr[], int size);

int main()
{   
    double arr[Max];

    int count = Fill_array(arr, Max);
    Show_array(arr, count);

    cout << "-------------------" << endl;

    Reverse_array(arr, count);
    Show_array(arr, count);

    cout << "-------------------" << endl;

    Reverse_array(arr + 1, count - 2);
    Show_array(arr, count);

    return 0;
}

int Fill_array(double arr[], int size)
{
    int count = 0;
    
    while(count < size && cin >> arr[count])
        count ++;

    return count;
}

void Show_array(const double arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << i + 1 << " : " << arr[i] << endl;
    }
}

void Reverse_array(double arr[], int size)
{
    for(int i = 0; i < size / 2; i++)
    {
        double temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
*/

// 7
/*
const int Max = 5;

int Fill_array(double * start, double * end);
void Show_array(const double * start, const double * end);
void Revalue(double r, double * start, double * end);

int main()
{   
    double properties[Max];

    int size = Fill_array(properties, properties + 5);
    Show_array(properties, properties + size);

    if(size > 0)
    {
        cout << "재평가율을 입력하십시오 : ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n') continue;
            cout << "잘못 입력했습니다, 수치를 입력하세요 : ";
        }

        Revalue(factor, properties, properties + size);
        Show_array(properties, properties + size);
    }

    cin.get();

    return 0;
}

int Fill_array(double * start, double * end)
{
    int count = 0;
    double temp;
    
    while(start + count < end && cin >> temp)
    {
        *(start + count) = temp;
        count++;
    }
        
    return count;
}

void Show_array(const double * start, const double * end)
{
    int idx = 1;
    for(const double * i = start; i < end ; i++)
    {
        cout << idx << " : " << *i << endl;
        idx++;
    }
}

void Revalue(double r, double * start, double * end)
{
    for(double * i = start; i < end ; i++)
    {
        *i *= r;
    }
}
*/

// 8
/*
#include <iostream>
#include <string>

using namespace std;

const int Seasons = 4;
const char* Sname[4] = {"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, Seasons> *pa);
void show(array<double, Seasons> da);

struct Expense
{
    array<double, Seasons> expenses;
};

int main()
{   
    Expense expense;

    fill(&expense.expenses);
    show(expense.expenses);

    return 0;
}

void fill(array<double, Seasons> *pa) // array객체는 복사본 넘겨줌
{
    for(int i = 0; i < Seasons; i++)
    {
        cout << Sname[i] << "에 소용되는 비용 : ";
        cin >> (*pa) [i];
    }
}

void show(array<double, Seasons> da) 
{
    double total = 0.0;

    cout << "\n계절 별 비용\n";

    for(int i = 0; i < Seasons; i++)
    {
        cout << Sname[i] << " : $ " << da[i] << endl;
        total += da[i];
    }

    cout << "총 비용 : $" << total << endl;
}
*/

// 9
/*
const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{   
    cout << "학급의 학생 수를 입력하십시오: ";

    int class_size;
    cin >> class_size;
    while(cin.get() != '\n') continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);

    for(int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    cout << "프로그램을 종료합니다. \n";

    return 0;
}

int getinfo(student pa[], int n)
{
    int index = 0;

    while(index < n)
    {
        cout << "학생 이름 입력 : ";
        cin.getline(pa[index].fullname, SLEN);

        if(pa[index].fullname[0] == '\0') break;

        cout << "취미 입력 : ";
        cin.getline(pa[index].hobby, SLEN);

        cout << "ooplevel 입력 : ";
        cin >> pa[index].ooplevel;

        cin.ignore();

        index++;
    }

    return index;
}

void display1(student st)
{
    cout << "fullname : " << st.fullname << ", hobby : " << st.hobby << ", ooplevel : " << st.ooplevel << endl;
}

void display2(const student * ps)
{
    cout << "fullname : " << ps->fullname << ", hobby : " << ps->hobby << ", ooplevel : " << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "fullname : " << pa[i].fullname << ", hobby : " << pa[i].hobby << ", ooplevel : " << pa[i].ooplevel << endl;
    }
}
*/

// 10
/*
double calculate(double x, double y, double (*pf)(double x, double y));

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main()
{  
    double x, y;
    double (*pf[4])(double, double) = {add, subtract, multiply, divide};
    const char * mark[4] = {" + ", " - ", " * ", " / "};

    cout << "x와 y를 입력해주세요 : ";
    cin >> x >> y;
    
    // cout << x << " + " << y << " = " << calculate(x, y, add) << endl;
    // cout << x << " - " << y << " = " << calculate(x, y, subtract) << endl;
    // cout << x << " * " << y << " = " << calculate(x, y, multiply) << endl;
    // cout << x << " / " << y << " = " << calculate(x, y, divide) << endl;

    for(int i = 0; i < 4; i++)
    {
        cout << x << mark[i] << y << " = " << calculate(x, y, pf[i]) << endl;
    }

    return 0;
}

double calculate(double x, double y, double (*pf)(double x, double y))
{
    return pf(x, y);
}

double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{
    return x * y;
}

double divide(double x, double y)
{
    return x / y;
}
*/
