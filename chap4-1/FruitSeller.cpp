#include "FruitSeller.h"

void FruitSeller::InitMembers(int a_price, int o_price, int a_num, int o_num, int money) {
    APPLE_PRICE = a_price;
    ORANGE_PRICE = o_price;
    numOfApples = a_num;
    numOfOranges = o_num;
    myMoney = money;
}

int FruitSeller::SaleApples(int money) {
    int num = money / APPLE_PRICE;
    numOfApples -= num;
    myMoney += money;
    return num;
}

int FruitSeller::SaleOranges(int money) {
    int num = money / ORANGE_PRICE;
    numOfOranges -= num;
    myMoney += money;
    return num;
}

void FruitSeller::ShowSalesResult() const {
    std::cout << "Left apples count: " << numOfApples << std::endl;
    std::cout << "Left oranges count: " << numOfOranges << std::endl;
    std::cout << "Yappi: " << myMoney << std::endl;
}