#ifndef Q3_GOLF_H_
#define Q3_GOLF_H_

// Q3
    
class Golf
{
private:
    static const int Len = 40;
    char fullname[Len];
    int handicap;
public:
    Golf();
    Golf(const char * name, int hc);
    void SetGolf();
    void Handicap(int hc);
    void ShowGolf() const;
};

#endif
