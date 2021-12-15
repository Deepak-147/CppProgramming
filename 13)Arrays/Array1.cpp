#include<iostream>
void find_average(int *a, int length) {
    int i, sum = 0;
    std::cout << "The array is: " << "\n";
    for(i = 0; i < length; i++) {
        std::cout << a[i] << "\n";
        sum = sum + a[i];
    }
    std::cout << "Average is: " << sum/length << "\n";
}

int main(void) {
    /*Fixed array. */
    int a[5];

    a[0] = 20;
    a[1] = 50;
    a[2] = 10;
    a[3] = 80;
    a[4] = 40;

    /*
    Or initialize entire arrays via use of an initializer list:
    int a[5] = {20, 50, 10, 80, 40};

    To Initialize all elements to 0:
    int a[5] = {};

    Use C++11 uniform initialization syntax:
    int a[5] {20, 50, 10, 80, 40};

    */
    int length = sizeof(a) / sizeof(a[0]) ;

    /*Fixed arrays decay into pointers when passed to a function, so we have to pass the length as a separate parameter to iterate the array in the function. */
    find_average(a, length);

    return 0;
}
