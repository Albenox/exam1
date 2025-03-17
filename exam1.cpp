/*
    Program File Name: exam1.cpp
    Programmer: Gabriel Inocentes
    Date: March 16, 2025
    Requirements:
    Create a program that asks the user to input a monthly sales amount and advanced pay, before outputting their earnings from commission and what they owe from the advanced pay
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float sale;
    float comRate;
    float commission;
    float advPay;
    float remPay;

    cout << "Enter the salesperson's monthly sales: ";
    cin >> sale;
    cout << "Enter the amount of advanced pay for this salesperson: ";
    cin >> advPay;

    if (sale < 10000) {
        comRate = 0.05;
    }
    else if (sale < 15000) {
        comRate = 0.10;
    }
    else if (sale < 18000) {
        comRate = 0.12;
    }
    else if (sale < 22000) {
        comRate = 0.14;
    }
    else
        comRate = 0.16;

    commission = sale * comRate;
    remPay = commission - advPay;

    cout << fixed << setprecision(2) << "Pay Results" << endl << "----------" << endl;
    cout << fixed << setprecision(2) << "Sales: $" << sale << endl;
    cout << fixed << setprecision(2) << "Commission Rate: " << comRate << endl;
    cout << fixed << setprecision(2) << "Commission: $" << commission << endl;
    cout << fixed << setprecision(2) << "Advanced Pay: $" << advPay << endl;
    cout << fixed << setprecision(2) << "Remaining Pay: $" << remPay << endl;
}
