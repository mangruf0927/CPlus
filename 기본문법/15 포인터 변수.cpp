#include <iostream>

using namespace std;

// 1
/*
int main()
{
    int vect[7] = {3, 5, 1, 1, 2, 3, 2};
    
    int nums[4];
    for(int i = 0; i < 4; i++)
    {
        cin >> nums[i];
    }

    int counts[4] = {};
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(vect[i] == nums[j]) counts[j]++;
        }
    }

    for(int i = 0; i < 4; i++)
    {
        cout << nums[i] << "=" << counts[i] << "개\n";
    }

    return 0;
}
*/

// 2
/*
int main()
{
    int arr[6] = {10, 50, 40, 20, 30, 40};
    
    int nums[6];
    for(int i = 0; i < 6; i++)
    {
        cin >> nums[i];
    }

    int counts[6] = {};

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(nums[i] < arr[j]) counts[i]++;
        }
    }

    for(int i = 0; i < 6; i++)
    {
        cout << nums[i] << "=" << counts[i] << "개\n";
    }

    return 0;
}
*/

// 3
/*
void BubbleSort(char* arr, int length)
{
    for(int i = length - 1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    char str[2][6];
    cin >> str[0] >> str[1];

    char word[12];
    
    int length1 = 0, length2 = 0;
    for(int i = 0; i < 6; i++)
    {
        if(str[0][i] == '\0') 
        {
            length1 = i;
            break;
        }
    }
    
    for(int i = 0; i < 6; i++)
    {
        if(str[1][i] == '\0') 
        {
            length2 = i;
            break;
        }
    }

    // 버블 정렬
    BubbleSort(str[0], length1);
    BubbleSort(str[1], length2);
    
    for(int i = 0; i < length1; i++)
    {
        word[i] = str[0][i];
    }

    for(int i = length1; i < length1 + length2; i++)
    {
        word[i] = str[1][i - length1];
    }

    word[length1 + length2] = '\0';

    cout << word << endl;

    return 0;
}
*/

// 4
/*
int main()
{
    char str[2][7];
    cin >> str[0] >> str[1];

    int len1 = 0, len2 = 0, flag = 0;
    for(int i = 0; str[0][i] != '\0'; i++) len1++;
    for(int i = 0; str[1][i] != '\0'; i++) len2++;

    if(len1 != len2) flag = 1;
    else
    {
        for(int i = 0; i < len1; i++)
        {
            if(str[0][i] != str[1][i])
            {
                flag = 1;
                break;
            } 
        }
    }

    if(flag == 1) cout << "다름";
    else cout << "같음";
    
    return 0;
}
*/

// 5
/*
int main()
{
    int num = 0;
    while(num < 1000 || 9999 < num)
    {
        cout << "1000 ~ 9999 사이 숫자 입력" << endl;
        cin >> num; 
    }
    
    int nums[4], index = 3;
    while(num > 0)
    {
        nums[index] = num % 10;
        num /= 10;
        index--;
    }

    for(int i = 0; i < 4; i++)
    {
        cout << "숫자" << nums[i] << endl;
    }
    
    return 0;
}
*/

// 6
/*
int main()
{
    int scores[6] = {};
    for(int i = 0; i < 6; i++)
    {
        cin >> scores[i];
    }

    int flag = 0;
    for(int i = 0; i < 5; i++)
    {
        if(abs(scores[i] - scores[i+1]) >= 3)
        {
            flag = 1;
        }
    }

    if(flag == 1) cout << "재배치필요";
    else cout << "완벽한배치";

    return 0;
}
*/

// 7
/*
int main()
{
    char str[2][11];
    cin >> str[0] >> str[1];

    int len = 0;
    for(int i = 0; str[0][i] != '\0'; i++) len++;

    int flag = 0;

    for(int i = 0; i < len; i++)
    {
        if(str[0][i] != str[1][len - i - 1]) 
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0) cout << "거울문장" << endl;
    else cout << "거울문장아님" << endl;

    return 0;
}
*/

// 8
/*
int main()
{
    char str[4][7];
    cin >> str[0] >> str[1] >> str[2] >> str[3];

    int lengths[4] = {};

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; str[i][j] != '\0'; j++)
        {
            lengths[i]++;
        }
    }

    // 정렬
    for(int i = 3; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(lengths[j] > lengths[j + 1])
            {
                int temp = lengths[j];
                lengths[j] = lengths[j+1];
                lengths[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < 4; i++)
    {
        cout << lengths[i] << " ";
    }

    return 0;
}
*/

// 9
/*
int main()
{
    char str[11];
    cin >> str;

    int flag = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(i % 2 == 0)
        {
            if('a' > str[i] || str[i] > 'z')
            {
                flag = 1;
                break;
            }
        }
        else
        {
            if('A' > str[i] || str[i] > 'Z')
            {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 1) cout << "개구리문장";
    else cout << "일반문장";

    return 0;
}
*/

// 10
/*
int main()
{
    char name[7] = {'A', 'B', 'C', 'Z', 'E', 'T', 'Q'};
    
    char blackList[6];
    cin >> blackList;

    for(int i = 0; i < 5; i++)
    {
        int flag = 0;
        for(int j = 0; j < 7; j++)
        {
            if(blackList[i] == name[j])
            {
                flag = 1;
                break;  
            }
        }
        if(flag == 1) cout << blackList[i] << "=마을사람\n";
        else cout << blackList[i] << "=외부사람\n";
    }

    return 0;
}
*/

// 11
/*
int GetLength(char *str)
{
    int length = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}

int main()
{
    char str[5][11];
    
    for(int i = 0; i < 5; i++)
    {
        cin >> str[i];
    }

    int length[5] = {};

    int maxIdx = 0;
    for(int i = 0; i < 5; i++)
    {
        length[i] = GetLength(str[i]);
        if(length[maxIdx] < length[i]) maxIdx = i;
    }
    
    cout << str[maxIdx] << endl;

    return 0;
}
*/
