/*
Since we can put function declarations inside header files in order to use those functions in multiple files or even
multiple projects. Classes are no different. Class definitions can be put in header files in order to facilitate reuse
in multiple files or multiple projects. Traditionally, the class definition is put in a header file of the same name as
the class, and the member functions defined outside of the class are put in a .cpp file of the same name as the class.

So we have our main file named as file2.cpp
Header file as Date.h
and the function definitions in Date.cpp file.
Be sure to keep both Date.cpp and file2.cpp file marked as both compile and link.
*/

#include <iostream>
#include "Date.h"

int main(void) {
    Date date(2018, 8, 2);
    std::cout << date.getDay() << "\n";
    std::cout << date.getMonth() << "\n";
    std::cout << date.getYear() << "\n\n";

    return 0;
}
