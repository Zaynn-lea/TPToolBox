
#ifndef __PRETTY_CMD__

#define __PRETTY_CMD__


#include <assert.h>
#include <stdio.h>
#include <string.h>

/*
++----------------++
||  Pretty Print  ||
++----------------++
*/

void WhiteLinePrint(int iNbrOfLines);

void LinePrint(int iLength, char c);

void BoxPrint(char str[]);

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

void PrintArraydChar  (char   * cArray, int iLength);

void PrintArraydInt   (int    * dArray, int iLength);

void PrintArraydFLoat (float  * dArray, int iLength);

void PrintArraydDouble(double * dArray, int iLength);

#endif
