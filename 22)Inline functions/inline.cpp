/*
Functions makes your code easier to read and understand.
Functions provide type checking to ensure function call arguments match the function parameters. Macros don't do this.
One major downside of functions is that every time a function is called, there is a certain amount of performance overhead that occurs.
Code written in-place is significantly faster.
For small functions, the overhead of function call is often more than the time needed to actually execute the functions code.

This is where Inline functions comes. When the compiler compiles your code, all inline functions are expanded in-place -- that is,
the function call is replaced with a copy of the contents of the function itself, which removes the function call overhead!.
The downside is that because the inline function is expanded in-place for every function call, this can make your compiled
code quite a bit larger, especially if the inline function is long and/or there are many calls to the inline function.
*/
#include<iostream>
int min(int x, int y) {
    return x > y ? y : x;
}
/*Inline function. */
inline max(int x, int y) {
    return x > y ? x : y;
}
int main(void) {
    /*This program calls function min() twice, incurring the function call overhead penalty twice. */
    std::cout << min(5, 6) << "\n";
    std::cout << min(54, 12) << "\n";

    /*This will execute quite a bit faster, at the cost of the compiled code being slightly larger.*/
    std::cout << max(5, 6) << "\n";
    std::cout << max(54, 12) << "\n";

    return 0;
}
