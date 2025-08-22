// Write a program that asks the user to enter their full name and their age. 
// As output, tell the user the sum of their age and the number of characters in their name 
// (use the std::string::length() member function to get the length of the string). 
// For simplicity, count any spaces in the name as a character.

#include <iostream>
#include <string>

int main(){

    std::cout << "Enter your full name: ";
    std::string fullName{};
    std::getline(std::cin >> std::ws, fullName);

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    int nameLength { static_cast<int>(fullName.length()) };
    std::cout << "The sum is: " << age + nameLength << ".\n";

    return 0;
}
