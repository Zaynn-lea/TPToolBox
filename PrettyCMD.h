
#ifndef __PRETTY_CMD__

#define __PRETTY_CMD__


#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/*
++----------------++
||  Pretty Print  ||
++----------------++
*/

void WhiteLinePrint(int iNbrOfLines);

void LinePrint(int iLength, char c);

void BoxPrint(char * str);


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

void PrintArrayChar  (char   * cArray, int iLength);

void PrintArrayInt   (int    * dArray, int iLength);

void PrintArrayFLoat (float  * dArray, int iLength);

void PrintArrayDouble(double * dArray, int iLength);

void PrintArrayBool  (bool   * dArray, int iLength);

void PrintArrayString(char  ** dArray, int iLength);


#endif
