#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "Enter the number of rows: " << endl;
	cin >> number;

	if (number <= 0)
	{
		cout << "Please enter positive integer." << endl;
		return 1;
	}

	for (int i = 1; i <= number; i++)
	{
		if (i == 1)
		{
			cout << 0 << " ";

			for (int j = 1; j < number; j++)
				cout << j << " ";
		}

		else
		{
			for (int k = i - 1; k != 0; k--)
				cout << k << " ";

			cout << 0 << " ";

			for (int l = 1; l <= number - i; l++)
				cout << l << " ";
		}

		cout << endl;
	}
}