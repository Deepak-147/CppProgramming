/*
A default parameter (also called an optional parameter or a default argument) is a function parameter that has a default value provided
to it. If the user does not supply a value for this parameter, the default value will be used. If the user does supply a value for the default parameter,
the user-supplied value is used instead of the default value.
*/
#include<iostream>

/*Forward declaration. Giving default values in function declaration. Here parameter y and z are default. */
void display(int x, int y = 20, int z = 30);

int main(void) {
    display(1, 2, 3);
    display(1, 2);
    display(1);
    return 0;
}

void display(int x, int y, int z) {
    std::cout << "Values: " << x << " " << y << " " << z << '\n';
}
