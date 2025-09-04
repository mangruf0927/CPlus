#ifndef DMAABC_H_
#define DMAABC_H_

#include <iostream>

class dmaABC
{
public:
    virtual ~dmaABC() {}
    virtual void View() const = 0;    
};

class baseDMA : public dmaABC
{
private:
    char * label;
    int rating;
public:
    baseDMA(const char * l = "null", int r = 0);
    baseDMA(const baseDMA & rs);
    ~baseDMA();
    void View() const override;
    baseDMA & operator=(const baseDMA & rs);
};

class lacksDMA : public dmaABC
{
private:
    enum {COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank");
    void View() const override;
};

class hasDMA : public dmaABC
{
private:
    char * style;
public:
    hasDMA(const char * s = "none");
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    hasDMA & operator=(const hasDMA & rs);
    void View() const override;
};

#endif
