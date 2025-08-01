#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
private:
    char name[20];
    int CI;
public:
    Plorg();
    Plorg(const char* n);
    void ResetCI(int index);
    void ShowPlorg() const;
};

#endif
