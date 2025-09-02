#ifndef CLASSIC01_H_
#define CLASSIC01_H_

class Cd                    // CD 디스크
{
private:
    char performers[50];
    char label[20];
    int selections;         // 수록 곡목 수
    double playtime;        // 분 단위의 연주 시간
public:
    Cd(const char * s1, const char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
    char song[50];
public:
    Classic( const char * s, const char * s1, const char * s2, int n, double x);
    Classic(const Classic & c);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    Classic & operator=(const Classic & c);
}; 


#endif
