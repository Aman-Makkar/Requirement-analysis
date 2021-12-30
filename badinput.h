#ifndef BADINPUT_H
#define BADINPUT_H
#include <exception>
#include <string>

class BadInput : public std::exception
{
private:
    std::string s;

public:

    BadInput(std::string a);
    virtual const char *what() const noexcept override;
};

#endif // BADINPUT_H
