#ifndef __FSB__
#define __FSB__
_Pragma("once");

class FruitSeller;

class FruitBuyer
{
private:
	int myMoney;		// private:
	int numOfApples;	// private:
	int numOfOranges;	// private:

public:
	FruitBuyer();
	void InitMembers(int money);
	void BuyApples(FruitSeller &seller, int money);
	void BuyOranges(FruitSeller &seller, int money);
	void ShowBuyResult();
};

#endif
