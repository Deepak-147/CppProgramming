#include <iostream>
int main() {

    /*Initialize x with ASCII value of a. That is x = 97*/
    char x('a');

    /*Prints character value */
    std::cout << x << std::endl;

    /*Typecast to print ASCII value */
    std::cout << (int)x << std::endl;

    /*Initialize y with integer value 97 */
    char y(97);

    /*Prints character value */
    std::cout << y << std::endl;

    /*Typecast to print ASCII value */
    std::cout << (int)y << std::endl;

    return 0;
}

