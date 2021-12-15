/*
A variable's linkage determines whether multiple instances of an identifier refer to the same variable or not.
When a variable is declared as static, space for it gets allocated for the lifetime of the program.
Even if the function is called multiple times, space for the static variable is allocated only once and the value of
variable in the previous call gets carried through the next function call.

A variable with internal linkage is called an internal variable (or static variable). Variables with internal linkage
can be used anywhere within the file they are defined in, but can not be referenced outside the file they exist in.
*/

#include<iostream>
int func() {
    static int count = 0;
    count++;
    return count;
}

int main(void) {
    std::cout << func() << std::endl;
    std::cout << func() << std::endl;
    return 0;
}

