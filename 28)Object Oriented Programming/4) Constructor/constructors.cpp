/*
A constructor is a special kind of class member function that is automatically called when an object of that class is instantiated.
Constructors are typically used to initialize member variables of the class to appropriate default or user-provided values, or to do any setup steps necessary for the class to be used.

Constructors must have the same name as the class and they do not have any return type(not even void).
*/

#include<iostream>
class Foo {
    public:
        int m_x;
        int m_y;

        void display() {
            std::cout << "value1: " << m_x << "\n";
            std::cout << "value2: " << m_y << "\n";
        }
};

class Hoo {
    private:
        int m_a;
        float m_b;
    public:
        /*Default constructor: A constructor that takes no parameters. But it can also take parameters. It's role is to initialize to default initial values. */
        Hoo() {
            m_a = 1;
            m_b = 1.99;
        }

        /*Constructor with two parameters. */
        Hoo(int value1, float value2) {
            m_a = value1;
            m_b = value2;
        }

        void display() {
            std::cout << "value1: " << m_a << "\n";
            std::cout << "value2: " << m_b << "\n";
        }
};

class Too {
    private:
        int m_p;
        float m_q;
    public:
        /*Default constructor. Both parameters having a default value. */
        Too(int value1 = 1, float value2 = 3.14) {
            m_p = value1;
            m_q = value2;
        }

        void display() {
            std::cout << "value1: " << m_p << "\n";
            std::cout << "value2: " << m_q << "\n";
        }
};

class Moo {
    public:
        int m_d;
        int m_e;

        /*
        If your class has no other constructors, C++ will automatically generate a public default constructor for you. It is called an Implicit constructor.
        This implicit constructor allows us to create a Moo object with no parameters, but doesn't initialize any of the members .

        It will be like this:

        Moo() {

        }

        If your class has any other constructors, the implicitly generated constructor will not be provided.
        It is a good idea to provide at least one constructor for your class, even if it's an empty default constructor.
        */

        void display() {
            std::cout << "value1: " << m_d << "\n";
            std::cout << "value2: " << m_e << "\n";
        }
};

int main() {
    /*
    Since the members are public we can initialize the list in this way.
    But if the class has private members, then we cannot initialize the list in this way
    as we cannot access private members outside the class without public interface(or public functions).
    We have to use Constructors for this purpose.
    */

    /*Initialization list. */
    Foo foo1 = { 4, 5 };
    foo1.display();

    /*Uniform initialization (C++11). */
    Foo foo2 { 6, 7 };
    foo2.display();


    /*
    This will not work, as we cannot access private members directly.

    Hoo hoo1;
    hoo1.m_a = 10;
    hoo1.m_b = 20.45;

    */

    /*Uses default constructor. calls Hoo() constructor. */
    Hoo hoo2;
    hoo2.display();

    /*Direct initialization. calls Hoo(int, float) constructor. */
    Hoo hoo3(2, 9.76);
    hoo3.display();

    /*Uniform initialization (C++11). calls Hoo(int, float) constructor. */
    Hoo hoo4 {2, 3.12};
    hoo4.display();

    /*Initialization list. calls Hoo(int, float) constructor. */
    Hoo hoo5 = {2, 3.12};
    hoo5.display();


    /*will call Too(1, 3.14) */
    Too too1;
    too1.display();

    /*will call Too(2, 3.14) */
    Too too2 {2};
    too2.display();

    /*will call Too(6, 8.51) */
    Too too3 {6, 8.51};
    too3.display();

    Moo moo1;   //calls implicit constructor.
    moo1.display(); //Displays garbage values.

    return 0;
}

/*
Constructors actually serve two purpose:

The primary purpose is to initialize objects that have already been created.
The secondary purpose is to allow creation of an object.

Although the main purpose of a constructor is to initialize an object, whether the constructor actually does an
initialization is up to the programmer. It's perfectly valid to have a constructor that does no
initialization at all (the constructor still serves the purpose of allowing the object to be created,

*/
