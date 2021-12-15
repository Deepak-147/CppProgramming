/*
This is an example of multi file program. Here the function add is defined in some other file.
Have Build property for both main.cpp and add.cpp files to have compile file and link file checked.
*/
#include <iostream>
/*Forward declaration using function prototype. */
int add(int, int);
int main(void) {
    std::cout << "The sum of 7 and 3 is: " << add(7, 3) << std::endl;
    return 0;
}
