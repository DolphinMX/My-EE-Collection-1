#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	int negative_count = 0, positive_count = 0, zero_count = 0;
	int sum_of_negative = 0, sum_of_positive = 0;
	double average_of_positive;
	
	cout << "Enter Numbers! Enter -999 to Stop: " << endl;

	while (number != -999)
	{
		cin >> number;
		if (number == -999)
			break;

		if (number > 0)
		{
			positive_count += 1;
			sum_of_positive += number;
		}

		else if (number < 0)
		{
			negative_count += 1;
			sum_of_negative += number;
		}

		else if (number == 0)
		{
			zero_count += 1;
		}

	}

	if (positive_count == 0)
		average_of_positive = 0;

	else
		average_of_positive = sum_of_positive / double(positive_count);

	cout << "Total Positive Numbers are: " << positive_count << endl;
	cout << "Total Negative Numbers are: " << negative_count << endl;
	cout << "Total Zeros are: " << zero_count << endl;
	cout << "Sum of Positive Numbers is: " << sum_of_positive << endl;
	cout << "Sum of Negative Numbers is: " << sum_of_negative << endl;
	cout << "Average of Positive Numbers is: " << average_of_positive << endl;

	return 0;
}