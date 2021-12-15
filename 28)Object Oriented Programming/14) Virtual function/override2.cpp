
/*
override specifier

There may be situations when a programmer makes a mistake while overriding a function.
So, to keep track of such an error, C++11 has come up with the keyword override.
It will make the compiler to check the base class to see if there is a virtual function
with this exact signature. And if there is not, the compiler will show an error.

In short, it serves the following functions. It helps to check if:

1) There is a method with the same name in the parent class.
2) The method in the parent class is declared as "virtual" which means it was intended to be rewritten.
3) The method in the parent class has the same signature as the method in the subclass.

*/

#include <iostream>
class Base {
    public:
        /*programmer wants to override this function. */
        virtual void func() {
            std::cout << "I am in base" << "\n";
        }
};

class Derived : public Base {
    public:
        /*
        programmer made a mistake in type signature. So this is a separate function. But we used override keyword, so compiler will throw error.
        Otherwise without this it will compile and we will not get what we intent to do.
        */
        virtual void func(int a) override{
            std::cout << "I am in derived class" << "\n";
        }
};

int main() {
    Base b;
    Derived d;
    std::cout << "Compiled successfully!" << "\n";
    return 0;
}

/*Best practice is to apply the override specifier to every intended override function you write. */
