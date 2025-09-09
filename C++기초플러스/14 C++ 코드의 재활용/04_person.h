#ifndef PERSON_H_
#define PERSON_H_

#include <string>

class Person               // 추상화 기초 클래스
{
private:
    std::string fname;
    std::string lname;
protected:
    virtual void Data() const;
public:
    Person() : fname("null"), lname("null") { }
    Person(const std::string & fn, const std::string & ln) : fname(fn), lname(ln) { }
    
    virtual ~Person() = 0;
    virtual void Show() const = 0; 
};

class Gunslinger : public virtual Person
{
private:
    double drawTime;
    int notch;
protected:
    void Data() const override;
public:
    Gunslinger() : Person(), drawTime(0), notch(0) { }
    Gunslinger(const std::string & fn, const std::string & ln, double t = 0.0, int n = 0)
        : Person(fn, ln), drawTime(t), notch(n) { }
    Gunslinger(const Person & p, double t = 0.0, int n = 0) : Person(p), drawTime(t), notch(n) { }
    
    void Show() const override;
    double Draw() const { return drawTime; }
};

class PokerPlayer : virtual public Person
{
private:
    int cardValue;
protected:
    void Data() const override;
public:
    PokerPlayer() : Person(), cardValue(0) { }
    PokerPlayer(const std::string & fn, const std::string & ln, int v = 0)
        : Person(fn, ln), cardValue(v) { }
    PokerPlayer(const Person & p, int v) : Person(p), cardValue(v) { }
    
    void Show() const override;
    int Draw();
};

class BadDude : public Gunslinger, public PokerPlayer
{
protected:
    void Data() const override;
public:
    BadDude() { }
    BadDude(const std::string & fn, const std::string & ln, double t = 0.0, int n = 0, int v = 0)
        : Person(fn, ln), Gunslinger(fn, ln, t, n), PokerPlayer(fn, ln, v) { }
    BadDude(const Person & p, double t = 0.0, int n = 0, int v = 0) : Person(p), Gunslinger(p, t, n), PokerPlayer(p, v) { }
    BadDude(const Gunslinger & g, double t = 0.0, int n = 0, int v = 0) : Person(g), Gunslinger(g, t, n), PokerPlayer(g, v) { }
    BadDude(const PokerPlayer & p, double t = 0.0, int n = 0, int v = 0) : Person(p), Gunslinger(p, t, n), PokerPlayer(p, v) { }

    void Show() const override;
    double Gdraw() const;
    int Cdraw();
};

#endif
