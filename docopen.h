#ifndef DOCOPEN_H
#define DOCOPEN_H

#include <string>
#include <iostream>

class DocOpen: public std::exception
{
private:
    std::string s;

public:

    DocOpen(std::string a);
    virtual const char *what() const noexcept override;
};
#endif // DOCOPEN_H
