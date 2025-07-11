#include <iostream>
#include <cctype>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

// 1
/*
int main()
{   
    char ch;

    cout << "문자를 입력하세요 (@ 입력 시 종료) : ";
    
    cin.get(ch); // 입력한 모든 문자를 읽기 위해
    
    while (ch != '@')
    {
        if(isupper(ch))
        {
            ch = tolower(ch);
        }
        else if(islower(ch))
        {
            ch = toupper(ch);
        }
        else if(isdigit(ch))
        {
            cin.get(ch);
            continue;
        }

        cout << ch;
        cin.get(ch);
    }

    return 0;
}
*/

// 2 
/*
const int Max = 10;
int main()
{   
    double donation[Max], sum = 0.0;
    int i = 0, count = 0;

    cout << "기부금을 작성해주세요 : \n";
    while(i < Max && cin >> donation[i])
    {
        sum += donation[i];
        i++;
    }

    double average = i > 0 ? sum / i : 0;

    for(int j = 0; j < i; j++)
    {
        if(donation[j] > average) count++;
    }

    cout << "기부금들의 평균은 " << average << "이고 평균보다 큰 기부금은 " << count << "개 들어있다.\n";

    return 0;
}
*/

// 3
/*
int main()
{   
    char ch;

    cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)\n";
    cout << "c) camera\tp)pianist\n";
    cout << "t) tree\t\tg)game\n";

    cin >> ch;
    while(ch != 'q')
    {
        switch (ch)
        {
        case 'c':
            cout << "찰칵! 이 순간을 영원히 남겨볼까요?\n";
            break;
        case 'p':
            cout << "건반 위를 누비는 손끝에서 음악이 피어납니다.\n";
            break;
        case 't':
            cout << "단풍나무는 잎이 별처럼 생겼습니다.\n";
            break;
        case 'g':
            cout << "한 판만 한다는 말, 믿으세요?\n";
            break;
        default:
            cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q) :";
            break;
        }
        cin >> ch;
    }
    
    return 0;
}
*/

// 4
/*
const int strSize = 80;

void RegisterMember();
int LoadInfo();
void PrintMember(int num);

struct bop
{
    char fullname[strSize];     // 실명
    char title[strSize];        // 직함
    char bopname[strSize];      // BOP 아이디
    int preference;             // 0 = fullname, 1 = title, 2 = bopname
};

bop bopList[30];

int main()
{   
    cout << "Benevolent Order of Programmers\n";
    cout << "a. 회원 등록\tb. 실명 열람\n";
    cout << "c. 직함 열람\td.BOP 아이디로 열람\n";
    cout << "e.회원이 지정한 것으로 열람\tq.종료\n";


    char ch;
    while(ch != 'q')
    {
        cin.clear();
        cout << "원하는 것을 선택하십시오 : ";
        cin >> ch;

        switch (ch)
        {
        case 'a':
            RegisterMember();
            break;
        case 'b':
            PrintMember(0);
            break;
        case 'c':
            PrintMember(1);
            break;    
        case 'd':
            PrintMember(2);
            break;
        case 'e':
            PrintMember(3);
            break;
        }
    }

    cout << "프로그램을 종료합니다.\n";
    
    return 0;
}

void RegisterMember()
{
    ofstream outFile;
    bop BOP;
    outFile.open("Benevolent.txt", ios::app);   // ios::app 파일 이어쓰기

    cout << "실명을 입력 : ";
    cin.getline(BOP.fullname, strSize);
    cout << "직함을 입력 : ";
    cin.getline(BOP.title, strSize);
    cout << "BOP 아이디를 입력 : ";
    cin.getline(BOP.bopname, strSize);
    cout << "회원 지정 열람 방식 입력 (0. 실명, 1. 직함, 2. BOP아이디) : ";
    cin >> BOP.preference;
    cin.ignore();

    outFile << BOP.fullname << " " << BOP.title << " " << BOP.bopname << " " << BOP.preference << endl;
    
    outFile.close();
}

int LoadInfo()
{   
    ifstream inFile;
    inFile.open("Benevolent.txt");
    if(!inFile.is_open())
    {
        cout << "파일을 열 수 없습니다.\n";
    }

    int count = 0;
    
    while(inFile.good())
    {
        inFile >> bopList[count].fullname;
        inFile >> bopList[count].title;
        inFile >> bopList[count].bopname;
        inFile >> bopList[count].preference;

        count++;
    }

    if(inFile.eof()) cout << "파일 끝 도달\n";

    inFile.close();
    
    return count - 1; // 마지막 한 번의 실패 입력까지 count 될 수 있으므로
}

void PrintMember(int pref)
{
    int memberCount = LoadInfo();

    switch (pref)
    {
    case 0 :
        for(int i = 0; i < memberCount; i++)
        {
            cout << bopList[i].fullname << endl;
        }
        break;
    case 1 :
        for(int i = 0; i < memberCount; i++)
        {
            cout << bopList[i].title << endl;
        }
        break;
    case 2 :
        for(int i = 0; i < memberCount; i++)
        {
            cout << bopList[i].bopname << endl;
        }
        break;
    case 3 :
        for(int i = 0; i < memberCount; i++)
        {
            if(bopList[i].preference == 0) cout << bopList[i].fullname << endl;
            if(bopList[i].preference == 1) cout << bopList[i].title << endl;
            if(bopList[i].preference == 2) cout << bopList[i].bopname << endl;
        }
        break;
    }
}
*/

