/*
Adding to existing functionality.

Sometimes we don't want to completely replace a base class function, but instead want to add additional functionality to it.
It is possible to have our derived function call the base version of the function of the same name (in order to reuse code)
and then add additional functionality to it.
*/

#include<iostream>
class Base {
    protected:
        int m_value;
    public:
        Base(int value)
            : m_value(value) {
        }
        void identify() {
            std::cout << "I am a Base\n";
        }
};

class Derived: public Base {
    public:
        Derived(int value)
            : Base(value) {
        }
        /*We have redefined identify() in derived class. */
        void identify() {
            /*call Base::identify() first. */
            Base::identify();
            std::cout << "I am a Derived\n";
        }
};

int main(void) {
    Base base(5);
    base.identify();

    Derived derived(7);
    derived.identify();

    return 0;
}

