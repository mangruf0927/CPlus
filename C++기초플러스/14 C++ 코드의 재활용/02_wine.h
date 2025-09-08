#ifndef WINE02_H_
#define WINE02_H_

#include <string>
#include <valarray>

// Pair 클래스
template<class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();

    const T1 & first() const {return a;}
    const T2 & second() const {return b;}
    
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
    Pair() { }
};

template<class T1, class T2>
T1 & Pair<T1, T2>::first()
{
    return a;
}

template<class T1, class T2>
T2 & Pair<T1, T2>::second()
{
    return b;
}

// Wine 클래스
class Wine : private std::string, private Pair<std::valarray<int>, std::valarray<int>>
{
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;

public:
    Wine() : std::string("null"), PairArray(ArrayInt(0), ArrayInt(0)) { }
    Wine(const std::string & s, int y, const int yr[], const int bot[]) : std::string(s), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)) { }
    Wine(const std::string & s, int y) : std::string(s), PairArray(ArrayInt(y), ArrayInt(y)) { }

    void GetBottles();
    void Show() const;
    
    std::string & Label();
    const std::string & Label() const;

    int Sum() const;
};

#endif


