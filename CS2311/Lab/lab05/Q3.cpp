#include <iostream>
using namespace std;

int main()
{
	int max_length, min_length;
	int a = 0, b = 0, c = 0;
	int count = 0;

	cout << "Please input the maximal length allowed for the edge: ";
	cin >> max_length;

	cout << "Please input the minimal length allowed for the edge: ";
	cin >> min_length;

	if (!(max_length > min_length && max_length > 0 && min_length > 0))
	{
		cout << "Invalid inputs!" << endl;
		return 1;
	}


	for (a = min_length; a <= max_length; a++)
	{
		for (b = a; b <= max_length; b++)
		{
			for (c = b; c <= max_length; c++)
			{
				if (a * a + b * b == c * c)
					count += 1;
			}
		}
	}

	cout << "The number of all Pythagorean triplets between " << min_length << " and " << max_length << " is " << count << "." << endl;
	return 0;
}