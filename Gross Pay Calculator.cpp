/*
	Program: Gross Pay Calculator
	Written by anfernee durden
	This program will calculate your gross pay for hours worked. - AJD
	Last Modified: 10/10/21
*/

#include <iostream>

int main()
{
	double hours, rate, pay;

	//Getting the amount of hours worked.
	std::cout << " How many hours did you work? ";
	std::cin >> hours;

	//Get the hourly pay rate.
	std::cout << " How much do you get paid per hour? ";
	std::cin >> rate;

	//Calculate the pay.
	pay = hours * rate;

	//Display the pay.
	std::cout << " You have earned $" << pay << "\n";

	return 0;
}


