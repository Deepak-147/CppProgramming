/*
In C++, operators are implemented as functions. By using function overloading on the operator functions, you can define
your own versions of the operators that work with different data types (including classes that you have written).
Using function overloading to overload operators is called operator overloading.

There are three different ways to overload operators:
1) using friend function
2) using member function
3) using normal function

*/

/*Operator overloading using friend function. */
#include<iostream>
class A {
    private:
        int m_value;
    public:
        A(int value) {
            m_value = value;
        }
        /*add A+A and return A type.*/
        friend A operator+(A &a, A &b);

        int getA() {
            return m_value;
        }
};

/*This is a friend function. */
A operator+(A &a, A &b) {
    /*use A's constructor and operator+(). */
    return A(a.m_value + b.m_value);
}

int main(void) {
    A a(20);
    A b(30);
    A c = a + b;
    std::cout << c.getA() << "\n";
    return 0;
}
