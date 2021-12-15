/*
override specifier

There may be situations when a programmer makes a mistake while overriding a function.
So, to keep track of such an error, C++11 has come up with the keyword override.
It will make the compiler to check the base class to see if there is a virtual function
with this exact signature. And if there is not, the compiler will show an error.
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
        /*programmer made a mistake in type signature. So this is a separate function. */
        virtual void func(int a) {
            std::cout << "I am in derived class" << "\n";
        }
};


int main() {
    Base b;
    Derived d;
    std::cout << "Compiled successfully!" << "\n";
    return 0;
}

/*
Here the user intended to override the function func() in the derived class but did a silly mistake and redefined the
function with different signature. Which was not detected by the compiler. However, the program is not actually what the
user wanted. So, to get rid of such silly mistake to be in safe side, override keyword can be used.
*/
