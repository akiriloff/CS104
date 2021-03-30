﻿// 03. Дължим данък към НАП за 2016

#include <iostream>
using namespace std;
int main()
{
    // Създаване на променливите
    float income, tax;

    // Въвеждане на доход
    cout << "Enter your 2016 income: ";
    cin >> income;

    // Проверка
    if (income <= 2160) tax = 0;
    else if (income <= 3000) tax = (income - 2160) * 0.18;
    else if (income <= 7200) tax = 168 + ((income - 3000) * 0.20);
    else tax = 1072 + ((income - 7200) * 0.22);

    // Отпечатване на дължимия данък
    cout << "You owe: " << tax << endl;

    return 0;
}
