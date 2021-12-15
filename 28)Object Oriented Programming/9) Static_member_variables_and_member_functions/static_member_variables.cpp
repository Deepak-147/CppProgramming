#include<iostream>

class A {
    public:
        int m_value1 = 1;
        /*
        Static members belongs to the class itself, not to the objects of the class.
        So static members exist even if no objects of the class have been instantiated.
        */
        static int m_value2;
};

/*
Static members can be accessed directly, without creating the objects, using the class name and the scope resolution operator(::).
This is preferred method of defining a static member outside the class, in the global scope.
If no value is provided C++ initializes it to 0.

It will work even if m_value2 is declared private, since definitions are not subject to access control.
*/
int A::m_value2 = 1;

int main(void) {
    /*
    When we instantiate a class object, each object gets its own copy of all normal member variables.
    But static member variables are shared by all objects of the class.
    */
    A a;
    A b;

    std::cout << a.m_value1 << '\n';
    std::cout << a.m_value2 << '\n';

    std::cout << b.m_value1 << '\n';
    std::cout << b.m_value2 << '\n';

    /*This modifies object a's own copy of value1 variable. */
    a.m_value1 = 2;

    std::cout << a.m_value1 << '\n';
    std::cout << a.m_value2 << '\n';

    std::cout << b.m_value1 << '\n';
    std::cout << b.m_value2 << '\n';

    /*This modifies shared copy of value2 variable. */
    a.m_value2 = 5;

    std::cout << a.m_value1 << '\n';
    std::cout << a.m_value2 << '\n';

    std::cout << b.m_value1 << '\n';
    std::cout << b.m_value2 << '\n';

    return 0;
}
