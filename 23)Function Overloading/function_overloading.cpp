/*
Function overloading is a feature of C++ that allows us to create multiple functions with the same name,
so long as they have different parameters.
When an overloaded function is called, C++ goes through the following process to determine which
version of the function will be called:
1) First, C++ tries to find an exact match.
2) If no exact match is found, C++ tries to find a match through promotion. Meaning char, short are promoted to int. float is promoted to double. Enum is promoted to int.
3) If no promotion is possible, C++ tries to find a match through standard conversion. Meaning any numeric type will be converted to any numeric type, like int can be converted to float. 0 can be converted to int or a pointer type.
4) Finally, C++ tries to find a match through user-defined conversion.

If a function call matches more than one candidate function. This is an ambiguous match.
*/

#include<iostream>
void add(int a, int b) {
    int result = a + b;
    std::cout << result << "\n";
}

void add(float a, float b) {
    float result = a + b;
    std::cout << result << "\n";
}

void add(std::string a, std::string b) {
    std::string result = a + b;
    std::cout << result << "\n";
}

int main(void) {
    add(10, 20);
    /*
    If we call it as add(12.34, 53.88). That is, without 'f' suffix. It is double by default. And this will give us ambiguous match.
    As these values may be converted int or float and it will find two matches for a call. This gives ambiguity.
    */
    add(12.34f, 53.88f);
    add("Hello", "world!");
    return 0;
}
