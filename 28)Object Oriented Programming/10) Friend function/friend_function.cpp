/*
A friend function is a function that can access the private members of a class as though it were a member of that class.
*/
#include<iostream>

class A {
    private:
        int m_value;
    public:
        A() {
            m_value = 0;
        }
        void add(int value) {
            m_value += value;
            std::cout << "value is: "<< m_value << "\n";
        };
        /*Make the reset() function a friend of this class. */
        friend void reset(A &a);
};

/*reset() is now a friend of the class A. */
void reset(A &a) {
    /*And can access the private data of class A. */
    a.m_value = 0;
    std::cout << "value is: "<< a.m_value << "\n";
}

int main(void) {
    A a;
    a.add(5);
    reset(a);
    return 0;
}
