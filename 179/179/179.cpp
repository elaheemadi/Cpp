// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int A, B, C, D;

	int count = 1;
	for (A = 1; A <= 9; A++)
		for (B = 1; B <= 9; B++)
			for (C = 1; C <= 9; C++)
				for (D = 1; D <= 9; D++) {
					if ((A / 3 == C) && A != B && A != C && A != D && B != C &&
						B != D && D != C && (D == 1 || D == 3 || D == 5 || D == 7 || D == 9)
						&& (A + B + C + D == 27))
					{
						cout << "ADDRESS IS: " << A << B << C << D << " Pennsylvania Ave\n";

					}

				}
	cin.get();
	return 0;
}