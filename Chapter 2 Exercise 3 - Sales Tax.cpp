// Chapter 2 Exercise 3 - Sales Tax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
    //define variables, can be doubles cause simple integers will be used
    double purchaseAmount, stateSalesTax, countySalesTax, totalAmount;

    //collect info
    cout << "Enter your purchace amount $";
    cin >> purchaseAmount;

    cout << "\nEnter your state sales tax %";
    cin >> stateSalesTax;

    cout << "\nEnter your county sales tax %";
    cin >> countySalesTax;

    //calculate info
    totalAmount = ((stateSalesTax + countySalesTax) / 100) * purchaseAmount + purchaseAmount;

    //display info
    cout << "Your total purchace amount including tax is $" << totalAmount << "\n";
    cout << "Thank you for using our service!\n\n";
   
    //signal succsesful completion
    return 0;

}
