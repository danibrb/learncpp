#include <iostream>
#include <string_view>

int getNumber(char f='s'){
    std::string_view opt = (f=='l') ? "a larger" : "an";
    std::cout << "Enter " << opt << " interger: ";
    int x{};
    std::cin >> x;
    return x;
}

void printRes(int smaller, int larger){
    std::cout << "The smaller value is: " << smaller <<'\n';
    std::cout << "The larger value is: " << larger <<'\n';
}

int main(){
    int x{getNumber()};
    int y{getNumber('l')};
    if (x>y){
        std::cout << "Swapping the values\n";
        int temp{x};
        x = y;
        y = temp;        
    }
    printRes(x, y);
    return 0;
}
