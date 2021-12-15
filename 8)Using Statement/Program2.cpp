#include<iostream>

int main(void) {
    /*This using declaration tells the compiler that we're using only object "cout" from std namespace! */
    using std::cout;

    /*No need of std::cout prefix here. */
    cout << "Hello world!!";

    return 0;
}

