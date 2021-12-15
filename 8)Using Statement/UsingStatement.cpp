#include<iostream>

int main(void) {
    /*This using directive tells the compiler that we're using everything in the std namespace! */
    using namespace std;

    /*No need of std::cout prefix here. */
    cout << "Hello world!!";

    return 0;
}
