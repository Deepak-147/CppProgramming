/*
When you create a derived class, it is composed of multiple parts: one part for each inherited class, and a part for itself.
The pointer or reference to the base class calls the base version of the function rather than the derived version.

If only there was some way to make those base pointers call the derived version of a function instead of the base version.......

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
        const char* speak() {
            return "???";
        }
};

class Cat: public Animal {
    public:
        Cat(std::string name)
            : Animal(name) {
        }
        /*Function overriding. */
        const char* speak() {
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
        /*Function overriding. */
        const char* speak() {
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
    std::cout << "cat is named " << cat.getName() << ", and it says " << cat.speak() << '\n';

    Dog dog("Garbo");
    std::cout << "dog is named " << dog.getName() << ", and it says " << dog.speak() << '\n';

    /*The base pointer or reference is only able to call the base version of the function, not a derived version. */
    Animal *pAnimal = &cat;
    std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

    /*This also calls base version of the function. */
    pAnimal = &dog;
    std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';

    /*The base pointer or reference is only able to call the base version of the function, not a derived version. */
    report(cat);
    report(dog);

    return 0;
}

/*
Because pAnimal is an Animal pointer, it can only see the Animal portion of the class.
Consequently, pAnimal->speak() calls Animal::speak() rather than the Dog::Speak() or Cat::speak() function.
If we want to get the name of the animal and what it speaks, then we can create a report() function for each derived class. This is not good.
We can create one report() function which would let us pass in any class derived from Animal, instead of writing one function per derived class,
we get one function that works with all classes derived from Animal!
*/
