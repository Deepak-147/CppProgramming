#include <iostream>

int main(void) {
    /*initialize a C-style string. */
    char myName[] = "Alex";
    std::cout << myName << "\n";

    /*C-style string symbolic constant using pointers. */
    const char *mynewName = "Alexa";
    std::cout << mynewName << "\n";

    int a[] = {5,6,7,8,9};
    /*Non char pointer is printed as address. */
    std::cout << a << "\n";

    char c = 'Q';
    /*char pointer will print the string being pointed to. It assumes your intention is to print the string. */
    std::cout << &c;

    return 0;
}
