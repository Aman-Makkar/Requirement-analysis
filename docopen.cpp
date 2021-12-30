#include "docopen.h"
#include <string>
#include <iostream>

//DocOpen to signal if the document in which we write results is already open

//CONSTRUCTOR
DocOpen::DocOpen(std::string a) : s("Error! The document " + a + " is open. Please close it and debug the program again"){}

//FUNCTION WHAT()
char const* DocOpen::what() const noexcept // display a personalized message
{
    return s.c_str();
}
