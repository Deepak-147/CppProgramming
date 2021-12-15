/*
When C++ constructs derived objects, it does so in phases.
First, the most-base class (at the top of the inheritance tree) is constructed first.
Then each child class is constructed in order, until the most-child class (at the bottom of the inheritance tree) is constructed last.
*/
#include<iostream>
class A {
    public:
        A() {
            std::cout << "A" << "\n";
        }
};

class B: public A {
    public:
        B() {
            std::cout << "B" << "\n";
        }
};

class C: public B {
    public:
        C() {
            std::cout << "C" << "\n";
        }
};

class D: public C {
    public:
        D() {
            std::cout << "D" << "\n";
        }
};

int main(void) {
    std::cout << "Constructing A: " << "\n";
    A a;

    std::cout << "Constructing B: " << "\n";
    B b;

    std::cout << "Constructing C: " << "\n";
    C c;

    std::cout << "Constructing D: " << "\n";
    D d;

    return 0;
}

