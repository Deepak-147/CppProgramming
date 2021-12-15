#include<iostream>

/*
int* p(int, int);  is a function p which takes two integers as arguments and return a pointer to integer.
int (*p)(int, int); is a pointer to a function which takes two integers as arguments and return an integer.
*/
int func1(int a) {
    a = a + 10;
    std::cout << a << "\n";
    return a;
}
int func2(int b) {
    b = b - 10;
    std::cout << b << "\n";
    return b;
}
int main(void) {

    /*
    p points to func1().
    Doing p = func1(); would actually assign the return value from a call to func1() to p. And will give compiler error.

    Simply you can do this.
    int (*p)(int );
    p = &func1;
    */
    int (*p)(int ) = func1;
    /*Prints address of func1() */
    std::cout << reinterpret_cast<void*>(func1) << "\n";

    /*Calling a function using a function pointer. Both Explicit and Implicit methods will produce same result. Choose the one which feels more natural to you.*/
    /*This will call func1(20) through p. This is Explicit Dereference. */
    (*p)(20);
    /*This will call func1(20) through p. This is implicit Dereference. */
    p(20);

    /*p now points to func2. */
    p = func2;

    /*Prints address of func2() */
    std::cout << reinterpret_cast<void*>(func2) << "\n";

    /*This will call func2(20) through p. This is Explicit Dereference. */
    (*p)(20);
    /*This will call func2(20) through p. This is implicit Dereference. */
    p(20);

    return 0;
}
