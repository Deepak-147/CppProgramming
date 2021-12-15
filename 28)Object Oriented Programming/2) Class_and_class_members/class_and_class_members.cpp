/*
Structs VS Classes:

In the world of object-oriented programming, we often want our types to not only hold data,
but provide functions that work with the data as well.

*/

#include <iostream>

/*Using Struct. */
struct DateStruct {
    /*
    Members are public by default.
    Public members are members of a struct or class that can be accessed from outside of the struct or class.
    */
    int year;
    int month;
    int day;
};

void print(DateStruct &date) {
    std::cout << "Using Struct" << "\n";
    std::cout << date.year << "/" << date.month << "/" << date.day << "\n\n";
}

/*Using Class. */
class DateClass {
    /*
    Members are private by default.
    Private members are members of a class that can only be accessed by other members of the class.
    Although class members are private by default, we can make them public by using the public keyword.
    Access specifiers determine who has access to the members that follow the specifier.
    In general, member variables are usually made private, and member functions are usually made public.
    */
    public:
        /*"m_" prefix helps to distinguish between member variables from other variables. It is a good practice. */
        int m_year;
        int m_month;
        int m_day;

        /*A member function. */
        void print()  {
            std::cout << "Using Class" << "\n";
            std::cout << m_year << "/" << m_month << "/" << m_day << "\n\n";
        }
};

int main(void) {
    DateStruct today { 2018, 07, 15 }; // use uniform initialization
    today.day = 31;

    /*With non-member functions, we have to pass data to the function to work with. */
    print(today);

    DateClass yesterday { 2018, 07, 15 };
    yesterday.m_day = 30;

    /*With member functions, we can assume we always have an implicit object of the class to work with. */
    yesterday.print();

    return 0;
}

/*
A class defaults its members to private. A struct defaults its members to public.
*/
