#pragma once
#include <iostream>
class FruitSeller; // forward declaration

class FruitBuyer {
private:
    int numOfApples;
    int numOfOranges;
    int myMoney;

public:
    void InitMembers(int money);
    void BuyApples(FruitSeller& seller, int money);
    void BuyOranges(FruitSeller& seller, int money);
    void ShowBuyResult() const;
};