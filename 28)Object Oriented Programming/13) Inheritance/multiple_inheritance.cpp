/*
Multiple inheritance enables a derived class to inherit members from more than one parent.
*/
#include<iostream>
#include<string>

class Person {
    private:
        std::string m_name;
        int m_age;
    public:
        Person(std::string name, int age)
            : m_name(name), m_age(age) {
        }
        std::string getName() {
            return m_name;
        }
        int getAge() {
            return m_age;
        }
};

class Employee {
    private:
        std::string m_employer;
        double m_wage;
    public:
        Employee(std::string employer, double wage)
            : m_employer(employer), m_wage(wage) {
        }
        std::string getEmployer() {
            return m_employer;
        }
        double getWage() {
            return m_wage;
        }
};

/*Teacher publicly inherits Person and Employee. */
class Teacher: public Person, public Employee {
    private:
        int m_teachesGrade;
    public:
        Teacher(std::string name, int age, std::string employer, double wage, int teachesGrade)
            : Person(name, age), Employee(employer, wage), m_teachesGrade(teachesGrade) {
        }
        void display() {
            std::cout << "Dear " << getName() << "!" << "\n";
            std::cout << "Your age is: " << getAge() << "\n";
            std::cout << "You are employed by " << getEmployer() << " at salary of " << getWage() << " USD" << "\n";
            std::cout << "to teach grade " << m_teachesGrade << "\n";
        }
};

int main(void) {
    Teacher teacher("Deepak", 25, "XYZ school of computer science", 1500.67, 5);
    teacher.display();
    return 0;
}
