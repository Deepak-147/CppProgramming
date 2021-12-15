/*
Calling a base class function.

When a member function is called with a derived class object, the compiler first looks to see if that member exists in the
derived class. If not, it begins walking up the inheritance chain and checking whether the member has been defined in any of
the parent classes. It uses the first one it finds.
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
};

int main(void) {
    Base base(5);
    base.identify();

    Derived derived(7);
    derived.identify();

    return 0;
}
