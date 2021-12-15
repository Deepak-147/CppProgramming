/*
This example uses header guards to solve the problem faced in without Header_guards.cpp.
    #ifndef SOME_UNIQUE_NAME_HERE
    #define SOME_UNIQUE_NAME_HERE

    // your declarations and definitions here

    #endif

Here preprocessor includes contents of math_with_header_guard.h file. In that it checks if A is not defined,
then it defines A and then includes the definition for getSquareSides().
Next preprocessor includes contents of geometry_with_header_guard.h file. In that it checks if B is not defined,
then it defines B and then includes contents of math_with_header_guard.h file. In that it checks if A is not defined, but now it finds that
A is already defined. Thus it skips the contents. And duplicate copies of same function definition are not made.
*/
#include "math_with_header_guard.h"
#include "geometry_with_header_guard.h"

int main(void) {
    return 0;
}
