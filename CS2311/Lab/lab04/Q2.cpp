#include <iostream>
using namespace std;

int main()
{
	int number;

	// Prompt the user to enter an integer
	cout << "Enter an Integer Number: ";
	cin >> number;

	// Determines whether it is divisible by 3 or 5 or both or neither
	if ((number % 3 == 0) && (number % 5 == 0))
	{
		cout << number << " is divisible by 3 and 5." << endl;
	}

	else if (number % 3 == 0)
	{
		cout << number << " is divisible by 3 only." << endl;
	}

	else if (number % 5 == 0)
	{
		cout << number << " is divisible by 5 only." << endl;
	}

	else if ((number % 3 != 0) || (number % 5 != 0))
	{
		cout << number << " is not divisible by 3 or 5." << endl;
	}

	return 0;
}