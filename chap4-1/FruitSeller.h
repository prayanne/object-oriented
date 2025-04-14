#pragma once
#include <iostream>

class FruitSeller {
private:
    int APPLE_PRICE;
    int ORANGE_PRICE;
    int numOfApples;
    int numOfOranges;
    int myMoney;

public:
    void InitMembers(int a_price, int o_price, int a_num, int o_num, int money);
    int SaleApples(int money);
    int SaleOranges(int money);
    void ShowSalesResult() const;
};
