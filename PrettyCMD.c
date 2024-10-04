
/*
Module to make organising and displaying results or object in the command prompt easier and prettier in C

Part of my toolbox library for the programing classes and maybe to help debug the mini projects

----------------------------------------------------------------

made by :
    Gely Leandre : https://github.com/Zaynn-lea

the :
    04 / 10 / 2024
*/

#include "PrettyCMD.h"


/*
++----------------++
||  Pretty Print  ||
++----------------++
*/

void WhiteLinePrint(int iNbrOfLines)
{
    /*
    Prints a bunch of white lines in the command prompt
    For exemple, to space things out

    iNbrOfLines is a positive integer
    */
    
    assert( iNbrOfLines >= 0 );

    int i;
    
    for (i = 0; i < iNbrOfLines; ++i)
        printf("\n");
}


void LinePrint(int iLength, char c)
{
    /*
    Prints iLength times the character c in the command line

    iLength is a positive integer
    c is a single character
    */

    assert( iLength >= 0 );

    int i;
    
    for (i = 0; i < iLength; ++i)
        printf("%c", c);
}


void BoxPrint(char *str)
{
    /*
    Display a boxed text in the command line as follows :
    +-------+
    |  str  |
    +-------+

    str is a pointer to a char (a string)
    */

    size_t iStrLength = strlen(str);

    // Displaying the Box : top line :
    printf("+");
    LinePrint(iStrLength + 4, '-');
    printf("+\n");

    // Middle line, with the text :
    printf("|  %s  |\n", str);

    // Bottom line :
    printf("+");
    LinePrint(iStrLength + 4, '-');
    printf("+\n");
}


/*
++-----------------++
||  Usefull Print  ||
++-----------------++
*/