/*
A naming conflict occurs when two identifiers are introduced into the same scope,
and the compiler cannot disambiguate which one to use. When this happens,
compiler or linker will produce an error because it does not have enough information to resolve the ambiguity.
*/

/*
Created two header files header1.h and header2.h. By including them in the same program,
we have now introduced two different functions with the same name and parameters into the same scope (the global scope),
which causes a naming collision.
*/
#include<iostream>
#include"header1.h"
#include"header2.h"

int main(void) {
    /*This will give compiler error. As compiler is confused which func() to use. */
    std::cout << func(4, 7);
    return 0;
}
