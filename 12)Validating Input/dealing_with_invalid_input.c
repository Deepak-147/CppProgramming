/*
When the user enters input in response to an extraction operation(>>), that data is placed in a buffer inside of std::cin.

When the extraction operator is used, the following procedure happens:

    1) If there is data already in the input buffer, that data is used for extraction.
    2) If the input buffer contains no data, the user is asked to input data for extraction (this is the case most of the time).
       When the user hits enter, a ‘\n’ character will be placed in the input buffer.
    3) operator >> extracts as much data from the input buffer as it can into the variable (ignoring any leading whitespace characters, such as spaces, tabs, or ‘\n’).
    4) Any data that can not be extracted is left in the input buffer for the next extraction.

*/
#include<iostream>

double getDouble() {
    /*
    This piece of code demonstrates the case when the extraction succeeds but with extraneous input.
    Example: when user inputs '5*7', when asked to enter a operand value.

    One more problem can occur when the extraction succeeds and there is no extraneous input. But the input is of not proper type.
    When the user enters ‘a’, that character is placed in the buffer.
    Then operator >> tries to extract ‘a’ to variable x, which is of type double. Since ‘a’ can’t be converted to a double, operator >> can’t do the extraction.
    Two things happen at this point: ‘a’ is left in the buffer, and std::cin goes into “failure mode”. Once in ‘failure mode’, future requests for input extraction will silently fail.
    */
    std::cout << "Enter a double value: ";
    double x;
    std::cin >> x;
    /*Has a previous extraction failed? */
    if (std::cin.fail()) {
        /*Yep, so let's handle the failure */

        /*put us back in 'normal' operation mode */
        std::cin.clear();
        /*and remove the bad input */
        std::cin.ignore(32767,'\n');
        std::cout << "Oops, that input is invalid.  Please try again.\n";
    }
    /*Otherwise if the extraction succeeded */
    else {
        /*
        clear (up to 32767) characters out of the buffer until a '\n' character is removed.
        So even if the user enters '5*7', only '5' is extracted and and the rest of the characters will be removed from the input buffer.
        */
        std::cin.ignore(32767, '\n');
        return x;
    }
}

char getOperator() {
    /*
    This piece of code demonstrates the case when the extraction succeeds but the input is meaningless.
    Example: when user inputs 'k', when asked to enter the operator.
    */

    /*Loop until user enters a valid input. */
    while(true) {
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char op;
    std::cin >> op;
    /*Check whether the user entered meaningful input */
    if (op == '+' || op == '-' || op == '*' || op == '/')
        return op;
    /*otherwise tell the user what went wrong */
    else
        std::cout << "Oops, that input is invalid.  Please try again.\n";
    }
}

void printResult(double x, char op, double y) {
    if (op == '+')
        std::cout << x << " + " << y << " is " << x + y << '\n';
    else if (op == '-')
        std::cout << x << " - " << y << " is " << x - y << '\n';
    else if (op == '*')
        std::cout << x << " * " << y << " is " << x * y << '\n';
    else if (op == '/')
        std::cout << x << " / " << y << " is " << x / y << '\n';
    /*Being robust means handling unexpected parameters as well, even though getOperator() guarantees op is valid in this particular program */
    else
        std::cout << "Something went wrong: printResult() got an invalid operator.";
}

int main() {
    double x = getDouble();
    char op = getOperator();
    double y = getDouble();

    printResult(x, op, y);

    return 0;
}
