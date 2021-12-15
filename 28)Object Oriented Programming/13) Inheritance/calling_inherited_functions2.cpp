/*
Redefining the behavior.
Function overriding is redefinition of base class function in its derived class with same signature i.e return type and parameters.

If we had defined Derived::identify() in the Derived class, it would have been used instead.
So we can make functions work differently with our derived classes by redefining them in the derived class!
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
