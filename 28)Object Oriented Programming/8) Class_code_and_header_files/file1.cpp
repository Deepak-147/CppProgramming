/*
All of the classes that we have written so far have been simple enough that we have been able to implement the member functions directly inside the class definition itself.
However, as classes get longer and more complicated, having all the member function definitions inside the class can make the class
harder to manage and work with. Using an already-written class only requires understanding its public interface (the public member functions),
not how the class works underneath the hood.

Fortunately, C++ provides a way to separate the "declaration" portion of the class from the "implementation" portion.
This is done by defining the class member functions outside of the class definition. To do so, simply define the member functions
of the class as if they were normal functions, but prefix the class name to the function using the scope resolution operator (::).

*/
#include<iostream>

class Date {
    private:
        int m_year;
        int m_month;
        int m_day;

    public:
        Date(int year, int month, int day) {
            setDate(year, month, day);
        }

        void setDate(int year, int month, int day) {
            m_year = year;
            m_month = month;
            m_day = day;
        }

        int getYear() {
            return m_year;
        }
        int getMonth() {
            return m_month;
        }
        int getDay()  {
            return m_day;
        }
};

/*
Class with the constructor and setDate() defined outside of the class definition.
Note that the prototypes for these functions still exist inside the class definition,
but the actual implementation has been moved outside
*/
class OtherDate {
    private:
        int m_year;
        int m_month;
        int m_day;

    public:
        OtherDate(int year, int month, int day);

        void SetDate(int year, int month, int day);

        /*
        The following are access functions.
        Because they are often only one line, they are typically left in the class definition,
        even though they could be moved outside.
        */
        int getYear() {
            return m_year;
        }
        int getMonth() {
            return m_month;
        }
        int getDay()  {
            return m_day;
        }
};

/*OtherDate constructor. */
OtherDate::OtherDate(int year, int month, int day) {
    SetDate(year, month, day);
}

/*OtherDate member function. */
void OtherDate::SetDate(int year, int month, int day) {
    m_month = month;
    m_day = day;
    m_year = year;
}

int main(void) {
    Date date(2018, 8, 2);
    std::cout << date.getDay() << "\n";
    std::cout << date.getMonth() << "\n";
    std::cout << date.getYear() << "\n\n";

    OtherDate other_date(2019, 2, 10);
    std::cout << other_date.getDay() << "\n";
    std::cout << other_date.getMonth() << "\n";
    std::cout << other_date.getYear() << "\n\n";
    return 0;
}
