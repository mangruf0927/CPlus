#ifndef EXCMEAN02_H_
#define EXCMEAN02_H_

#include <stdexcept>
#include <string>

class bad_hmean : public std::logic_error
{
public:
    explicit bad_hmean(const std::string & s = "[hmean] 잘못된 매개변수 : a = -b\n") 
            : std::logic_error(s) { }
};


class bad_gmean : public std::logic_error
{
public:
    explicit bad_gmean(const std::string & s = "[gmean] 매개변수들은 >= 0이어야 한다\n")
            : std::logic_error(s) { }
};


#endif
