// Chapter 2 Exercise 3 - Sales Tax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program takes in values and does simple calculations and then displays those values

#include <iostream>

using namespace std;


int main()
{
    //define variables, can be doubles cause simple integers will be used
    double purchaseAmount, stateSalesTax, countySalesTax, totalAmount, totalTax;

    //collect info
    cout << "Enter your purchace amount $";
    cin >> purchaseAmount;

    cout << "\nEnter your state sales tax %";
    cin >> stateSalesTax;

    cout << "\nEnter your county sales tax %";
    cin >> countySalesTax;

    //calculate total tax 
    totalTax = countySalesTax + stateSalesTax;

    //calculate info
    totalAmount = ((totalTax) / 100) * purchaseAmount + purchaseAmount;
 

    //display info
    cout << "\nYour purchace amount was $" << purchaseAmount << ", your total sales tax is %" << totalTax << "\n\nYour total Purchace amount including tax is $" << totalAmount << "\n";
    cout << "\nThank you for using our service!\n\n";
   
    //signal succsesful completion
    return 0;

}
