/*Recursive function program to display the first 13 Fibonacci numbers. */

#include <iostream>
int fibonacci(int number) {
    if (number == 0)
        return 0; // base case (termination condition)
    if (number == 1)
        return 1; // base case (termination condition)
    return fibonacci(number-1) + fibonacci(number-2);
}

int main(void) {
    for (int i=0; i<13; i++)
        std:: cout << fibonacci(i) << " ";

    return 0;
}
