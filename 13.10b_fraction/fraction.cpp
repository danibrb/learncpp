#include <iostream>

struct Fraction{
    double numerator {0};
    double denominator {1};
};

Fraction getFraction(){
    Fraction temp {};
    std::cout << "Enter numerator: ";
    std::cin >> temp.numerator;
    std::cout << "Enter denominator: ";
    std::cin >> temp.denominator;
    return temp;
}

void printFraction(const Fraction& frac){
    std::cout << frac.numerator << '/' << frac.denominator << '\n';
}

constexpr Fraction multiply(const Fraction& f1, const Fraction& f2){
    return {f1.numerator * f2.numerator, f1.denominator * f2.denominator};
}

int main(){
    Fraction f1 {getFraction()};
    Fraction f2 {getFraction()};

    std::cout << "f1 * f2 = ";
    printFraction(multiply(f1, f2));

    return 0;
}
