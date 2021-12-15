/*
Public inheritance:
When you inherit a base class publicly, inherited public members stay public, and inherited protected members stay protected.
Inherited private members, which were inaccessible because they were private in the base class, stay inaccessible.
*/

class Base {
    public:
        int m_public;
    private:
        int m_private;
    protected:
        int m_protected;
};

class Derived: public Base {
    public:
        Derived() {
            m_public = 1; // okay: m_public was inherited as public
            /*
            not okay: m_private is inaccessible from derived class
            m_private = 2;
            */
            m_protected = 3; // okay: m_protected was inherited as protected
        }
};

int main(void) {

    Base base;
    base.m_public = 1; // okay: m_public is public in Base
    /*
    not okay: m_private is private in Base.
    base.m_private = 2;

    not okay: m_protected is protected in Base.
    base.m_protected = 3;
    */

    Derived derived;
    derived.m_public = 1; // okay: m_public is public in Derived
    /*
    not okay: m_private is inaccessible in Derived.
    derived.m_private = 2;

    not okay: m_protected is protected in Derived.
    derived.m_protected = 3;
    */
}
