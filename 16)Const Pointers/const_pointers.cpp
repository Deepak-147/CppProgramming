/*
This program does nothing.
*/
#include<iostream>
int main(void) {

    /*When both are non const. */
    int value1 = 6;
    int *p1 = &value1;
    *p1 = 66;//change the value


    /*When variable is const, but the pointer is non const. */
    const int value2 = 6;
    /*
    Compiler error: cannot convert const int* to int*
    int *p2 = &value2;
    */

    /*
    Not allowed.
    *p2 = 66;
    */


    /*When both const. */
    /*Pointer to const value. */
    const int value3 = 5;
    const int *p3 = &value3;
    /*
    Not allowed.
    *p3 = 66;
    */


    /*When variable is non const, but the pointer is const. */
    int value4 = 6;
    /*
    This will work, as a pointer to a constant variable treats the variable as constant when it is accessed through the pointer,
    regardless of whether the variable was initially defined as const or not.
    */
    const int *p4 = &value4;
    /*
    Not allowed.
    *p4 = 66;
    */


    /*
    Const pointers: Is a pointer whose value can not be changed after initialization.
    */
    int value5 = 6;
    /*
    To declare a const pointer, use the const keyword between the asterisk and the pointer name.
    Now p5 will always point to same address until it goes out of scope and is destroyed.
    */
    int *const p5 = &value5;
    *p5 = 66;



    /*
    Const pointers to const value: A const pointer to a const value can not be set to point to another address,
    nor can the value it is pointing to be changed through the pointer.
    */
    const int value6 = 6;
    const int *const p6 = &value6;

    return 0;
}
