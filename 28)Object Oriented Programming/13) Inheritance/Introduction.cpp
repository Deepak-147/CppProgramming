/*
In an inheritance (is-a) relationship, the class being inherited from is called the parent class, base class, or superclass,
and the class doing the inheriting is called the child class, derived class, or subclass.
*/

#include <string>
#include <iostream>
class Person {
    public:
        std::string m_name;
        int m_age;
        Person(std::string name = "", int age = 0)
            : m_name(name), m_age(age) {
        }
        std::string getName() {
            return m_name;
        }
        int getAge() {
            return m_age;
        }
};

/*BaseballPlayer publicly inheriting Person. */
class BaseballPlayer : public Person {
    public:
        double m_battingAverage;
        int m_homeRuns;
        BaseballPlayer(double battingAverage = 0.0, int homeRuns = 0)
            : m_battingAverage(battingAverage), m_homeRuns(homeRuns) {
        }
};

/*Employee publicly inherits from Person. */
class Employee : public Person {
    public:
        double m_hourlySalary;
        long m_employeeID;

        Employee(double hourlySalary = 0.0, long employeeID = 0)
            : m_hourlySalary(hourlySalary), m_employeeID(employeeID) {
        }
        void printNameAndSalary() {
            std::cout << m_name << ": " << m_hourlySalary << '\n';
        }
};

int main(void) {
    /*Create a new BaseballPlayer object. */
    BaseballPlayer joe;

    /*Assign it a name (we can do this directly because m_name is public). */
    joe.m_name = "Joe";

    /*Print out the name. */
    std::cout << joe.getName() << '\n';

    Employee frank(20.25, 12345);
    frank.m_name = "Frank";
    frank.printNameAndSalary();
    return 0;
}

/*
Inheriting from a base class means we don't have to redefine the information from the base class in our derived classes.
We automatically receive the member functions and member variables of the base class through inheritance, and then simply
add the additional functions or member variables we want. This not only saves work, but also means that if we ever update
or modify the base class (e.g. add new functions, or fix a bug), all of our derived classes will automatically inherit the changes!
*/
