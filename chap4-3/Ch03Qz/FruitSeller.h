_Pragma("once");
#ifndef __FSH__
#define __FSH__

class FruitSeller
{
private:
	const int APPLE_PRICE;
	const int ORANGE_PRICE;
	int numOfApples;
	int numOfOranges;
	int myMoney;

public:
	FruitSeller(int aprice, int oprice) : APPLE_PRICE(aprice), ORANGE_PRICE(oprice){};
	void InitMembers(int anum, int onum, int money);
	int SaleApples(int money);
	int SaleOranges(int money);
	void ShowSalesResult();
};

#endif
