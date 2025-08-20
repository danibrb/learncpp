#include <iostream>

// Write a complete program that reads an integer from the user, 
// doubles it using the doubleNumber() function you wrote in the previous quiz question, 
// and then prints the doubled value out to the console.

int getNumber(){
    int num{};
    std::cout << "Enter a number: ";
    std::cin >> num;
    return num;
}

int doubleNumber(int num){
    return num * 2;
}

int main(){
    int num{getNumber()};
    std::cout << num << " doubled is " << doubleNumber(num) << ".\n";
    return 0;
}
