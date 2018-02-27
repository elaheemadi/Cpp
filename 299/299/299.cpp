// 299-6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void compute_coin(int coin_value, int& number, int& amount_left)
{
	number = amount_left / coin_value;
	amount_left = amount_left % coin_value;
}


void print_coins(int quarters, int dimes, int pennies)
{

	int total = quarters * 25 + dimes * 10 +  pennies * 1;

	if (total != 0)
	{
		cout << total << " cents can be given as ";
	}
	else
	{
		cout << "No change is required, because the total is $0.00.";
	}

	if (quarters != 0)
	{
		cout << quarters << " quarter(s)";
	}

	if (quarters != 0 && (dimes != 0  || pennies != 0))
	{
		cout << ", ";
	}

	if (dimes != 0)
	{
		cout << dimes << " dime(s)";
	}

	if (dimes != 0 && (pennies != 0))
	{
		cout << ", ";
	}

		
	if (pennies != 0)
	{
		cout << pennies << " pennie(s)";
	}

	cout << ".";
}


int main()
{
	char repeat = NULL;
	int amount_left = 0;

	int quarters = 0;
	int dimes = 0;
	int pennies = 0;

	do
	{
		cout << "Enter the amount of change between 0 to 99 : ";
		cin >> amount_left;

		compute_coin(25, quarters, amount_left);

		compute_coin(10, dimes, amount_left);

		compute_coin(1, pennies, amount_left);

		print_coins(quarters, dimes,  pennies);
		cout << endl;

		cout << "Would you like to run the program again (Y or N)? ";
		cin >> repeat;
	} while ((repeat == 'y') || (repeat == 'Y'));

	return 0;
}