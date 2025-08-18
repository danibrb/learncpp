#include <iostream>

//ask user to enter three values
int main(){
    int x{};
    int y{};
    int z{};
    
    std::cout << "Enter three values separated by a space: ";
    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << ", " << y << " and " << z << ".\n";
    return 0;
}
