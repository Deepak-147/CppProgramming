#include<iostream>
int x(5);
int main(void) {
    /*This hides global x */
    int x = 7;

    /*Increment in the local x */
    x++;

    /*
    Using scope resolution operator we can use global variable.
    Decrement in the global x
    */
    ::x--;

    std::cout << "Local value: " << x << std::endl;
    std::cout << "Global value: " << ::x;
    return 0;
}
