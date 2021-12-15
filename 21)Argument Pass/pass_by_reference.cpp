/*
Argument pass by reference.
When an argument is passed by reference, a reference is created to the actual argument (which takes minimal time) and no copying of values takes place.
Any change will modify the variable itself.
*/
#include<iostream>
void change_value(int &a) {
    a = a * 2;
    std::cout << "value in function is: " << a << "\n";
}

/*When passing an argument by reference, always use a const references unless you need to change the value of the argument*/
void read_value(const int &b) {
    std::cout << "value is: " << b << "\n";
}
int main(void) {
    int a = 10;
    int b = 15;
    change_value(a);
    std::cout << "value in main is: " << a << "\n";

    /*
    What if we want to pass the variable by reference to avoid copying of values and also to make the variable to not modify.
    That is pass by reference and to make the variable read-only. This will be a performance improvement as passing an argument
    by reference should not always mean that we want to change the contents of the variable.
    To make this possible we pass by const reference.
    References allow the function to change the value of the argument, which is undesirable when we want an argument be read-only.
    If we know that a function should not change the value of an argument, but don’t want to pass by value, the best solution is to pass by const reference.
    */
    read_value(b);
    return 0;
}

