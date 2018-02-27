// excerse1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{    
	string  gender, food, hero, select;
	cout << "Male or Female? \n";
	cin >> gender;
	if (gender == "female")
	{
		cout << "SuperHero or SuperVillain?\n";
		cin >> hero;

		if (hero == "SuperHero")
		{
			cout << "Anime or Sitcom?\n ";
			cin >> select;
			if (select == "Anime")
				cout << " You should go with bangs\n";
			else
				cout << "You shoul get a bob\n ";
		}
		else
		{
			cout << "You shoul get a mohawk\n";
		}
	}

	else
	{
		cout << "SuperHero or SuperVillain?\n";
		cin >> hero;
		if (hero == "SuperHero")
		{
			cout << "Steak or Sushi?\n ";
			cin >> food;
			if (select == "Steak")
				cout << " You shoud get a flat top\n";
			else
				cout << "You should get a pompadour\n";
		}
		else
		{
			cout << "You shoul get a mohawk\n";
		}
	}
	cout << "press enter to continue";
	cin.get();
	cin.get();
    return 0;
	
}

