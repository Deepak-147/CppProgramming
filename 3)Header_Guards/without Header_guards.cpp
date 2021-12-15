/*
This example shows why header guards are used in header file in Creating_Header_Files.
In this example firstly the preprocessor includes contents of file math.h, which is the definition of getSquareSides().
Then it includes contents of geometry.h, which includes to include math.h, so again contents of math.h gets included, definition of getSquareSides() is included again.
Thus our main.cpp file ends up having getSquareSides() definition two times. And since there are duplicate definitions, hence there is a compile error.

How we will resolve the issue when geometry.h file needs getSquareSides(), and main.cpp needs both geometry.h and math.h.
This is where Header Guards comes into the picture.
    #ifndef SOME_UNIQUE_NAME_HERE
    #define SOME_UNIQUE_NAME_HERE

    // your declarations and definitions here

    #endif
*/
#include "math.h"
#include "geometry.h"

int main(void) {
    return 0;
}
