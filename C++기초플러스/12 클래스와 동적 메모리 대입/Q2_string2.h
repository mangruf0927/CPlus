#ifndef STRING2_H_
#define STRING2_H_

#include <iostream>

using std::ostream;
using std::istream;

class String
{
private:
    char * str;                         // 문자열을 지시하는 포인터
    int len;                            // 문자열의 길이
    static int num_strings;             // 객체의 수
    static const int CINLIM = 80;       // cin 입력 한계
public: 
    String();                           // 디폴트 생성자
    String(const char * s);             // 생성자
    String(const String & st);          // 복사 생성자
    ~String();                          // 파괴자
    int length() const {return len;}

    String & operator=(const String &st);
    String & operator=(const char * s);
    String & operator+(const String &st);
    String & operator+(const char * s);
    char & operator[](int index);
    const char & operator[](int index) const;

    friend bool operator<(const String & st1, const String & st2);
    friend bool operator>(const String & st1, const String & st2);
    friend bool operator==(const String & st1, const String & st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
    friend String operator+(const char * s, const String & st);

    static int HowMany();
    void stringlow();
    void stringup();
    int has(char s);
};

#endif
