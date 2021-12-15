/*
Normal variables: which hold values directly.
Pointers : which holds address of another value or NULL.
Reference variables: which acts as an alias to another object or value.
*/
#include<iostream>
int main(void) {
    /*References to non-const values. */

    /*Normal variable. */
    int value1 = 6;

    /*Reference variable. It must be initialized when created. Unlike pointers, which can hold a null value, there is no such thing as a null reference.*/
    int &ref = value1;

    value1++;
    std::cout << value1 << "\n";
    std::cout << ref << "\n";

    ref++;
    std::cout << value1 << "\n";
    std::cout << ref << "\n";

    /*Both ref and value1 are same. */
    std::cout << &value1 << "\n";
    std::cout << &ref << "\n";

    /*
    References to non-const values can only be initialized with non-const l-values. As this will defeat the purpose of const, because if it is allowed the reference will be able to modify the const value.
    They can not be initialized with const l-values or r-values.

    int x = 5;
    int &ref1 = x; // okay, x is an non-const l-value

    const int y = 7;
    int &ref2 = y; // not okay, y is a const l-value

    int &ref3 = 6; // not okay, 6 is an r-value
    */


    /*References to const values. */

    /*
    Unlike references to non-const values, which can only be initialized with non-const l-values,
    references to const values can be initialized with non-const l-value, const l-values, and r-values.
    */
    int x = 5;
    const int &ref1 = x; // okay, x is a non-const l-value

    const int y = 7;
    const int &ref2 = y; // okay, y is a const l-value

    const int &ref3 = 6; // okay, 6 is an r-value

    return 0;
}
