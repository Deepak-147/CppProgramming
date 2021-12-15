/*
Dynamic memory allocation: use of scalar version of new and delete operators.

Dynamic memory allocation is a way for running programs to request memory from the operating system when needed.
This memory does not come from the program's limited stack memory -- instead, it is allocated from a much larger pool
of memory managed by the operating system called the heap. On modern machines, the heap can be gigabytes in size.
*/
#include<iostream>
int main(void) {
    /*
    The new operator creates the object using that memory, and then returns a
    pointer containing the address of the memory that has been allocated.
    */
    int *p = new int (5);// using direct initialization
    int *q = new int {6};// using uniform initialization
    /*Plain old way. */
    int *r = new int;
    *r = 7;

    /*
    Sometimes it may happen that OS doesn't have the requested memory available. In this case new will throw an exception.
    This exception needs to be handled. For now we will not let it throw the exception. If new fails to allocate memory,
    it will return a null pointer instead of the address of the allocated memory.
    */
    int *s = new(std::nothrow) int;
    /*Good practice to check all memory requests to ensure they actually succeeded before using the allocated memory. */
    if(!s) {
        std::cout << "Could not allocate the memory";
        return 0;
    }
    *s = 8;
    /*Use them. */
    std::cout << *p << "\n";
    std::cout << *q << "\n";
    std::cout << *r << "\n";
    std::cout << *s << "\n";

    /*
    After done with the use, manually delete them.
    The delete operator simply returns the memory being pointed to back to the operating system.
    It does not delete the pointer variable. The pointer variable still has the same scope as before,
    and can be assigned a new value just like any other variable.
    */
    delete p;//p is still pointing to the dynamically allocated memory. This is Dangling pointer.
    std::cout << *p;//This gives unexpected behavior.

    /* Set deleted pointers to 0 (or nullptr in C++11) unless they are going out of scope immediately afterward. */
    p = nullptr;//Or do this p = 0;

    return 0;
}
