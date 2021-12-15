/*
Function pointers are similar to pointers, except that instead of pointing to variables, they point to functions!.
Much like variables, functions live at an assigned address in memory.
When a function is called (via the () operator), execution jumps to the address of the function being called.
*/
#include<iostream>
int func() {
    return 5;
}
int main(void) {
    /*Prints address where func() is stored. */
    std::cout << reinterpret_cast<void*>(func) << "\n";
    std::cout << func();
    return 0;
}
