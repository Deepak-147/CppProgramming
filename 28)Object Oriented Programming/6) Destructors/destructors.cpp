/*
A destructor is another special kind of class member function that is executed when an object of that class is destroyed.
Whereas constructors are designed to initialize a class, destructors are designed to help clean up.

The destructor must have the same name as the class, preceded by a tilde (~).
The destructor can not take arguments.
The destructor has no return type.
Only one destructor may exist per class, as there is no way to overload destructors since they can not be differentiated
from each other based on arguments.

A destructor function is called automatically when the object goes out of scope:
1) the function ends
2) the program ends
3) a block containing local variables ends
4) a delete operator is called

*/
#include<iostream>

class A {
    private:
        int *m_array;
        int m_length;

    public:
        /*Constructor. */
        A(int length)  {
            m_array = new int[length];
            m_length = length;
        }

        /*Destructor. */
        ~A() {
            /*Dynamically delete the array we allocated earlier. */
            delete[] m_array ;
        }

        void setValue(int index, int value) {
            m_array[index] = value;
        }
        int getValue(int index) {
            return m_array[index];
        }
};

int main(void) {
	A a(10);
	for(int count=0; count<10; count++)
		a.setValue(count, count+1);

	std::cout << "The value of element 5 is: " << a.getValue(5);
	return 0;
}
/*a is destroyed here, so the ~A() destructor function is called here. */
