
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    string filename = argv[1];

    // MovieSet();

    // load_data(csvin);

    // print_data();

    // Check if the print data matches the load data

    // * is used to both declare a pointer and dereference a pointer
    // & is used to declare a reference or return the address of an objected
    // A pointer can be used as part of a conditional statement, 
    // if the pointer is 0 or NULL, it evaluates to false, 
    // if its anything else it would evaluate to true:


    class Animal { virtual void sound() = 0; };
    class Dog : public Animal { void sound() { std::cout << "Woof"; } };
    Animal* pet = new Dog();
    pet->sound(); // Calls Dog's sound method

}