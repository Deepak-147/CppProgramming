#include<iostream>
#include<string>
enum Type {
    INT,
    STRING
};
void add(void *a, void *b, Type type) {
    switch(type) {
        case INT:
            int result = *(static_cast<int*>(a)) + *(static_cast<int*>(b));
            std::cout << result;
            break;
        case STRING:
            std::string s = *(static_cast<std::string*>(a)) + *(static_cast<std::string*>(b));
            std::cout << s;
            break;
        default:
            std::cout << "Invalid type. ";
            break;
    }
}

int main(void) {
    int a = 10, b = 20;
    add(&a, &b, INT);

    std::string s1 = "Hello", s2 = "World";
    add(s1, s2, STRING);

    return 0;
}
