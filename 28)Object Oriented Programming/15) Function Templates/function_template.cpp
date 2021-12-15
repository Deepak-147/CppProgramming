/*
Function template.
A template is a model that serves as a pattern for creating similar objects.

In C++, function templates are functions that serve as a pattern for creating other similar functions.
The basic idea behind function templates is to create a function without having to specify the exact type(s) of
some or all of the variables. Instead, we define the function using placeholder types, called template type parameters.
*/

#include<iostream>
/*This is the template parameter declaration. */
template <typename T>
T findMax(T x, T y) {
    return (x > y) ? x : y;
}

int main(void) {
    std::cout << "Max number is: " << findMax(4, 5) << "\n";
    std::cout << "Max number is: " << findMax(8.4, 2.1) << "\n";
    std::cout << "Max number is: " << findMax('c', 'd') << "\n";
    return 0;
}
