/*
Dynamic memory allocation: use of array version of new[] and delete[] operators.
*/
#include<iostream>
int main(void) {
    /*Dynamically allocating arrays. */
    std::cout << "Enter size of the first array: ";
    int length1;
    std::cin >> length1;

    /*The array new operator is called, even though the [] isn’t placed next to the new keyword. */
    int *A = new int[length1];
    if(!A) {
        std::cout << "Memory allocation not successful" << "\n";
        return 0;
    }
    else {
        std::cout << "Successfully created first array" << "\n";
    }
    A[0] = 10;
    std::cout << "The first element in first array is: " << A[0] << "\n\n";


    std::cout << "Enter size of the second array: ";
    int length2;
    std::cin >> length2;

    /*Initialize a dynamically allocated array to 0. */
    int *B = new int[length2]();
    if(!B) {
        std::cout << "Memory allocation not successful" << "\n";
        return 0;
    }
    else {
        std::cout << "Successfully created second array" << "\n";
    }
    std::cout << "The first element in second array is: " << B[0] << "\n\n";


    std::cout << "Enter size of the third array: ";
    int length3;
    std::cin >> length3;

    int *C = new int[length3] {1, 2, 3, 4, 5}; // Initialize a dynamic array in C++11
    if(!C) {
        std::cout << "Memory allocation not successful" << "\n";
        return 0;
    }
    else {
        std::cout << "Successfully created third array" << "\n";
    }
    std::cout << "The first element in third array is: " << C[0] << "\n\n";
    std::cout << "The last element in third array is: " << C[length3-1] << "\n\n";


    /*Use array delete to deallocate array. */
    delete[]A;
    delete[]B;
    delete[]C;

    return 0;
}
