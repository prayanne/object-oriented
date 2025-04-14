#include <iostream>
#include "FruitBuyer.h"
#include "FruitSeller.h"
using namespace std;

FruitBuyer::FruitBuyer()
{
	myMoney = 0;
	numOfApples = 0;
	numOfOranges = 0;
}

void FruitBuyer::InitMembers(int money)
{
	myMoney = money;
	numOfApples = 0;
	numOfOranges = 0;
}
void FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
	numOfApples += seller.SaleApples(money);
	myMoney -= money;
}
void FruitBuyer::BuyOranges(FruitSeller &seller, int money)
{
	numOfOranges += seller.SaleOranges(money);
	myMoney -= money;
}

void FruitBuyer::ShowBuyResult()
{
	cout << " -���� �ܾ�: " << myMoney << "��" << endl;
	cout << " -��� ����: " << numOfApples << "��" << endl;
	cout << " -������ ����: " << numOfOranges << "��" << endl << endl;
}

