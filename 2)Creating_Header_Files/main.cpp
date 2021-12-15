/*
This is an example of creating own header files and using them.
As seen in Multi_File_Program, we have to forward declare the function when we want to use it.
Writing forward declarations for every function you want to use that lives in another file can
get tedious quickly. Header files can relieve us of this burden. A header file only has to be written once,
and it can be included in as many files as needed.

Create a file "add.h" in the directory Creating_Header_Files. This will be created in the separate Headers folder out of no where. But that is correct.
But when you see it in file explorer you can find it in the directory Creating_Header_Files.
*/

/*
Use angled brackets to include header files that come with the compiler,
so it should look for that header file in the system directories.
*/

#include<iostream>
/*
Use double quotes to include any other header files, so it should look for that header file in the current directory
containing our source code first. If it doesn't find the header file there, it will check any other include paths that
you have specified as part of your compiler/IDE settings. That failing, it will fall back to checking the system directories.
*/
#include "add.h"
int main(void) {
    std::cout << "The sum of 7 and 3 is: " << add(7, 3) << std::endl;
    return 0;
}
