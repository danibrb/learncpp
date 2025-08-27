#include <iostream>

int main(){
    for(int i{1} ; i < 151 ; ++i){
        bool isDiv3 { !(i%3) };
        bool isDiv5 { !(i%5) };
        bool isDiv7 { !(i%7) };

        if(isDiv3){
            std::cout << "fizz";
        }
        if(isDiv5){
            std::cout << "buzz";
        }
        if(isDiv7){
            std::cout << "pop";
        }
        if(!isDiv3 && !isDiv5 && !isDiv7){
            std::cout << i;
        }
        std::cout << '\n';
    }
    return 0;
}
