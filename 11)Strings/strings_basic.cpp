/*
Because strings are commonly used in programs, most modern languages include a built-in string data type.
C++ includes one, not as part of the core language, but as part of the standard library.

To use strings in C++, we first need to #include the <string> header to bring in the declarations for std::string.
Once that is done, we can define variables of type std::string.

*/

#include <string>
#include <iostream>

int main() {

    std::cout << "\n\n Enter your first name: ";
    std::string myfirstName;
    /*
    Use std::getline() to input text.
    Read a full line of text into myfirstName.
    */
    std::getline(std::cin, myfirstName);
    std::cout << "\n Your first name is: " << myfirstName;

    std::cout << "\n\n Enter your last name: ";
    std::string mylastName;
    std::getline(std::cin, mylastName);
    std::cout << "\n Your last name is: " << mylastName;

    /*Appending strings. */
    std::string myfullName(myfirstName + " " + mylastName);
    std::cout << "\n\n Your full name is: " << myfullName;

    /*Length of string. */
    std::cout << "\n\n Your full name is of: " << myfullName.length() << " characters";
    /*If you want to use C functions from string.h library like strlen(), strcpy() etc. You should include<cstring> */

    return 0;
}
