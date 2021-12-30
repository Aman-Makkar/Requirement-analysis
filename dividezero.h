#ifndef DIVIDEZERO_H
#define DIVIDEZERO_H

#include <exception>
#include <string>

class DivideZero : public std::exception
{
private:
    std::string s;

public:

    DivideZero(std::string a);
    virtual const char *what() const noexcept override;
};
#endif // DIVIDEZERO_H
