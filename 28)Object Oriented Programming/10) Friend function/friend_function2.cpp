/*
A function can be a friend of more than one class at the same time.
*/
#include<iostream>

/*This is a class prototype that tells the compiler that we are going to define a class called A in the future. */
class A;

class B {
    private:
        int m_value1;
    public:
        B(int value) {
            m_value1 = value;
        }

        friend void display(B &b, A &a);
};

class A {
    private:
        int m_value2;
    public:
        A(int value) {
            m_value2 = value;
        }

        friend void display(B &b, A &a);
};


void display(B &b, A &a) {
    std::cout << "value1 is: "<< b.m_value1 << "\n";
    std::cout << "value2 is: "<< a.m_value2 << "\n";
}

int main(void) {
    A a(10);
    B b(20);
    display(b, a);
    return 0;
}
