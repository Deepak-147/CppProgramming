/*Introduction to pointers */
#include<iostream>
int main(void) {
    int x = 5;
    std::cout << "Value of the variable is: " << x << "\n";
    /*Use of address-of(&) operator. */
    std::cout << "Address of the variable is: " << &x << "\n";
    /*Use of dereference(*) operator. */
    std::cout << "Value of the variable is: "<< *&x << "\n";
    /*A pointer is a variable that holds a memory address as its value. */

    /*
    An integer pointer or a pointer to an integer.
    Note that this asterisk is not a dereference. It is part of the pointer declaration syntax.
    Best practice: When declaring a pointer variable, put the asterisk next to the variable name.
    Ex: int *p;
    Best practice: When declaring a function, put the asterisk of a pointer return value next to the type.
    Ex: int* function();
    */

    int *ptr;
    /*Unless a value is assigned, a pointer will point to some garbage address by default.*/
    ptr = &x;
    std::cout << "Address of the variable is: " << ptr << "\n";
    std::cout << "Value of the variable is: "<< *ptr << "\n";
    /*
    The size of the pointer is always the same. This is because a pointer is just a memory address,
    and the number of bits needed to access a memory address on a given machine is always constant.
    */
    std::cout << "Size of the pointer is: "<< sizeof(ptr) << "\n";
    return 0;
}
