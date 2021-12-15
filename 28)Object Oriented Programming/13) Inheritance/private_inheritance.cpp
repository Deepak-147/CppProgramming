/*
Private inheritance:
With private inheritance, all members from the base class are inherited as private.
This means private members stay private, and protected and public members become private.
*/

class Base {
    public:
        int m_public;
    private:
        int m_private;
    protected:
        int m_protected;
};

class Derived: private Base {
    public:
        Derived() {
            m_public = 1; // okay: m_public is now private in Derived
            /*
            not okay: derived classes can't access private members in the base class.
            m_private = 2;
            */
            m_protected = 3; // okay: m_protected is now private in Derived
        }
};

int main(void) {

    Base base;
    base.m_public = 1; // okay: m_public is public in Base
    /*
    not okay: m_private is private in Base.
    base.m_private = 2;
    */
    /*
    not okay: m_protected is protected in Base.
    base.m_protected = 3;
    */

    Derived derived;
    /*
    not okay: m_public is now private in Derived.
    derived.m_public = 1;

    not okay: m_private is inaccessible in Derived
    derived.m_private = 2;

    not okay: m_protected is now private in Derived.
    derived.m_protected = 3;
    */
}

