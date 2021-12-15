/*
Deleting a derived class object using a pointer to a base class that has a non-virtual destructor results in undefined behavior.
To correct this situation, the base class should be defined with a virtual destructor.
*/

#include <iostream>
class Base {
    public:
        /*It is not virtual. */
        ~Base()  {
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
        /*It is not virtual. */
        ~Derived() {
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
