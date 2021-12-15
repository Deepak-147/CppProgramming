/*
Pure virtual function or abstract function.

C++ allows you to create a special kind of virtual function called a pure virtual function (or abstract function) that has no body at all!
A pure virtual function simply acts as a placeholder that is meant to be redefined by derived classes.
When we add a pure virtual function to our class, we are effectively saying, "it is up to the derived classes to implement this function".

Using a pure virtual function has two main consequences:
1) Any class with one or more pure virtual functions becomes an abstract base class, which means that it can not be instantiated!.
   Thus a class is abstract if it has at least one pure virtual function.
2) Any derived class must define a body for this function, or that derived class will be considered an abstract base class as well.
   Thus if we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
*/

#include <string>
#include <iostream>

/*Animal is an abstract base class. */
class Animal {
    protected:
        std::string m_name;

    public:
        Animal(std::string name)
            : m_name(name) {
        }

        std::string getName() {
            return m_name;
        }
        /*A pure virtual function. It is declared by assigning 0 in declaration.  */
        virtual const char* speak() = 0;
};

class Cat: public Animal {
    public:
        Cat(std::string name)
            : Animal(name) {
        }
        virtual const char* speak() {
            return "Meow";
        }
};

class Dog: public Animal {
    public:
        Dog(std::string name)
            : Animal(name) {
        }
        virtual const char* speak() {
            return "Woof";
        }
};

void report(Animal &rAnimal) {
    std::cout << rAnimal.getName() << " says " << rAnimal.speak() << '\n';
}

int main(void) {
    Cat cat("Fred");
    Dog dog("Garbo");
    report(cat);
    report(dog);
    return 0;
}

/*
Interface class.

An interface class is a class that has no member variables, and where all of the functions are pure virtual!
In other words, the class is purely a definition, and has no actual implementation. Interfaces are useful when
you want to define the functionality that derived classes must implement, but leave the details of how the
derived class implements that functionality entirely up to the derived class.

*/
