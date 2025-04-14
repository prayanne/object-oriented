#include <iostream>
#include "FruitSeller.h"
using namespace std;

FruitSeller::FruitSeller(int aprice, int oprice): APPLE_PRICE(aprice), ORANGE_PRICE(oprice){
	InitMembers(0, 0, 0);
}

void FruitSeller::InitMembers(int anum, int onum, int money)
{
	numOfApples = anum;
	numOfOranges = onum;
	myMoney = money;
}
int FruitSeller::SaleApples(int money)
{
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
}
int FruitSeller::SaleOranges(int money)
{
	int num = money / ORANGE_PRICE;
	numOfOranges -= num;
	myMoney += money;
	return num;
}
void FruitSeller::ShowSalesResult()
{
	cout << " -���� ���: " << numOfApples << "��" << endl;
	cout << " -���� ���: " << numOfOranges << "��" << endl;
	cout << " -�Ǹ� ����: " << myMoney << "��" << endl << endl;
}
