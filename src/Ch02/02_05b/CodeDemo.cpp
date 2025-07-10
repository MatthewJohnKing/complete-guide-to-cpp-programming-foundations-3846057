// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>
#include <string>
int main(){
    std::string name;
    std::cout << "Enter your name: "<< std::flush;
    std::cin >> name;
    //only works for single words
    std::cout << "Nice to meet you " << name << "!" << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
