#include<iostream>

class A {
    private:
        static int m_value;
    public:
        /*Way 1. Normal function. */
        int getValue1() {
            return m_value;
        }
        /*Way 2: Static member function. */
        static int getValue2() {
            return m_value;
        }
};

/*Even though m_value is private, this is okay as definitions are not subject to access control.*/
int A::m_value = 1;

int main(void) {
    /*
    But how do we access A::m_value since it is private?.

    Way 1: Using normal member function.
    One way could be to create a public normal function, that access this private static member variable.
    Then instantiate an object of the class type to use the function.
    */
    A a;
    std::cout << a.getValue1() << "\n";

    /*Way 2: Using static member function.
    Make a static member function that access the private static member variable.
    Like static member variables, static member functions are not attached to any particular object.
    This lets us call this function directly by using the class name and the scope resolution operator(::), without instantiating the object.
    */
    std::cout << A::getValue2() << "\n";

    return 0;
}
