/*
A recursive function is a function that calls itself.
*/

#include <iostream>
void countDown(int count) {
    std::cout << "push " << count << '\n';
    countDown(count-1); // countDown() calls itself recursively
}

int main(void) {
    countDown(5);
    return 0;
}

/*
Because the countDown() function never returns (it just calls countDown() again), this information is never
being popped off the stack! Consequently, at some point, the computer will run out of stack memory, stack overflow
will result, and the program will crash or terminate.
So you must include a recursive termination condition, or they will run “forever” (actually, until the call stack runs out of memory).
A recursive termination is a condition that, when met, will cause the recursive function to stop calling itself.
*/
