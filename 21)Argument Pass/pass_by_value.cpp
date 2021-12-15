/*
Argument pass by value.
The argument’s value is copied into the value of the corresponding function parameter.
Copying structs and classes can incur a significant performance penalty, especially if the function is called many times.
Arguments are never changed by the function being called, which prevents side effects.
*/
#include<iostream>
void change_value(int a) {
    a = a * 2;
    std::cout << "value in function is: " << a << "\n";
}
int main(void) {
    int a = 10;
    change_value(a);
    std::cout << "value in main is: " << a << "\n";
    return 0;
}