// 5
/*
int main()
{   
    int tvarp = 1;  // 화폐 단위
    double rate;

    cout << "소득을 입력하세요 : ";
    while (tvarp > 0 && cin >> tvarp)
    {
        if(tvarp <= 5000) rate = 0;
        else if(tvarp <= 15000) rate = (tvarp - 5000) * 0.1;
        else if(tvarp <= 35000) rate = 10000 * 0.1 + (tvarp - 15000) * 0.15;
        else rate = 10000 * 0.1 + 20000 * 0.15 + (tvarp - 35000) * 0.2;

        cout << "소득 : " << tvarp << ", 소득세 : " << rate << endl;
        cout << "소득을 입력하세요 : ";
    }

    cout << "종료 \n";
    
    return 0;
}
*/

// 6
/*
struct donation
{
    string name;
    double money;
};

int main()
{   
    int num;

    cout << "기부할 사람은 몇 사람인가요 ? : ";
    cin >> num;

    donation* Donation = new donation[num];
    
    for(int i = 0; i < num; i++)
    {
        cin.ignore();

        cout << "기부자 이름 입력 : ";
        getline(cin, Donation[i].name);
        cout << "기부 금액 입력 : ";
        cin >> Donation[i].money;
    }

    if(num == 0) cout << "기부자가 없습니다.\n";
    else
    {
        for(int i = 0; i < num; i ++)
        {
            if(Donation[i].money >= 10000)
                cout << "\"고액 기부자\" : ";
            else
                cout << "\"소액 기부자\" : ";
        
            cout << Donation[i].name << ", 기부 금액 : " << Donation[i].money << endl;
        }
    }

    delete [] Donation;

    return 0;
}
*/

// 7
/*
bool isVowel(char c);

int main()
{   
    string input;
    char first;
    int vowels = 0, consonants = 0, etc = 0;
    
    cout << "단어를 입력하시오 (끝내려면 q) : \n";
    
    while(true)
    {
        cin >> input;
        if(input == "q") break;
        
        first = input[0];

        if(isalpha(first))
        {
            if(isVowel(first)) vowels++;
            else consonants++;
        }
        else
        {
            etc++;
        }
    }

    cout << "모음으로 시작하는 단어 수 : " << vowels << endl;
    cout << "자음으로 시작하는 단어 수 : " << consonants << endl;
    cout << "기타 : " << etc << endl;

    return 0;
}

bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;
    else return false;
}
*/

// 8
/*
int main()
{   
    ifstream inFile;
    inFile.open("Text.txt");
    
    if(!inFile.is_open())
    {   
        cout << "파일을 열 수 없음.";
        exit(EXIT_FAILURE);
    }

    int count = 0;
    char ch;

    while (inFile.get(ch)) 
    {
        if (!isspace(ch)) count++; 
    }

    if(inFile.eof()) cout << "파일끝\n";
    else if(inFile.fail()) cout << "데이터 불일치\n";
    else cout << "이유 모르게 종료 .. \n";

    cout << "총 문자 수 : " << count << endl;

    inFile.close();
    return 0;
}
*/
