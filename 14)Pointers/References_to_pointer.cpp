#include<iostream>
void fun1(int *p) {
    /*p is some another pointer as a copy of original pointer is made with the name p. So it is not the same p which is in main(). */

    /*Make it Point to null. So we let the copy of p to point to NULL and not the p which is in main(). */
    p = nullptr;
}
void fun2(int *&p) {
    /*Now it is the reference to the original pointer and not the copy of it. So it is the same p which is in the main(). */

    /*Make it Point to null. So original p is made to point to NULL. */
    p = nullptr;
}
int main(void) {
    int x = 5;
    int *p = &x;
    fun1(p);
    /*p is the original pointer and it does not point to null. So it still has address of x. */
    std::cout << "Address of x: " << p << "\n";

    fun2(p);
    /*p now points to NULL. Since it was passed by reference. */
    std::cout << "Address of x: " << p << "\n";
    return 0;
}

