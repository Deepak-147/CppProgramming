/*
Command line arguments are optional string arguments that are passed by the operating system to the program when it is launched.
The program can then use them as input (or ignore them). Much like function parameters provide a way for a function to provide inputs to another function, command line
arguments provide a way for people or programs to provide inputs to a program.

In C::B(Code::Blocks), choose this from menu: Project -> Set program's arguments.

This program print the value of all the command line parameters.
*/

#include <iostream>
int main(int argc, char *argv[]) {
    std::cout << "There are " << argc << " arguments:\n";

    // Loop through each argument and print its number and value
    for (int count=0; count < argc; ++count)
        std::cout << count << " " << argv[count] << '\n';

    return 0;
}

/*
For this program i have set two arguments in Project menu. Under Set program's argument.
Even though i have set 2 arguments but the program produces output that 3 arguments were passed.
It is because argument 0 is the path and name of the current program being run. argument 1 and 2 in this case are the two command line parameters we passed in.
*/
