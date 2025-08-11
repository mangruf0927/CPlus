#include "Q2_string2.h"
#include <cstring>
#include <cctype>

using std::cout;
using std::cin;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String()
{
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}   

String::String(const char * s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String(const String & st)
{
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    num_strings++;
}

String::~String()
{
    --num_strings;
    delete [] str;
}

String & String::operator=(const String &st)
{
    if(this == & st) return *this;

    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);

    return *this;
}

String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);

    return *this;
}

String & String::operator+(const String &st)
{
    len = len + st.len;
    char * newStr = new char[len + 1];
    std::strcpy(newStr, str);
    std::strcat(newStr, st.str);
    
    delete [] str;
    str = newStr;

    return *this;
}

String & String::operator+(const char * s)
{
    len = len + std::strlen(s);
    char * newStr = new char[len + 1];
    std::strcpy(newStr, str);
    std::strcat(newStr, s);
    
    delete [] str;
    str = newStr;

    return *this;
}

char & String::operator[](int index)
{
    return str[index];
}

const char & String::operator[](int index) const
{
    return str[index];
}

bool operator<(const String & st1, const String & st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String & st1, const String & st2)
{
    return st2 < st1;
}

bool operator==(const String & st1, const String & st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}

istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if(is) st = temp;
    while(is && is.get() != '\n') continue;
    return is;
}

String operator+(const char * s, const String & st)
{
    String newStr;
    newStr.len = std::strlen(s) + st.len;
    newStr.str = new char[newStr.len + 1];
    std::strcpy(newStr.str, s);
    std::strcat(newStr.str, st.str);
    
    return newStr;
}

void String::stringlow()
{
    for(int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
    }
}

void String::stringup()
{
    for(int i = 0; i < len; i++)
    {
        str[i] = toupper(str[i]);
    }
}

int String::has(char s)
{
    int count = 0;
    for(int i = 0; i < len; i++)
    {
        if(str[i] == s) count++;
    }
    return count;
}
