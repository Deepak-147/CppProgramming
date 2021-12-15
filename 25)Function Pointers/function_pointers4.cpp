/*
Example of callback functions.
*/
#include<iostream>
#include<cstdlib>//For rand()

void populate_array(int *array, int arraySize, int (*getNextValue)(void)) {
    for (int i=0; i<arraySize; i++)
        array[i] = getNextValue();
}

int getNextRandomValue(void) {
    return rand();
}

int main(void) {
    int myarray[10];
    /*
    populate_array function takes a function pointer as its third parameter, and calls it to get the values to populate the array with.
    */
    populate_array(myarray, 10, getNextRandomValue);
    for (int i=0; i<10; i++)
        std::cout << myarray[i] << "\n";
    return 0;
}
