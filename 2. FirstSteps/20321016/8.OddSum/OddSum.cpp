// OddSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a five-digit number: " << endl;
    cin >> a;
    int a1 = (a / 10000) % 10;
    int a2 = (a / 1000) % 10;
    int a3 = (a / 100) % 10;
    int a4 = (a / 10) % 10);
    int a5 = (a / 1) % 10;

    int sum = a1 + a3 + a5;
    cout << "Sum:" << sum << endl;
    return 0;
}
