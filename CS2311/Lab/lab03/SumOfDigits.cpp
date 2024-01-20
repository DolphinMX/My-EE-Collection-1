#include <iostream>
using namespace std;

int main()
{
	int digit;
	int sum = 0;

	// Prompt the user to input a three digits
	cout << "Please Enter a number of Three Digits:" << endl; 
	cin >> digit;

	// Loop for calculate the sum of the square of three digits
	while (digit != 0)
	{
		sum += (digit % 10) * (digit % 10);
		digit = digit / 10;
	}

	// Output the sum to the user
	cout << "Sum of Square of Digits is:" << endl << sum << endl;

	return 0;
}