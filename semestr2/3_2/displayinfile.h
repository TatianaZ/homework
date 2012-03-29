#ifndef DISPLAYINFILE_H
#define DISPLAYINFILE_H
#include "displaymas.h"
#include <stdio.h>

class DisplayInFile : public Display
{
public:
    DisplayInFile();
    ~DisplayInFile();
    void display();
};

#endif // DISPLAYINFILE_H
