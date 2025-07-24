#include <iostream>
#include <iomanip>
#include <string>
#include <random>

using namespace std;

// Q1
/*
int minof(const int a[], int n);

int main()
{
    int num;
    int * heights = new int[num];
  
    cout << "사람 수 : ";
    cin >> num;
    
    for(int i = 0; i < num; i++)
    {
        cout << "heights[" << i << "]: ";
        cin >> heights[i];
    }
    cout << "최솟값은 " << minof(heights, num) << "입니다.\n";
    
    delete [] heights;
    return 0;
}

int minof(const int a[], int n)
{
    int min = a[0];

    for(int i = 1; i < n; i++)
    {
        if(min > a[i]) min = a[i];
    }
    return min;
}
*/

// Q2
/*
int sumof(const int a[], int n);

int main()
{
    int num;
    cout << "사람 수 : ";
    cin >> num;

    int * heights = new int[num];
    for(int i = 0; i < num; i++)
    {
        cout << "heights[" << i << "]: ";
        cin >> heights[i];
    }

    cout << "키의 합은 " << sumof(heights, num) << "입니다.\n";
    
    delete [] heights;

    return 0;
}

int sumof(const int a[], int n)
{
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return sum;
}
*/

// Q3
/*
double aveof(const double a[], int n);

int main()
{
    int num;
    cout << "사람 수 : ";
    cin >> num;

    double * heights = new double[num];
    for(int i = 0; i < num; i++)
    {
        cout << "heights[" << i << "]: ";
        cin >> heights[i];
    }

    cout << "키의 평균은 " << aveof(heights, num) << "입니다.\n";
    
    delete [] heights;

    return 0;
}

double aveof(const double a[], int n)
{
    double sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return sum / n;
}
*/

// Q4
/*
int random(int a, int b);
int maxof(const int a[], int n);

random_device rd;
mt19937 gen(rd());

int main()
{
    int num = random(5, 20);
    int * heights = new int[num];
    
    for(int i = 0; i < num; i++)
    {
        heights[i] = random(100, 189);
    }
    cout << "최댓값은 " << maxof(heights, num) << "입니다.\n"; 

    delete [] heights;
    return 0;
}

int random(int a, int b)
{
    uniform_int_distribution<> dist(a, b);   
    return dist(gen);
}

int maxof(const int a[], int n)
{
    int max = a[0];

    for(int i = 1; i < n; i++)
    {
        if(max < a[i]) max = a[i];
    }

    return max;
}
*/

// Q5
/*
void ary_reverse(int a[], int n);

int main()
{
    int nx;
    cout << "요소 개수 : ";
    cin >> nx;

    int * x = new int[nx];

    for(int i = 0; i < nx; i++)
    {
        cout << "x[" << i << "]: ";
        cin >> x[i];
    }

    ary_reverse(x, nx);

    delete [] x;
    return 0;
}

void ary_reverse(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    for(int i = 0; i < n / 2; i++)
    {
        cout << "\na[" << i << "]와 a[" << n - i - 1 << "]를 교환합니다.\n";
 
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;

        for(int j = 0; j < n; j++)
        {
            cout << a[j] << " ";
        }
    }
    cout << "\n역순 정렬을 종료합니다.\n";
}
*/

// Q6
/*
int main()
{
    const char * numbers = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num, base, retry = 1;
    string result;
    
    while(retry == 1)
    {
        cout << "10진수를 기수 변환합니다.\n";
        cout << "변환하는 음이 아닌 정수 : ";
        cin >> num;
        cout << "어떤 진수로 변환할까요?(2-36): ";
        cin >> base;

        result = "";
        
        while(num > 0)
        {
            cout << base << "|" << setw(10) << num << " ··· " << numbers[num % base];
            cout << "\n + ----------\n";

            result = numbers[num % base] + result;
            num /= base;
        }
        cout << setw(12) << 0 << endl;
        cout << base << "진수로 " << result << "입니다.\n";

        cout << "한 번 더 할까요?(1 ··· 예/0 ··· 아니오) : ";
        cin >> retry;
    }
    return 0;
}
*/

// Q7
/*
void ary_copy(int a[], const int b[], int n);

int main()
{
    int num;
    cout << "요소 개수 : ";
    cin >> num;

    int * a = new int[num], *b = new int[num];

    for(int i = 0; i < num; i++)
    {
        cout << "b[" << i << "] :";
        cin >> b[i];
    }

    cout << "배열 a에 b를 복사\n";
    ary_copy(a, b, num);

    for(int i = 0; i < num; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    delete [] a;
    delete [] b;

    return 0;
}

void ary_copy(int a[], const int b[], int n)
{
    for(int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
}
*/

// Q8
/*
void ary_rcopy(int a[], const int b[], int n);

int main()
{
    int num;
    cout << "요소 개수 : ";
    cin >> num;

    int * a = new int[num], *b = new int[num];

    for(int i = 0; i < num; i++)
    {
        cout << "b[" << i << "] :";
        cin >> b[i];
    }

    cout << "배열 a에 b의 역순을 복사\n";
    ary_rcopy(a, b, num);

    for(int i = 0; i < num; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    delete [] a;
    delete [] b;

    return 0;
}

void ary_rcopy(int a[], const int b[], int n)
{
    for(int i = 0; i < n; i++)
    {
        a[i] = b[n - i - 1];
    }
}
*/

