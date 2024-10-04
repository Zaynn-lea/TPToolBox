
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

/*
+--------------------+
|  Array Displaying  |
+--------------------+
*/


void PrintArrayChar(char * cArray, int iLength)
{
    /*
    Display the array of iLength characters in the command line as follow :
    
    [ cArray[0] cArray[1] ... cArray[iLength - 1] ]

    the elements are separated by tabulations

    cArray is a pointer to char (an array of characters)
    iLength is a positive integer
    */

    assert( iLength >= 0 );

    int i,
        i_max = iLength - 1;

    printf("[ ");

    for (i = 0; i < i_max; ++i)
        printf("%c\t", cArray[i]);
    
    printf("%c ]\n", cArray[i_max]);
}


void PrintArrayInt(int * iArray, int iLength)
{
    /*
    Display the array of iLength integers in the command line as follow :
    
    [ iArray[0] iArray[1] ... iArray[iLength - 1] ]

    the elements are separated by tabulations

    iArray is a pointer to int (an array of integers)
    iLength is a positive integer
    */

    assert( iLength >= 0 );

    int i,
        i_max = iLength - 1;

    printf("[ ");

    for (i = 0; i < i_max; ++i)
        printf("%d\t", iArray[i]);
    
    printf("%d ]\n", iArray[i_max]);
}


void PrintArrayFloat(float * fArray, int iLength)
{
    /*
    Display the array of iLength floats in the command line as follow :
    
    [ fArray[0] fArray[1] ... fArray[iLength - 1] ]

    the elements are separated by tabulations

    fArray is a pointer to float (an array of floats)
    iLength is a positive integer
    */

    assert( iLength >= 0 );

    int i,
        i_max = iLength - 1;

    printf("[ ");

    for (i = 0; i < i_max; ++i)
        printf("%f\t", fArray[i]);
    
    printf("%f ]\n", fArray[i_max]);
}


void PrintArrayDouble(double * dArray, int iLength)
{
    /*
    Display the array of iLength doubles in the command line as follow :
    
    [ dArray[0] dArray[1] ... dArray[iLength - 1] ]

    the elements are separated by tabulations

    dArray is a pointer to double (an array of doubles)
    iLength is a positive integer
    */

    assert( iLength >= 0 );

    int i,
        i_max = iLength - 1;

    printf("[ ");

    for (i = 0; i < i_max; ++i)
        printf("%lf\t", dArray[i]);
    
    printf("%lf ]\n", dArray[i_max]);
}


void PrintArrayBool(bool * bArray, int iLength)
{
    /*
    Display the array of iLength bools in the command line as follow :
    
    [ bArray[0] bArray[1] ... bArray[iLength - 1] ]

    the elements are either true or false separated by spaces

    bArray is a pointer to bool (stdbool) (an array of bools)
    iLength is a positive integer
    */

    assert( iLength >= 0 );

    int i;

    printf("[ ");

    for (i = 0; i < iLength; ++i)
    {
        if (bArray[i])
            printf("true ");

        else
            printf("false ");
    }
        
    printf("]\n");
}


void PrintArrayString(char ** sArray, int iLength)
{
    /*
    Display the array of iLength strings in the command line as follow :
    
    [ sArray[0] sArray[1] ... sArray[iLength - 1] ]

    the elements are separated by tabulations

    sArray is a pointer to a pointer to char (an array of strings)
    iLength is a positive integer
    */

    assert( iLength >= 0 );

    int i,
        i_max = iLength - 1;

    printf("[ ");

    for (i = 0; i < i_max; ++i)
        printf("%s\t", sArray[i]);
    
    printf("%s ]\n", sArray[i_max]);
}

