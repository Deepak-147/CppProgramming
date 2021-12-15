/*
When we instantiate a derived class object why does it always use the default Base constructor?.
Fortunately, C++ gives us the ability to explicitly choose which Base class constructor will be called!
To do this, simply add a call to the base class Constructor in the initialization list of the derived class.
*/
#include<iostream>

class Base {
    private:
        int m_id;
    public:
        Base(int id=0)
            : m_id(id) {
        }
        int getId() {
            return m_id;
        }
};

class Derived: public Base {
    private:
        double m_cost;

    public:
        /*Call Base(int) constructor with value id!. */
        Derived(double cost=0.0, int id=0)
            : Base(id), m_cost(cost) {
        }
        double getCost() {
            return m_cost;
        }
};

int main(void) {
    /*
    use Derived(double, int) constructor.

    In more detail, here’s what happens:

    1) Memory for derived is allocated.
    2) The Derived(double, int) constructor is called, where cost = 1.3, and id = 5
    3) The compiler looks to see if we have asked for a particular Base class constructor. We have! So it calls Base(int) with id = 5.
    4) The base class constructor initialization list sets m_id to 5
    5) The base class constructor body executes, which does nothing
    6) The base class constructor returns
    7) The derived class constructor initialization list sets m_cost to 1.3
    8) The derived class constructor body executes, which does nothing
    9) The derived class constructor returns.
    */
    Derived derived(1.3, 5);
    std::cout << "Id: " << derived.getId() << '\n';
    std::cout << "Cost: " << derived.getCost() << '\n';
    return 0;
}

/*
 When constructing a derived class, the derived class constructor is responsible for determining which base class constructor
 is called. If no base class constructor is specified, the default base class constructor will be used. In that case, if no
 default base class constructor can be found (or created by default), the compiler will display an error. The classes are then
 constructed in order from most base to most derived.
*/
