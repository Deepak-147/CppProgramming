/*
Introduced in C++03, std::vector provides dynamic array functionality that handles its own memory management.
This means you can create arrays that have their length set at runtime, without having to explicitly allocate
and deallocate memory using new and delete.
std::vector can be used as a dynamic array that both remembers its length and can be dynamically resized as required.
*/

#include<iostream>
#include<vector>
#include<array>
int main(void) {
    // no need to specify length at initialization
    std::vector<int> array1;//Takes 0 by default
    std::vector<int> array2 = { 9, 7, 5, 3, 1 }; // use initializer list to initialize array
    std::vector<int> array3 { 9, 7, 5, 3, 1 }; // use uniform initialization to initialize array (C++11 onward)

    std::cout << array2[4] << "\n";
    std::cout << array2.at(4) << "\n";

    std::cout << array1.size() << "\n";
    std::cout << array2.size() << "\n";

    for (auto const &element: array2)
        std::cout << element << ' ';

    std::cout << "\n";

    /*
    Resize the array with new size 7. The existing elements values are preserved.
    New elements are initialized to the default value 0 (for integer type).
    */
    array2.resize(7);
    std::cout << array2.size() << "\n";

    for (auto const &element: array2)
        std::cout << element << ' ';

    std::cout << "\n";


    /*Use of length and capacity. */
    std::array<int, 10> array4 { 1, 2, 3, 4, 5 };

    /*Or use this:
    int *array4 = new int[10] { 1, 2, 3, 4, 5 };

    We would say that this array has a length of 10, even though we are only using 5 of the elements that we allocated.
    Unlike a built-in array or a std::array, which only remembers its length, std::vector contains two separate attributes: length and capacity.
    In the context of a std::vector, length is how many elements are being used in the array, whereas capacity is how many elements were allocated in memory.
    */
    std::cout << "The length is: " << array4.size() << '\n';
    /*
    std::array does not have capacity member. So this will not work.
    std::cout << "The capacity is: " << array4.capacity() << '\n';
    */


    std::vector<int> array5 {0, 1, 2, 3, 4};
    array5 = {0, 1, 2, 3, 4};

    std::cout << "The length is: " << array5.size() << '\n';
    std::cout << "The capacity is: " << array5.capacity() << '\n';

    array5 = {0, 1, 2};

    std::cout << "The length is: " << array5.size() << '\n';
    std::cout << "The capacity is: " << array5.capacity() << '\n';

    return 0;
}
