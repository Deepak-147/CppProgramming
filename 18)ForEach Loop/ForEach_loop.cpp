/*
C++11 introduces a new type of loop called a for-each loop (also called a range-based for loop) that provides a
simpler and safer method for cases where we want to iterate through every element in an array (or other list-type structure).
*/
#include<iostream>
int main(void) {
    int a[] = {34, 65, 89, 13, 41, 40, 33, 92};
    /*Iterate through array a */
    /*num will be a copy of the current array element. So it must be of same type as of array element. */
    for(int num : a)
        /*Access array elements through variable num */
        std::cout << num << " ";

    std::cout << "\n\n";

    /*Type is auto, so number has its type deduced from the array. */
    for(auto num : a)
        /*Access array elements through variable num */
        std::cout << num << "\n";

    std::cout << "\n";

    /*The & makes num a reference to the actual array element, preventing a copy from being made. Also any changes to num will affect the array being iterated over. */
    for(auto &num : a)
        /*Access array elements through variable num */
        std::cout << num << "\t";

    std::cout << "\n";

    /*num is a const reference to the currently iterated array element. */
    for(const auto &num : a)
        /*Access array elements through variable num */
        std::cout << num << "";

    std::cout << "\n";

    return 0;
}