// Q9
/*
random_device rd;              
mt19937 gen(rd());              

void shuffle(int a[], int n);
void swap(int &, int &);

int main()
{
    int num;
    cout << "요소 개수 : ";
    cin >> num;

    int * a = new int[num];
    for(int i = 0; i < num; i++)
    {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }

    cout << "배열의 모든 요소의 순서를 뒤섞은 후\n";
    shuffle(a, num);

    for(int i = 0; i < num; i++)
    {
        cout << a[i] << " ";
    }

    delete [] a;
    return 0;
}

void shuffle(int a[], int n)
{
    for(int i = n - 1; i > 0; i--)
    {
        uniform_int_distribution<> dist(0, i);	
        int random = dist(gen);		
        
        swap(a[i], a[random]);
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
*/

// Q10
/*
const int mdays[][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                         {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
// 윤년인가 ?
int isleap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayof_year(int y, int m, int d)
{
    m--;
    while(m > 0)
    {
        d += mdays[isleap(y)][m--];
    }

    return d;
}

int main()
{
    int retry;

    do{
        int year, month, day;
        cout << "년 : "; cin >> year;
        cout << "월 : "; cin >> month;
        cout << "일 : "; cin >> day;
        cout << year << "의 " << dayof_year(year, month, day) << "일 째입니다.\n";

        cout << "다시 할까요? (1 ··· 예 / 0 ··· 아니오) : ";
        cin >> retry;
    }while(retry == 1);

    return 0;
}
*/

// Q11
/*
const int VMAX = 21;

struct PhysCheck
{
    char name[20];          // 이름
    int height;             // 키
    double vision;          // 시력
};

double ave_height(const PhysCheck * dat, int n)
{
    double sum = 0;
    for(int i = 0; i < n; i++)
        sum += dat[i].height;
    return sum / n;
}

void dist_vision(const PhysCheck * dat, int n, int dist[])
{
    for(int i = 0; i < VMAX; i++)
        dist[i] = 0;

    for(int i = 0; i < n; i++)
    {
        if(dat[i].vision >= 0.0 && dat[i].vision <= VMAX/10.0)
        {
            dist[(int)(dat[i].vision * 10)]++;
        }
    }
}

int main()
{
    cout<<fixed;
    cout.precision(1);

    const int nx = 7;
    int vdist[VMAX];

    PhysCheck pc[nx] = {{"박현규", 162, 0.3}, {"함진아", 173, 0.3}, {"최윤미", 175, 2.0}, {"홍연의", 171, 1.5},
                     {"이수진", 168, 0.4}, {"김영준", 174, 1.2}, {"박용규", 169, 0.8}};

    cout << "■ □ ■ 신체검사표 ■ □ ■\n";
    cout << "이름      키      시력\n";
    cout << "-------------------\n";
    
    for(int i = 0; i < nx; i++)
    {
        cout << pc[i].name << "    " << pc[i].height << "     " << pc[i].vision << endl;
    }

    cout << "평균 키 : " << ave_height(pc, nx) << "cm\n";

    dist_vision(pc, nx, vdist);

    cout << "시력 분포\n";

    for(int i = 0; i < VMAX; i++)
    {
        cout << i / 10.0 << " ~ : ";
        for(int j = 0; j < vdist[i]; j++)
            cout << "*"; 
        cout << "\n";
    }


    return 0;
}
*/

// Q12
/*
const int mdays[][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                         {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
struct Date
{
    int y;
    int m;      // 월 (1 ~ 12)
    int d;      // 월 (1 ~ 31)
};

int isleap(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

Date Dateof(int y, int m, int d)
{
    Date date;

    date.y = y;
    date.m = m;
    date.d = d;

    return date;
}

Date After(Date x, int n)
{
    x.d += n;
    while(x.d > mdays[isleap(x.y)][x.m - 1])
    {
        x.d -= mdays[isleap(x.y)][x.m - 1];
        x.m++;
    
        if(x.m > 12) 
        {
            x.m = 12;
            x.y++;
        }
    }

    return x;
}

Date Before(Date x, int n)
{
    x.d -= n;

    while(x.d < 1)
    {
        x.m --;
        
        if(x.m < 1) 
        {
            x.m = 12;
            x.y--;
        }

        x.d += mdays[isleap(x.y)][x.m - 1];
    }

    return x;
}

int main()
{
    Date date = Dateof(2025, 07, 24);
    cout << date.y << "년 " << date.m << "월 " << date.d << "일 입니다.\n";

    int n = 100;
    Date after = After(date, n);
    cout << "지금부터 " << n << "일 후는 ";
    cout << after.y << "년 " << after.m << "월 " << after.d << "일 입니다.\n";

    Date before = Before(date, n);
    cout << "지금부터 " << n << "일 전은 ";
    cout << before.y << "년 " << before.m << "월 " << before.d << "일 입니다.\n";

    return 0;
}
*/
