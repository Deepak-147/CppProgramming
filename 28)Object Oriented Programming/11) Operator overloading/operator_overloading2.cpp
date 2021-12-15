/*
Operator overloading using normal function. This lets us overload operator without having to modify class internals.
Prefer overloading operators as normal functions instead of friends if it's possible to do so without adding additional functions.
*/

#include<iostream>
class A {
    private:
        int m_value;
    public:
        A(int value) {
            m_value = value;
        }
        int getA() {
            return m_value;
        }
};

/*This is not a friend function nor a member function. It is just any other function. */
A operator+(A &a, A &b) {
    return A(a.getA() + b.getA());
}

int main(void) {
    A a(20);
    A b(30);
    A c = a+b;
    std::cout << c.getA() << "\n";
    return 0;
}

