/*
final specifier

There may be cases where you don't want someone to be able to override a virtual function, or inherit from a class.
The final specifier can be used to tell the compiler to enforce this. If the user tries to override a function or
class that has been specified as final, the compiler will give a compile error.
*/
#include <iostream>

class Base {
    public:
        /*Final tells that this function cannot be overriden. */
        virtual void func() final {
            std::cout << "I am in base" << "\n";
        }
};

/*Final class tells that this class cannot be inherited. */
class Derived1 final : public Base {
    public:
        /*Since func() is final in Base class it cannot be overriden. So there will be compiler error. */
        virtual void func() override {
            std::cout << "I am in derived" << "\n";
        }
};

/*compile error: cannot inherit from final class. */
class Derived2 : public Derived1 {
    public:
        virtual void func() override {
            std::cout << "I am in derived" << "\n";
        }
};

int main(void) {
    Base b;
    Derived1 d1;
    Derived2 d2;
    return 0;
}
