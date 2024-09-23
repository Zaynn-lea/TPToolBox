
#include <stdio.h>
#include <string.h>


void WhiteLinePrint(int iNbrOfLines)
{
    int i;
    for (i = 0; i < iNbrOfLines; i++)
        printf("\n");
}


void LinePrint(int iLength, char c)
{
    int i;
    for (i = 0; i < iLength; i++)
        printf(&c);
}


void BoxPrint(char str[])
{
    int i;
    int iStrLength = sizeof(str) / sizeof(char);

    // Displaying the Box :
    printf("+");
    LinePrint(iStrLength + 4, '-');
    printf("+\n");

    printf("|  %s  |\n", str);

    printf("+");
    LinePrint(iStrLength + 4, '-');
    printf("+\n");
}
