/*
A copy constructor is a special type of constructor used to create a new object as a copy of an existing object.
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

int main(void) {
    /*Direct initialization. It calls A(int ) constructor. */
    A a(90);
    std::cout << a.getA() << "\n";

    /*Copy constructor. */
    A b(a);
    std::cout << b.getA() << "\n";
    return 0;
}
