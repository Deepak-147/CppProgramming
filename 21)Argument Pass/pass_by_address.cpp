/*
Argument pass by address involves passing the address of the argument variable rather than the argument variable itself.
Because the argument is an address, the function parameter must be a pointer.
*/
#include<iostream>

void modify(int *p) {
    *p = *p + 2;
}

/*const tells that display() will not modify the argument passed in. */
void display(const int *p) {
    /*
    Doing this will give error.
    *p = *p + 2;
    */
    std::cout << *p << "\n";
}

int main(void) {
    int a = 10;
    display(&a);
    modify(&a);
    display(&a);

    int *p = &a;
    modify(p);
    display(p);

    return 0;
}
