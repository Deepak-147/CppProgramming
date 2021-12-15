/*
Let's understand an analogy.

Your TV has a remote control that you can use to turn the TV on/off. It provides a simple interface for you to use(a button) to perform an action.
However how the device operates is hidden away from you. When you press the button on your remote control, you don't need to know what it's doing to communicate with your TV.
This separation of interface and implementation is extremely useful because it allows us to use objects without understanding how they work.

Encapsulation(or information hiding): Is the process of keeping the details about how an object is implemented hidden away from users of the object.
In this way, users are able to use the object without having to understand how it is implemented.
In C++, we implement encapsulation via access specifiers.
The word encapsulation is also sometimes used to refer to the packaging of data and functions that work on that data together.

All of the classes in the C++ standard library are encapsulated. Imagine how much more complicated C++ would be if you had to
understand how std::string, std::vector, or std::cout were implemented in order to use them!

*/

#include <iostream>
class Demo {
    private:
        int m_value;

    public:
        /*Setter function. */
        void setValue(int value) {
            m_value = value;
        }

        /*Getter function. */
        int getValue() {
            return m_value;
        }
};

int main(void) {
    Demo d;
    d.setValue(5);
    std::cout << d.getValue() << '\n';
}

/*
The variable m_value1 is private. This variable can be accessed and manipulated only using the functions getValue() and setValue() which are present inside the class.
Thus we can say that here, the variable m_value and the functions get() and set() are binded together which is nothing but encapsulation.
*/
