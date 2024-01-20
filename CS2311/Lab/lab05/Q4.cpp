#include <iostream>
using namespace std;

int main()
{
	int max_length, min_length;
	int a = 0, b = 0, c = 0, r = 0, s = 0, t = 0;
	int count = 0;
	int value = 0;

	cout << "Please input the maximal length allowed for the edge: ";
	cin >> max_length;

	cout << "Please input the minimal length allowed for the edge: ";
	cin >> min_length;

	if (!(max_length > min_length && max_length > 0 && min_length > 0))
	{
		cout << "Invalid inputs!" << endl;
		return 1;
	}

	for (r = 2; r <= max_length; r += 2)
	{

		value = r * r / 2;
		t = r;
		for (s = 1; s < t; s++)
		{
			if (value % s == 0)
			{
				t = value / s;

				a = r + s;
				b = r + t;
				c = r + s + t;

				if (a >= min_length && b >= min_length && c <= max_length)
				{
					if (a * a + b * b == c * c)
					{
						count += 1;
					}
				}


			}
		}
	
	}
		cout << "The number of all Pythagorean triplets between " << min_length << " and " << max_length << " is " << count << "." << endl;
	
	return 0;
}