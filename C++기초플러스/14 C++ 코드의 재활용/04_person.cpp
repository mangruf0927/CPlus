#include "04_person.h"
#include <iostream>
#include <ctime>

// Person
Person::~Person() { }

void Person::Data() const
{
    std::cout << "퍼스트 네임 : " << fname << ", 라스트 네임 : " << lname << std::endl;
}

// Gunslinger
void Gunslinger::Data() const
{
    std::cout << "총 빼는 데 걸리는 시간 : " << drawTime << "\n권총 총잡이에 새겨진 금 : " << notch << std::endl;
}

void Gunslinger::Show() const
{
    std::cout << "Gunslinger\n";
    Person::Data();
    Data();
}

// PokerPlayer
void PokerPlayer::Data() const
{
    std::cout << "카드 값 : " << cardValue << std::endl;
}

void PokerPlayer::Show() const
{
    std::cout << "PokerPlayer\n";
    Person::Data();
    Data();
}

int PokerPlayer::Draw()
{
    // srand(time(0));
    cardValue = rand() % 52 + 1;
    return cardValue;
}

// BadDude
void BadDude::Data() const
{
    Gunslinger::Data();
    PokerPlayer::Data();
}


void BadDude::Show() const
{
    std::cout << "BadDude\n";
    Person::Data();
    Data();
}

double BadDude::Gdraw() const
{
    return Gunslinger::Draw();
}

int BadDude::Cdraw()
{
    return PokerPlayer::Draw();
}
