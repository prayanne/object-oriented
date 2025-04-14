#include <iostream>
#include "FruitSeller.h"
#include "FruitBuyer.h"
using namespace std;

int main(void)
{
	FruitSeller sellerABC(1000, 1500), sellerXYZ(1000, 1500);
	sellerABC.InitMembers(20, 10, 0);
	sellerXYZ.InitMembers(20, 10, 0);

	FruitBuyer buyerKim, buyerLee;

	buyerKim.InitMembers(5000);
	buyerKim.BuyApples(sellerABC, 2000);
	buyerKim.BuyOranges(sellerXYZ, 3000);

	buyerLee.InitMembers(3000);
	buyerLee.BuyApples(sellerXYZ, 2000);

	cout << "sellerABC: " << endl;
	sellerABC.ShowSalesResult();
	cout << "sellerXYZ: " << endl;
	sellerXYZ.ShowSalesResult();

	cout << "buyerKim: " << endl;
	buyerKim.ShowBuyResult();
	cout << "buyerLee: " << endl;
	buyerLee.ShowBuyResult();

	return 0;
}
