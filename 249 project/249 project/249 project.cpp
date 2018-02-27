// 249 project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

const double dollar = 1.00;
const double quarter = 0.25;
const double dime = 0.10;
const double nickle = 0.05;
const double price = 3.50;
double getCoin();
int coinCountChang(double remainMony, double denomation);



int main()
{
	int coinCount=0;
	double remain = 0.0;
	double payment = 0.0;
	double coinDenomination = 0.0;
	cout << " Wellcome to the deep fried twinkiec.\n" << endl;
	cout << "For buy twinkie tou have to pay 3.50$\n " << endl;
	payment = getCoin(); 
	cout << endl;
	remain= payment - price;
	cout << " your  remain mony is :\n"  ;

	if (remain > 0)
	{
		coinDenomination = dollar;
		coinCount = coinCountChang(remain, coinDenomination);
		cout << coinCount << "dollar(s)"  << endl;
		remain = remain - (coinCount *dollar);
		coinCount = 0;

		coinDenomination =quarter;
		coinCount = coinCountChang(remain, coinDenomination);
		cout << coinCount << "quarter(s)" << endl;
		remain = remain - (coinCount *quarter);
		coinCount = 0;

		coinDenomination = dime;
		coinCount = coinCountChang(remain, coinDenomination);
		cout << coinCount << "dime(s)" << endl;
		remain = remain - (coinCount *dime);
		coinCount = 0;

		coinDenomination = nickle;
		coinCount = coinCountChang(remain, coinDenomination);
		cout << coinCount << "nickle(s)" << endl;
		remain = remain - (coinCount *nickle);
		coinCount = 0;
	}
	cout << endl;
	cout << "Enjoy your deep-f twinkieried .\n " << endl;
	cin.get();
	cin.get();
	return 0;
	
		
}

double getCoin()
{
	double amount = 0.0;
	char  typeofCoin;
	 while ( amount <3.50)
	 {
		 cout << "Enter a dollar($), guarter (q),dime (d), nickle (n) : ";
		 cin >> typeofCoin;
		 if (typeofCoin == '$')
		 {
			 amount = amount + dollar;
			 cout << " you input : $ " << amount << endl;
		 }
		else if (typeofCoin == 'q')
		{
			amount = amount + quarter;
			cout << " you input : $ " << amount << endl;
		}
			 
		else if (typeofCoin == 'd')
		{
			amount = amount + dime;
			cout << " you input : $ " << amount << endl;
		}
		else if (typeofCoin == 'n')
		{
			amount = amount + nickle;
			cout << " you input : $ " << amount << endl;
		}
		else
		{
			cout << "Choose right choice please \n ";
		 }
		 cout << endl;
	 }
	 return amount;
 }
 int  coinCountChang(double remainMony, double denomation)
{
	 int countCoin = 0;
	 while (remainMony >= denomation)
	 {

		 remainMony = remainMony - denomation;
		 countCoin = countCoin + 1;

	 }
	 return countCoin;
		 
}