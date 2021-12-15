/*
Operator overloading using member function.
*/
#include<iostream>
class A {
    private:
        int m_value;
    public:
        A(int value) {
            m_value = value;
        }
        /*
        add A+A and return A type.
        Notice here only one argument. The left parameter(i.e A &a) is removed, because that parameter now becomes the implicit *this object.
        */
        A operator+(A &b);

        int getA() {
            return m_value;
        }
};

/*This is a member function. */
A A::operator+(A &b) {
    /*use A's constructor and operator+(). */
    return A(m_value + b.m_value);
}

int main(void) {
    A a(20);
    A b(30);
    /*a+b now evaluates to a.operator+(b). */
    A c = a + b;
    std::cout << c.getA() << "\n";
    return 0;
}
