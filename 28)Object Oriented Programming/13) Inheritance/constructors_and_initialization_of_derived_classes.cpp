class Base {
    public:
        int m_id;
        Base(int id=0)
            : m_id(id) {
        }
        int getId() {
            return m_id;
        }
};

class Derived: public Base {
    public:
        double m_cost;
        Derived(double cost=0.0)
            : m_cost(cost) {
        }
        double getCost() {
            return m_cost;
        }
};

int main(void) {
    /*
    Here's what actually happens when base is instantiated:

    1) Memory for base is set aside
    2) The appropriate Base constructor is called
    3) The initialization list initializes variables
    4) The body of the constructor executes
    5) Control is returned to the caller
    */
    Base base(5);

    /*
    Here's what actually happens when derived is instantiated:

    1) Memory for derived is set aside (enough for both the Base and Derived portions)
    2) The appropriate Derived constructor is called
    3) The Base object is constructed first using the appropriate Base constructor. If no base constructor is specified, the default constructor will be used.
    4) The initialization list initializes variables
    5) The body of the constructor executes
    6) Control is returned to the caller
    */
    Derived derived(1.3);

    return 0;
}
