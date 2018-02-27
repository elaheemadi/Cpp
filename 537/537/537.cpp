// 537.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<cstring>
#include <string>
using namespace std;

int main()
{


	char str[100];
	char *front, *rear;
	int a, i = 0;
	
	cout << "enter a string \n";
	cin >> str;

	cout << str << "\n";
	
	front = str;
	a = strlen(str);
	rear = str + a;

	cout << a << "\n";
	
	

	for (i = 0; i <= a; i++) {
		cout << *(rear - i) ;
	}









	cin.get();
	cin.get();

	return 0;
}

