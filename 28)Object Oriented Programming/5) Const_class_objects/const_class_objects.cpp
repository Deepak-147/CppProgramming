#include<iostream>

class A {
    public:
        int m_value;

        /*constructor. */
        A(): m_value(0) {

        }

        /*Non const member function. */
        void setValue(int value) {
            m_value = value;
        }

        /*Non const member function. */
        int getValue1() {
            return m_value ;
        }

        /*
        Const member function.
        Note the addition of const keyword after parameter list, but before function body.
        */
        int getValue2() const {
            return m_value ;
        }
};

int main(void) {
    /*calls default constructor. */
    const A a;
    /*
    Once a const class object has been initialized via constructor, any attempt to modify the member variables of the object is disallowed,
    as it would violate the const-ness of the object. This includes both changing member variables directly (if they are public), or calling member functions
    that set the value of member variables.
    */
    a.m_value = 5; // compiler error: violates const
    a.setValue(5); // compiler error: violates const

    /*
    This will not work even though getValue1() doesn't do anything to change a member variable!.
    But const class objects can only explicitly call const member function.

    std::cout << a.getValue1();
    */

    /*This will work. */
    std::cout << a.getValue2();

    return 0;
}

/*The best practice is to make any member function that does not modify the state of the class object const. */
