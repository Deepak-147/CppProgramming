/*
Overflow and underflow causes loss of information(that is, the bits gets lost)
*/
#include <iostream>
int main() {
    std::cout << "------Overflow and underflow on unsigned variables------" << std::endl;

    /*Overflow */
    std::cout << "\n\n-----Overflow example----" << std::endl;
    unsigned short x = 65535; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << std::endl;
    x = x + 1; // 65536 is out of our range -- we get overflow because x can't hold 17 bits
    std::cout << "x is now: " << x << std::endl;

    /*Underflow */
    std::cout << "\n\n-----Underflow example----" << std::endl;
    x = 0; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << x << std::endl;
    x = x - 1;
    std::cout << "x is now: " << x << std::endl;

    std::cout << std::endl;
    std::cout << "------Overflow and underflow on signed variables------" << std::endl;

    /*Overflow */
    std::cout << "\n\n-----Overflow example----" << std::endl;
    short y = 32767; // largest 16-bit signed value possible
    std::cout << "y was: " << y << std::endl;
    y = y + 1; // 65536 is out of our range -- we get overflow because x can't hold 17 bits
    std::cout << "y is now: " << y << std::endl;

    /*Underflow */
    std::cout << "\n\n-----Underflow example----" << std::endl;
    y = -32768; // smallest 2-byte signed value possible
    std::cout << "y was: " << y << std::endl;
    y = y - 1;
    std::cout << "y is now: " << y << std::endl;

    return 0;
}
