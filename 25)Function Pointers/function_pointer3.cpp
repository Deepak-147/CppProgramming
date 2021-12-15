/*
Callback functions.
Functions used as arguments to another function are sometimes called callback functions.
If a reference of a function is passed to another function as an argument to call it, then it will be called as a callback function.

*/

#include<iostream>

void func2(void (*p)()) {
    p();
}
void func1() {
    std::cout << "HELLO WORLD!";
}

int main(void) {
    void (*p)();
    p = &func1;
    func2(p);
    return 0;
}
