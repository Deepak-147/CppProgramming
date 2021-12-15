/*
Concept of NULL pointer.
Besides memory addresses, there is one additional value that a pointer can hold: a null value.
A null value is a special value that means the pointer is not pointing at anything.
A pointer holding a null value is called a null pointer.
*/
#include<iostream>
int main(void) {
    /*ptr1 is a null pointer. */
    int *ptr1 {0};
    /*ptr2 is uninitialized. */
    int *ptr2;
    /*ptr2 is now a null pointer. */
    ptr2 = 0;
    /*Using special preprocessor macro called NULL that is #defined as the value 0. */
    int *ptr3 {NULL};
    /*With C++11, use nullptr to initialize your pointers to a null value. */
    int *ptr4 {nullptr};


    /*Pointers convert to boolean false if they are null, and boolean true if they are non-null. */
    if(ptr1)
        std::cout << "\n Pointer is not-null. ";
    else
        std::cout << "\n Pointer is null. ";

    /*Best practice: Initialize your pointers to a null value if you are not giving them another value. */


    return 0;
}
