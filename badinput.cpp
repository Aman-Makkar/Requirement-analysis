#include "badinput.h"
#include <string>
#include <iostream>

//BadInput to trigger if the expected input does not exist

//CONSTRUCTOR
BadInput::BadInput(std::string a) : s("Error! Bad input "+ a){}

//FUNCTION WHAT()
char const* BadInput::what() const noexcept // display a personalized message
{
    return s.c_str();
}
