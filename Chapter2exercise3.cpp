/* Program File Name: Chapter2exercise3
Programmer: Sebastian Rollings
Date: September 2025
Requirements:
Write a program that will compute the total sales tax.
*/

#include <iostream>
using namespace std;

int main()
{
	double purchase_price;
	double stateSalesTaxRate;
	double countySalesTaxRate;
	double stateSalesTax;
	double countySalesTax;

	std::cout << "Enter the purchase_price:";
	std::cin >> purchase_price;
	std::cout << endl;

	std::cout << "Enter the stateSalesTaxRate:";
	std::cin >> stateSalesTaxRate;
	std::cout << endl;

	std::cout << "Enter the countySalesTaxRate:";
	std::cin >> countySalesTaxRate;
	std::cout << endl;

	stateSalesTax = purchase_price * stateSalesTaxRate;
	countySalesTax = purchase_price * countySalesTaxRate;

		std::cout << stateSalesTax << endl;
		std::cout << countySalesTax << endl;

	return 0;
}
