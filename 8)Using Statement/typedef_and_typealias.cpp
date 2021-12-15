/*

This program does nothing.

Typedefs allow the programmer to create an alias for a data type, and use the aliased name instead of the actual type name.
By convention, typedef names are declared using a "_t" suffix.
A typedef does not define a new type. Rather, it is simply an alias (another name) for an existing type.
A typedef can be used interchangeably anywhere a regular type can be used.

C++11 introduced type alias.
Best practice: You should favor type aliases over typedefs is your compiler is C++11 compatible.

*/
#include<iostream>
int main(void) {
    /*Use of typedef. */
    typedef double distance_t; // define distance_t as an alias for type double

    // The following two statements are equivalent:
    double howFar;
    distance_t howFar; //This conveys more meaning as just double does not tells that it is distance. However distance_t makes it more clear that howFar is distance.

    /*Use of type alias. */
    using distance_t = double; // define distance_t as an alias for type double
    return 0;
}
