#include <iostream>

struct Ads{
    int watched {};
    double percentageClick {};
    double earningsPerClick {};
};

Ads getAds(){
    Ads temp {};
    std::cout << "Enter how many ads were shown: ";
    std::cin >> temp.watched;
    std::cout << "Enter percentage per click: ";
    std::cin >> temp.percentageClick;
    std::cout << "Enter average earnings per click: ";
    std::cin >> temp.earningsPerClick;
    return temp;
}

void printAds(Ads& ad){
    std::cout << "Number of ads shown: " << ad.watched << '\n';
    std::cout << "Click rate: " << ad.percentageClick << '\n';
    std::cout << "Average earnings per click: " << ad.earningsPerClick << '\n';
    std::cout << "Total earnings: "
        << (ad.watched * ad.percentageClick / 100 * ad.earningsPerClick) << '\n';
}

int main(){
    Ads ad {getAds()};
    printAds(ad);
    return 0;
}
