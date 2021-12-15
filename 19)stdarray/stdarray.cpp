/*
Introduced in C++11, std::array provides fixed array functionality that won’t decay when passed into a function.
std::array is defined in the array header, inside the std namespace.
*/

#include<iostream>
#include<array>
int main(void) {
    /*Declare an integer array with length 5. */
    std::array<int, 5> myArray = {9, 7, 5, 3, 1}; // Initialization list
    std::array<int, 5> myArray2 {9, 7, 5, 3, 1}; // Uniform initialization

    /*Accessing array element using subscript operator []. */
    std::cout << myArray[2] << "\n";
    /*
    std::cout << myArray[5];
    This does no bounds checking. If an invalid index is provided, bad things will probably happen.
    */

    /*Accessing array element using at(). */
    std::cout <<myArray.at(2) << "\n";
    /*
    std::cout << myArray.at(5);
    The at() function does bounds checking and raises an exception when index goes out of bounds.
    */

    /*Use of size() */
    std::cout << "length: " << myArray.size();

    /*
    Because std::array doesn’t decay to a pointer when passed to a function,
    the size() function will work even if you call it from within a function
    */

    return 0;
}

