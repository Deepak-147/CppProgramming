/*
User defined copy constructor.
*/
#include<iostream>

class A {
    private:
        int m_value;
    public:
        A(int value) {
            m_value = value;
        }
        A(const A &a) {
            m_value = a.m_value;
        }
        int getA() {
            return m_value;
        }
};

int main(void) {
    /*Direct initialization. It calls A(int ) constructor. */
    A a(90);
    std::cout << a.getA() << "\n";

    /*Implicit Copy constructor. */
    A b(a);
    std::cout << b.getA() << "\n";

    /*Explicit Copy constructor. */
    A c = a;
    std::cout << c.getA() << "\n";
    return 0;
}
