
#include "PrettyCMD.h"


void WhiteLinePrint(int iNbrOfLines)
{
    int i;
    for (i = 0; i < iNbrOfLines; ++i)
        printf("\n");
}


void LinePrint(int iLength, char c)
{
    int i;
    for (i = 0; i < iLength; ++i)
        printf("%c", c);
}


void BoxPrint(char *str)
{
    size_t iStrLength = strlen(str);
    printf("%d\n", iStrLength);

    // Displaying the Box :
    printf("+");
    LinePrint(iStrLength + 4, '-');
    printf("+\n");

    printf("|  %s  |\n", str);

    printf("+");
    LinePrint(iStrLength + 4, '-');
    printf("+\n");
}
