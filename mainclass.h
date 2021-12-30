#ifndef MAINCLASS_H
#define MAINCLASS_H

#include "scheduler.h"
#include <string>

class MainClass
{
public:
    MainClass();
    void showMainPatameters();
private:
    void resetParameters();
    void setParameters();
    void choices();

    Scheduler *_myScheduler;
    struct setOfParameter myParameters;

};

#endif // MAINCLASS_H
