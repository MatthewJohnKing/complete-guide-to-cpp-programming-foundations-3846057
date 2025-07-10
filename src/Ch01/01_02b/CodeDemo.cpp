// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// include the libraries
// # statements are directives
#include <iostream>
// #include <cstdio> // alternate approach (1)

// iostream is a library that allows objects and functions to print and recieve text. preprocesses don't use a ;

//the main function must return an integer
//cpp is case sensitive.
// the main can only recieve no input or strings from the command line
//code must be contained in blocks, indents are not important for running, but help with reading
// functions defined by return type, name and inputs.

/*
multi-line comments can be marked with the / *, while a single line comment is marked with / /.
*/
int main(){
    std::cout << "Hello World!" << std::endl;
    // printf("Hey, there!\n") \\ is the alternative approach (1)

    // :: is the scope resolution operator
    // cout represents the terminal and << indicates being pushed on.
    // all statements in cpp must end with a ;

    std::cout << std::endl << std::endl;
    // these add empty lines

    return 0;
    // the return keywork, returning 0 is typically for 0 errors and another return would have a detailed alternative return.
}
