/*
public members can be accessed by anybody. Private members can only be accessed by member functions of the same class or friends.
This means derived classes can not access private members of the base class directly!
*/

class Base {
    public:
        /*can be accessed by anybody. */
        int m_public;
    private:
        /*can only be accessed by Base members and friends (but not derived classes). */
        int m_private;
    protected:
        /*can be accessed by Base members, friends, and derived classes. */
        int m_protected;
};

class Derived: public Base {
    public:
        Derived() {
            m_public = 1;
            /*
            Not allowed: cannot access private base members from derived class.
            m_private = 2;
            */
            m_protected = 3;
        }
};

int main(void) {
    Base base;
    base.m_public = 1;
    /*
    Not allowed: cannot access private base members from derived class.
    base.m_private = 2;
    */

    /*
    can not access protected members from outside class
    base.m_protected = 3;
    */
}
