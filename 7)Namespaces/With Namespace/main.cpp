#include<iostream>
#include"header1.h"
#include"header2.h"

/*
Function in Global Namespace.
It multiplies.
*/
int func(int x, int y) {
    return x * y;
}

int main(void) {
    /*Uses func() definition inside Header1 Namespace. For addition purpose. */
    std::cout << "Addition result is: " << Header1::func(4, 7) << std::endl;

    /*Uses func() definition inside Header2 Namespace. For subtraction purpose. */
    std::cout << "Subtraction result is: " << Header2::func(4, 7) << std::endl;

    /*Uses func() definition inside Global Namespace. For Multiplication purpose. */
    std::cout << "Multiplication result is: " << ::func(4, 7) << std::endl;
    return 0;
}
