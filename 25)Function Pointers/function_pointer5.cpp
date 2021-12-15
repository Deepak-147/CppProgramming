/*Use of callback to provide default functions. */

#include<iostream>

void maximum(int x, int y) {
    if(x > y)
        std::cout << x << "is maximum" << "\n";
    else
        std::cout << y << "is maximum" << "\n";
}

void minimum(int x, int y) {
    if(x < y)
        std::cout << x << "is minimum" << "\n";
    else
        std::cout << y << "is minimum" << "\n";
}

/*maximum is default. */
void func(int x, int y, void (*p)(int, int) = maximum){
    p(x, y);
}

int main(void) {
    func(3, 4, maximum);
    func(3, 4, minimum);
    func(3, 4);
    return 0;
}


