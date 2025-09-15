/* Program File Name: Chapter2exercise3
Programmer: Sebastian Rollings
Date: September 2025
Requirements:
Write a program that will compute the total sales tax on a $95 purchase. 
Assume the state sales tax is 4 percent, and the county sales tax is two percent.
*/

#include <iostream>
using namespace std;

int main()
{
	int purchase_price = 95;
	double stateSalesTaxRate = 0.04;
	double countySalesTaxRate = 0.02;
	double stateSalesTax;
	double countySalesTax;

	stateSalesTax = purchase_price * stateSalesTaxRate;
	countySalesTax = purchase_price * countySalesTaxRate;

		std::cout << stateSalesTax << endl;
		std::cout << countySalesTax << endl;

	return 0;
}
