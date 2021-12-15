/*
When a member function is called, how does C++ keep track of which object it was called on?

The "this" pointer is a hidden parameter implicitly added to any non-static member function.
Most of the time, you will not need to access it directly, but you can if needed.

*/


#include<iostream>

class A {
    private:
        int m_id;
    public:
        void setId(int value) {
            m_id = value;
        }
        void getId() {
            std::cout << m_id;
        }
};

int main(void) {
    A a;
    a.setId(10);
    a.getId();
    return 0;
}

/*
when a.setId(10); is called, C++ knows that function setID() should operate on object a, and that m_id actually refers to a.m_id.

Although the call to function setId(10); looks like it only has one argument, it actually has two!
When compiled, the compiler converts a.setId(10); into the following:
    setId(&a, 10);

Since the function call now has an added argument, the member function definition needs to be modified to accept (and use) this argument as a parameter.
Consequently, the setId() member function is converted be compiler into:
    void setId(A* const this, int id) {
        this->m_id = id;
    }

Thus when the compiler compiles a normal member function, it implicitly adds a new parameter to the function named "this".
The this pointer is a hidden const pointer that holds the address of the object the member function was called on.

Most of the time, you never need to explicitly reference the "this" pointer.
However, there are a few occasions where doing so can be useful:

1)If you have a constructor (or member function) that has a parameter with the same name as a member variable, you can disambiguate them by using "this".
    class A {
        private:
            int data;
        public:
            A(int data) {
                this->data = data;
            }
    }

2)It can sometimes be useful to have a class member function return the object it was working with as a return value.
The primary reason to do this is to allow a series of member functions to be "chained" together, so several member functions can
be called on the same object!

*/
