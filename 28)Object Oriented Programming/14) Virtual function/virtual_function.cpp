/*
A virtual function is a special type of function that, when called, resolves to the most-derived version of the function
that exists between the base and derived class. This capability is known as polymorphism. A derived function is considered
a match if it has the same signature (name, parameter types, and whether it is const) and return type as the base version of
the function. Such functions are called overrides.
*/

#include <string>
#include <iostream>
class Animal {
    protected:
        std::string m_name;

        // We're making this constructor protected because
        // we don't want people creating Animal objects directly,
        // but we still want derived classes to be able to use it.
        Animal(std::string name)
            : m_name(name) {
        }
    public:
        std::string getName() {
            return m_name;
        }
        virtual const char* speak() {
            return "???";
        }
};

class Cat: public Animal {
    public:
        Cat(std::string name)
            : Animal(name) {
        }
        /*even though virtual keyword is not mandatory in derived class, but it is a good practice. */
        virtual const char* speak() {
            return "Meow";
        }
        /*
        Making individual function is not required.

        void report(Cat &cat) {
            std::cout << cat.getName() << " says " << cat.speak() << '\n';
        }
        */

};

class Dog: public Animal {
    public:
        Dog(std::string name)
            : Animal(name) {
        }
        /*even though virtual keyword is not mandatory in derived class, but it is a good practice. */
        virtual const char* speak() {
            return "Woof";
        }
        /*
        Making individual function is not required.

        void report(Dog &dog) {
            std::cout << dog.getName() << " says " << dog.speak() << '\n';
        }
        */
};

/*Instead of writing one function per derived class, we have one function that works with all classes derived from Animal!. */
void report(Animal &rAnimal) {
    std::cout << rAnimal.getName() << " says " << rAnimal.speak() << '\n';
}

int main(void) {
    Cat cat("Fred");
    Dog dog("Garbo");

    /*
    When animal.speak() is evaluated, the program notes that Animal::speak() is a virtual function.
    In the case where animal is referencing the Animal portion of a Cat object, the program looks
    at all the classes between Animal and Cat to see if it can find a more derived function.
    In that case, it finds Cat::speak(). In the case where animal references the Animal portion of a Dog object,
    the program resolves the function call to Dog::speak().
    */
    report(cat);
    report(dog);

    return 0;
}

/*
 Please note that the signature of the derived class function must exactly match the signature of the base class virtual
 function in order for the derived class function to be used.

 If a function is marked as virtual, all matching overrides are also considered virtual, even if they are not explicitly
 marked as such. However, having the keyword virtual on the derived functions does not hurt, and it serves as a useful
 reminder that the function is a virtual function rather than a normal one. Consequently, it's generally a good idea
 to use the virtual keyword for virtualized functions in derived classes even though it's not strictly necessary.

 Never call virtual functions from constructors or destructors.

*/
