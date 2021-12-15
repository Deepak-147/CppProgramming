/*
A variable with external linkage is called an external variable. Variables with external linkage
can be used both in the file they are defined in, as well as in other files.
*/

#include<iostream>

/*Forward declaration for g_x -- g_x can be used beyond this point in this file */
extern int g_x;

int main(void) {
    std::cout << "Value of the variable in other file: " << g_x;
    return 0;
}

