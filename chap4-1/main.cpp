#include <iostream>
#include "FruitSeller.h"
#include "FruitBuyer.h"
using namespace std;

int main(void){

    const int APPLE_PRICE = 1000;
    const int ORANGE_PRICE = 1500;
    const int INITIAL_APPLE_COUNT = 20;
    const int INITIAL_ORANGE_COUNT = 10;
    const int INITIAL_SELLER_MONEY = 0;
    const int BUYER_MONEY = 5000;

    FruitSeller sellerABC, sellerXYZ;
    sellerABC.InitMembers(APPLE_PRICE, ORANGE_PRICE, INITIAL_APPLE_COUNT, INITIAL_ORANGE_COUNT, INITIAL_SELLER_MONEY);
    sellerXYZ.InitMembers(APPLE_PRICE, ORANGE_PRICE, INITIAL_APPLE_COUNT, INITIAL_ORANGE_COUNT, INITIAL_SELLER_MONEY);
    
    FruitBuyer buyerKim, buyerLee;
    buyerKim.InitMembers(BUYER_MONEY);
    buyerLee.InitMembers(BUYER_MONEY);
    
    buyerKim.BuyApples(sellerABC, 2000);
    buyerKim.BuyOranges(sellerXYZ, 3000);

    buyerLee.BuyApples(sellerXYZ, 2000);
    
    cout<<"Sellers status: "<<endl;
    sellerABC.ShowSalesResult();
    sellerXYZ.ShowSalesResult();
    
    cout<<"Buyers status: "<<endl;
    buyerKim.ShowBuyResult();
    buyerLee.ShowBuyResult();
    
    return 0;
}