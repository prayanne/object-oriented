#include "FruitBuyer.h"
#include "FruitSeller.h"

void FruitBuyer::InitMembers(int money) {
    numOfApples = 0;
    numOfOranges = 0;
    myMoney = money;
}

void FruitBuyer::BuyApples(FruitSeller& seller, int money) {
    numOfApples += seller.SaleApples(money);
    myMoney -= money;
}

void FruitBuyer::BuyOranges(FruitSeller& seller, int money) {
    numOfOranges += seller.SaleOranges(money);
    myMoney -= money;
}

void FruitBuyer::ShowBuyResult() const {
    std::cout << "now apples count: " << numOfApples << std::endl;
    std::cout << "now oranges count: " << numOfOranges << std::endl;
    std::cout << "left money: " << myMoney << std::endl;
}