#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <set>
#include <cctype>
#include <list>
#include <ctime>

using namespace std;

// 01
bool palindrome(string & s)
{
    for(int i = 0; i < s.size()/2; i++)
        if(s[i] != s[s.size() - i - 1]) return false;
    return true;
}

// 02
bool palindrome2(string & s)
{
    auto last = remove_if(s.begin(), s.end(), [](unsigned char c){ return !isalpha(c);});
    s.erase(last, s.end());

    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){return tolower(c);});

    for(int i = 0; i < s.size()/2; i++)
    {
        if(s[i] != s[s.size() - i - 1]) 
            return false;
    }
    return true;
}

// 04
int reduce(long ar[], int n)
{
    if(n <= 0) return 0;

    sort(ar, ar + n);
    long * last = unique(ar, ar + n);
    return last - ar;
}

// 05
template <typename T>
int reduceT(T ar[], int n)
{
    if(n <= 0) return 0;
    
    sort(ar, ar + n);
    T * last = unique(ar, ar + n);
    return last - ar;
}

// 07
vector<int> Lotto(int n1, int n2)
{
    vector<int> number;

    for(int i = 1; i <= n1; i++)
        number.push_back(i);

    random_device rd;
    mt19937 g(rd());

    shuffle(number.begin(), number.end(), g);
    number.erase(number.begin() + 6, number.end());

    return number;
}

void ShowInt(int v) 
{ 
    cout << v << " "; 
}

// 08
void ShowStr(string s) { cout << s << " "; }


int main()
{
    // 01 - 02
    /*
    string str;
    cout << "단어를 입력하세요 : ";
    cin >> str;
    // getline(cin, str);

    cout << str << "은 회문이 ";
    if(palindrome(str)) cout << "맞습니다.\n";      
    else cout << "아닙니다.\n";
    */

    // 04
    /*
    long arr[5] = { 10, 20, 10, 30, 20};
    int n = reduce(arr, 5);
    cout << n << endl;
    */

    // 05
    /*
    int arr[7] = { 10, 20, 30, 20, 10, 20, 50};
    int n = reduceT(arr, 7);
    cout << n << endl;
    */

    // 07
    /*
    vector<int> winners;
    winners = Lotto(45, 6);
    for_each(winners.begin(), winners.end(), ShowInt);
    */

    // 08
    /*
    multiset<string> mat = {"이재현", "구자욱", "김영웅", "류지혁", "원태인"};
    multiset<string> pat = {"구자욱", "디아즈", "김지찬", "김성윤", "이재현", "박승규"};

    cout << "Mat 친구 : ";
    for_each(mat.begin(), mat.end(), ShowStr);
    cout << endl;

    cout << "Pat 친구 : ";
    for_each(pat.begin(), pat.end(), ShowStr);
    cout << endl;

    set<string> all;
    cout << "Mat + Pat 친구 : ";
    set_union(mat.begin(), mat.end(), pat.begin(), pat.end(), insert_iterator<set<string>>(all, all.begin()));
    for_each(all.begin(), all.end(), ShowStr);
    */

    // 09
    /*
    const int N = 10000000;
    vector<int> vi0(N);

    srand(time(0));
    for(int i = 0; i < N; i++)
        vi0[i] = rand();

    vector<int> vi(vi0.begin(), vi0.end());
    list<int> li(vi0.begin(), vi0.end());

    clock_t vstart = clock();
    sort(vi.begin(), vi.end());
    clock_t vend = clock();
    double vec_res = (double)(vend - vstart) / CLOCKS_PER_SEC;

    clock_t lstart = clock();
    li.sort();
    clock_t lend = clock();
    double list_res = (double)(lend - lstart) / CLOCKS_PER_SEC;

    cout << "vector 정렬 시간 : " << vec_res << ", list 정렬 시간 : " << list_res << endl;

    clock_t start = clock();
    li.assign(vi0.begin(), vi0.end());
    vi.assign(li.begin(), li.end());
    sort(vi.begin(), vi.end());
    li.assign(vi.begin(), vi.end());
    clock_t end = clock();
    double res = (double)(end - start) / CLOCKS_PER_SEC;
    cout << res << endl;
    */
   
    return 0;
}
   
