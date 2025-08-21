// The user is asked to enter 2 floating point numbers (use doubles).
// The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
// The program computes the answer on the two numbers the user entered and prints the results.
// If the user enters an invalid symbol, the program should print nothing.

#include <iostream>

double getNumber()
{
    std::cout << "Enter a number: ";
    double x{};
    std::cin >> x;
    return x;
}

char getOperation()
{
    std::cout << "Enter +, -, *, or /: ";
    char x{};
    std::cin >> x;
    return x;
}

void calculate(double x, double y, char op)
{
    double result{};

    if (op == '+')
        result = x + y;
    else if (op == '-')
        result = x - y;
    else if (op == '*')
        result = x * y;
    else if (op == '/')
        result = x / y;
    else
        return;     //print nothing if invalid operation

    std::cout << x << ' ' << op << ' ' << y << " = " << result << '\n';
}

int main()
{
    double a{getNumber()};
    double b{getNumber()};
    char op{getOperation()};
    calculate(a, b, op);
    return 0;
}
