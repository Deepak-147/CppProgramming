/*
Making base class destructor virtual guarantees that the object of derived class is
destructed properly, i.e., both base class and derived class destructors are called.

Best practice: Whenever you are dealing with inheritance, you should make any explicit destructors virtual.
*/
#include <iostream>
class Base {
    public:
        /*Now it is virtual. */
        virtual ~Base()  {
            std::cout << "Calling ~Base()" << std::endl;
        }
};

class Derived: public Base {
    private:
        int* m_array;
    public:
        Derived(int length) {
            m_array = new int[length];
        }
        /*Now it is virtual. */
        virtual ~Derived() {
            std::cout << "Calling ~Derived()" << std::endl;
            delete[] m_array;
        }
};

int main(void) {
    Derived *derived = new Derived(5);
    Base *base = derived ;
    delete base;
    return 0;
}
