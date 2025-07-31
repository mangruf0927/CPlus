#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person
{
private:
    static const int LIMIT = 25;        // 성씨
    std::string lname;                  // 이름
    char fname[LIMIT];
public:
    Person() {lname = ""; fname[0] = '\0';};
    Person(const std::string & ln, const char * fn = "Heyyou");
    void Show() const;                  // 이름 성씨 
    void FormalShow() const;            // 성씨, 이름
};

#endif

