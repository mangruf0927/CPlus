#include <iostream>

using namespace std;

// 1
/*
void ABC(int a, int b, int* sum, int *gop)
{
    *sum = a + b;
    *gop = a * b;
}

int main()
{
    int a, b, sum, gop;
    cin >> a >> b;

    ABC(a, b, &sum, &gop);

    cout << sum << " " << gop << endl;

    return 0;
}
*/

// 2
/*
char arr[3][3] = {{'A', 'D', 'F'}, {'Q', 'W', 'E'}, {'Z', 'X', 'C'}};

void Find(char c, int* x, int* y)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] == c) 
            {
                *x = i;
                *y = j;
                return;
            }
        }
    }
}

int main()
{
    int x, y;
    char target;
    cin >> target;

    Find(target, &x, &y);

    cout << x << "," << y << endl;

    return 0;
}
*/

// 3
/*
int stringLen(char* str)
{
    int length = 0;

    for(int i = 0; str[i]!= '\0'; i++)
    {
        length++;
    }

    return length;
}

int main()
{
    char str[256];
    cin >> str;

    cout << stringLen(str) << "글자" << endl;

    return 0;
}
*/

// 4
/*
void KFC(int* uCount, int* lCount)
{
    char arr[11];
    cin >> arr;

    for(int i = 0; arr[i] != '\0'; i++)
    {
        if('a' <= arr[i] && arr[i] <= 'z') *lCount += 1;
        else if('A' <= arr[i] && arr[i] <= 'Z') (*uCount)++; 
    }
}

int main()
{
    int upper = 0, lower = 0;
    KFC(&upper, &lower);

    cout << "대문자" << upper << "개\n소문자" << lower << "개" << endl;

    return 0;
}
*/

// 5
/*
int arr[2][6] = {{4, 5, 6, 1, 3, 1}, {2, 1, 3, 6, 3, 6}};

void Input(int* a, int* b, int* c)
{
    cin >> *a >> *b >> *c;
}

void Process(int a, int b, int c, int* aCnt, int* bCnt, int* cCnt)
{
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(arr[i][j] == a) (*aCnt)++;
            if(arr[i][j] == b) (*bCnt)++;
            if(arr[i][j] == c) *cCnt += 1;
        }
    }
}

void Output(int a, int b, int c, int aCnt, int bCnt, int cCnt)
{
    cout << a << "=" << aCnt << "개" << endl; 
    cout << b << "=" << bCnt << "개" << endl; 
    cout << c << "=" << cCnt << "개" << endl;    
}

int main()
{
    int a = 0, b = 0, c = 0;
    int aCnt = 0, bCnt = 0, cCnt = 0;

    Input(&a, &b, &c);
    Process(a, b, c, &aCnt, &bCnt, &cCnt);
    Output(a, b, c, aCnt, bCnt, cCnt);
    
    return 0;
}
*/

// 6
/*
int main()
{
    char arr[2][6] = {{'4', '5', '7', '1', '3', '2'}, {'D', 'F', 'Q', 'W', 'G', 'Z'}};

    int target;
    cin >> target;

    for(int i = 0; i < 6; i++)
    {
        if(arr[0][i] == target + '0') 
        {
            cout << arr[1][i] << endl;
            break;
        }
    }
    return 0;
}
*/

// 7
/*
void FindABC(char str[], char str2[], int* a, int* b, int* c)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'A') (*a) ++;
        else if(str[i] == 'B') (*b) ++;
        else if(str[i] == 'C') (*c) ++;
    }

    for(int i = 0; str2[i] != '\0'; i++)
    {
        if(str2[i] == 'A') (*a) ++;
        else if(str2[i] == 'B') (*b) ++;
        else if(str2[i] == 'C') (*c) ++;
    }
}

int main()
{
    char str[256], str2[256];
    cin >> str >> str2;

    int aCnt = 0, bCnt = 0, cCnt = 0;

    FindABC(str, str2, &aCnt, &bCnt, &cCnt);
    
    cout << "A:" << aCnt << "\nB:" << bCnt << "\nC:" << cCnt << endl;

    return 0;
}
*/

// 8
/*
struct PROFILE
{
    char name[256];
    int age;
    int weight;
};


int main()
{
    PROFILE int1, int2;
    
    cin >> int1.name >> int1.age >> int1.weight;
    cin >> int2.name >> int2.age >> int2.weight;

    cout << int1.name << " & " << int2.name;
    cout << "\n평균" << (int1.age + int2.age) / 2 << "세";
    cout << "\n평균" << (int1.weight + int2.weight) / 2 << "KG" << endl; 

    return 0;
}
*/

// 9
/*
char arr[3][3] = {{'D', 'A', 'S'}, {'Q', 'W', 'V'}, {'R', 'T', 'Y'}};

void Find(int y1, int x1, int y2, int x2, char* c1, char* c2)
{
    *c1 = arr[y1][x1];
    *c2 = arr[y2][x2];
}

int main()
{
    int y1, x1, y2, x2;
    cin >> y1 >> x1 >> y2 >> x2;

    char c1, c2;
    
    Find(y1, x1, y2, x2, &c1, &c2);

    cout << c1 << " " << c2 << endl;

    return 0;
}
*/

// 10
/*
int main()
{
    int arr[7] = {'4', '2', '5', '1', '6', '7', '3'};

    char ch1, ch2;
    cin >> ch1 >> ch2;

    int aIndex = ch1 - 'A';
    int bIndex = ch2 - 'A';

    int sum = 0;

    if(aIndex > bIndex)
    {
        int temp = aIndex;
        aIndex = bIndex;
        bIndex = temp;
    }
    

    for(int i = aIndex + 1; i < bIndex; i++)
    {
        sum += (arr[i] - '0');
    }

    cout << sum << endl;

    return 0;
}
*/

// 11
/*
int main()
{
    int A[5], B[5], C[5];

    for(int i = 0; i < 5; i++) cin >> A[i];
    for(int i = 0; i < 5; i++) cin >> B[i];
    for(int i = 0; i < 5; i++) cin >> C[i];

    for(int i = 0; i < 5; i++)
    {
        cout << (A[i] * B[i]) + C[i] << " ";
    }

    return 0;
}
*/

// 12
/*
int main()
{
    int arr[4][4] = {{3, 4, 1, 6}, {3, 5, 3, 6}, {}, {5, 4, 6, 0}};

    for(int i = 0; i < 4; i++)
    {
        cin >> arr[2][i];
    }

    int max = INT_MIN;
    int min = INT_MAX;

    int maxX, maxY, minX, minY;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(max < arr[i][j])
            {
                max = arr[i][j];
                maxX = i;
                maxY = j;
            }
            
            if(min > arr[i][j]) 
            {
                min = arr[i][j];
                minX = i;
                minY = j;
            }
        }
    }

    cout << "MAX=" << max << "(" << maxX << "," << maxY << ")" << endl;
    cout << "MIN=" << min << "(" << minX << "," << minY << ")" << endl;

    return 0;
}
*/
