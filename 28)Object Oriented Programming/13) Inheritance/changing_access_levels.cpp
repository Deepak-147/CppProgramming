/*
C++ gives us the ability to change an inherited member's access specifier in the derived class.
This is done by using a using declaration to identify the (scoped) base class member that is having
its access changed in the derived class, under the new access specifier.
*/

#include <iostream>
class Base {
    private:
        int m_value;
    public:
        Base(int value)
            : m_value(value){
        }
    protected:
        void printValue() {
            std::cout << m_value;
        }
};

class Derived: public Base {
    public:
        Derived(int value)
            : Base(value){
        }
        /*
        Base::printValue was inherited as protected, so the public has no access
        But we're changing it to public via a using declaration.
        */
        using Base::printValue; // note: no parenthesis here
};

int main(void)
{
    Derived derived(7);

    /*printValue is public in Derived, so this is okay. */
    derived.printValue();
    return 0;
}
