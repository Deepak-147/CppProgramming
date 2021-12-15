/*
 C++ provides a method for initializing class member variables (rather than assigning values to them after they are created)
 via a member initializer list.

 we could initialize variables in three ways: copy, direct, and via uniform initialization (C++11 only).

 int value1 = 1; // copy initialization
 double value2(2.2); // direct initialization
 char value3 {'c'} // uniform initialization

*/
#include<iostream>

class A {
    private:
        int m_value1;
        double m_value2;
        char m_value3;
        /*
        This will not work, as const needs to be initialized when they are declared.

        const float m_value4;
        */

    public:
        A() {
            /*These are some garbage values. */
            std::cout << m_value1 << "\n";
            std::cout << m_value2 << "\n";
            std::cout << m_value3 << "\n";

            /* These are all assignments, not initializations. */
            m_value1 = 1;
            m_value2 = 2.2;
            m_value3 = 'c';
            /*
            const variable cannot be assigned after declaration.
            m_value4 = 3.66;
            */

        }
};


class B {
    private:
        int m_value1;
        double m_value2;
        char m_value3;
        /*This works now. */
        const float m_value4;

    public:
        /*
        Directly initialize our member variables. Notice no semi-colon after member initializer list.
        Like this: m_value1(1), m_value2(2.2), m_value3('c'), m_value4(3.66)

        Or use uniform initialization if compiler is c++11 compatible.
        Like this: m_value1 {1}, m_value2 {2.2}, m_value3 {'c'}, m_value4 {3.66}
        */
        B() : m_value1 {1}, m_value2 {2.2}, m_value3 {'c'}, m_value4 {3.66}
        {
            /*No need of assignment here. These are not garbage now. */
            std::cout << m_value1 << "\n";
            std::cout << m_value2 << "\n";
            std::cout << m_value3 << "\n";
            std::cout << m_value4 << "\n";

        }
};


int main(void) {
    A a;
    B b;
}
/*

For class A, when an object is created the class's constructor is executed which creates variables m_value1, m_value2, and m_value3.
Then the body of the constructor is run, where the member data variables are assigned values.
To actually see that we printed the variables before assignment, and they printed some garbage values.

This is similar to the flow of the following code in non-object-oriented C++:

int m_value1;
double m_value2;
char m_value3;

m_value1 = 1;
m_value2 = 2.2;
m_value3 = 'c';

First the variables are created and then they are assigned the values. Otherwise they have garbage values.

For class B, when an object is created the constructor directly initialized the variables using member initializer list.

Best practice is to use member initializer lists to initialize your class member variables instead of assignment.

*/


