#ifndef UNKNOWTYPEJOB_H
#define UNKNOWTYPEJOB_H

#include <exception>
#include <string>

class unknowTypeJob : public std::exception
{
private:
    std::string s;

public:

    unknowTypeJob(std::string a);
    virtual const char *what() const noexcept override;
};

#endif // UNKNOWTYPEJOB_H
