// 4.An 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int n;

	cout << "Upper Limit: ";
	cin >> n;

	for (int k = 1; k <= n; k++)
	{
		float Ak = 1.0 / k;
		cout << Ak << endl;
	}

	return 0;
}