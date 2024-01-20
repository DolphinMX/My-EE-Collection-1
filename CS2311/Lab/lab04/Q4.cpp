#include <iostream>
using namespace std;

int main()
{
	int current_year, current_month, current_age, born_month;
	int future_year, future_month;
	int years = 0, months = 0;
	
	// Prompt the user to input the current year, month and age
	cout << "Enter the current year:" << endl;
	cin >> current_year;

	cout << "Enter the current month:" << endl;
	cin >> current_month;

	// Check whether the month is within the range from 1 to 12
	if (!(current_month >= 1 && current_month <= 12))
	{
		cout << "Invalid Month Input!" << endl;
		return 1;
	}

	cout << "Enter your current age in years:" << endl;
	cin >> current_age;

	// Check whether the age is negative or not
	if (current_age < 0)
	{
		cout << "The value for age cannot be a negative integer!" << endl;
		return 1;
	}

	// Check whether the age is greater than 200
	if (current_age > 200)
	{
		cout << "Sorry, people may be dead by this age!" << endl;
		return 1;
	}
	
	// Prompt the user to input 
	cout << "Enter the month in which you were born:" << endl;
	cin >> born_month;

	// Check whether the month is within the range from 1 to 12
	if (!(born_month >= 1 && born_month <= 12))
	{
		cout << "Invalid Month Input!" << endl;
		return 1;
	}

	cout << "Enter the year for which you wish to know your age:" << endl;
	cin >> future_year;

	cout << "Enter the month in the year for which you wish to know your age:" << endl;
	cin >> future_month;

	// Check whether the month is within the range from 1 to 12
	if (!(future_month >= 1 && future_month <= 12))
	{
		cout << "Invalid Month Input!" << endl;
		return 1;
	}

	// Calculate year
	if (current_month < born_month)
	{
		current_year -= 1;
	}

	years = (future_year - current_year) + current_age;
	months = future_month - born_month;

	// Check whether the user born already or not for the inputted future year and month
	if ((years < 0 && months < 0) || (years < 0) || (months < 0))
	{
		cout << "You were not born!" << endl;
		return 1;
	}

	// Output the year and month info.
	cout << "Your age in " << future_year << "/" << future_month << ":" << endl;

	// Check singulars and plurals properly in the output
	if ((years == 0 || years == 1) && (months == 0 || months == 1))
		cout << years << " year and " << months << " month" << endl;

	else if (years == 0 || years == 1)
		cout << years << " year and " << months << " months" << endl;

	else if (months == 0 || months == 1)
		cout << years << " years and " << months << " month" << endl;

	else 
		cout << years << " years and " << months << " months" << endl;

	// Check whether the year and month are both odd, either old or neither
	if ((years % 2 != 0) && (months % 2 != 0))
		cout << "Both of " << years << " and " << months << " are odd!" << endl;

	else if (years % 2 != 0)
		cout << years << " is odd!" << endl;

	else if (months % 2 != 0)
		cout << months << " is odd!" << endl;

	else
		cout << "Both of " << years << " and " << months << " are not odd!" << endl;

	return 0;
}
