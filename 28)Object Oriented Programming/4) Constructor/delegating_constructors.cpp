/*
Starting with C++11, constructors are now allowed to call other constructors of the same class.
This process is called delegating constructors (or constructor chaining).
*/
#include<iostream>

/*Without constructor delegation. */
class A {
    int x, y, z;

    public:
        A() {
            x = 0;
            y = 0;
            z = 0;
        }

        A(int value) {
            /*The below two lines are redundant. */
            x = 0;
            y = 0;

            /*
            Only initialize z by passing an argument, while all the other arguments are initialized the same way they were,
            as in the previous constructor.
            */
            z = value;
        }
        void show() {
            std::cout << x << '\n';
            std::cout << y << '\n';
            std::cout << z << '\n';
        }
};

/*Without constructor delegation, but using separate function. */
class B {
    int x, y, z;
    void init() {
        x = 0;
        y = 0;
    }

    public:
        B() {
            init();
            z = 0;
        }
        B(int value) {
            init();
            z = value;
        }
        void show() {
            std::cout << x << '\n';
            std::cout << y << '\n';
            std::cout << z << '\n';
        }
};

class C {
    int x, y, z;

    public:
        C() {
            x = 0;
            y = 0;
            z = 0;
        }
        /*
        Use of constructor delegation. To have one constructor call another, call a constructor by placing it in the initializer list of other constructors.
        A constructor that delegates to another constructor is not allowed to do any member initialization itself. So your constructors can delegate or initialize, but not both.
        */
        C(int value) : C() {
            z = value;
        }
        void show() {
            std::cout << x << '\n';
            std::cout << y << '\n';
            std::cout << z << '\n';
        }
};


/*With constructor delegation . */
int main() {
    A a(3);
    a.show();

    B b(5);
    b.show();

    C c(7);
    c.show();

    return 0;
}
