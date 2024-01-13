//This brings the iostream library
#include <iostream>
#include <string>

/*
    This is a block comment that encloses 
    multiple lines of text

    My_Learnings:
    Learnt about the iostream library.
    Learnt about line and block comments.
    Learnt about complier and run time errors.
    Learnt about functions and statements.
    Learnt about std::cout, std::cin, std::cerr, std::endl, std::clog, std::getline(std::cin, name).
    Understood the C++ execution model.
*/

//Function to add two numbers
/* int addNumbers(int a, int b){
    int sum = a + b;
    return sum;
}

int multiplyNumbers(int a, int b){
    int product = a * b;
    return product;
} */

int main(){

/*     int number1 {10};
    int number2 {20};

    std::cout << "First number: " << number1 << std::endl;
    std::cout << "Second number: " << number2 << std::endl;

    int sum = addNumbers(number1, number2);
    int product = multiplyNumbers(number1, number2);

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << product << std::endl; */

    int age;
    std::string name;

    //Data Input
/*     std::cout << "Enter your name and age: ";
    std::cin >> name >> age;

    std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl; */

    //Data with spaces
    std::cout << "Enter your name and age: ";
    std::getline(std::cin, name);
    std::cin >> age;

    std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;

    return 0;
}


