// This is my first program in C++. This program will calculate gross pay. - AJD

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