// 36.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a, b;
	int sum = 0;
	int pro = 0;
	cout << "Enter an integer number\n";
	cin >> a;
	cout << "Enter another integer number\n";
	cin >> b;
	sum = a + b;
	pro = a*b;
	cout << "sum of this two number is :" << sum << "\n";
	cout << "product of this two number is :" << pro << "\n";
	cin.get();
	cin.get();
    return 0;
}

