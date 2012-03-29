#include "displayinfile.h"


DisplayInFile::DisplayInFile()
{
    mas = NULL;
    n = 0;
}
DisplayInFile::~DisplayInFile()
{
    delete mas;
}

void DisplayInFile::display()
{
    FILE *file;
    file = fopen( "file.txt", "w" );
    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%d ",mas[i]);
        fputs(" ", file);
    }
    fclose( file );
}
