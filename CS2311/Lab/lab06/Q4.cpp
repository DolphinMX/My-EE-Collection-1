#include <iostream>;
using namespace std;

int main()
{
	int array[6] = { 0 };
	int temp;

	cout << "Enter the element in the array:" << endl;
	for (int i = 0; i < 6; i++)
	{
		cin >> array[i];
	}

	for (int i = 1; i < 6; i++)
	{
		temp = array[i];
		int j = i - 1;
		while (j >= 0 && temp < array[j])
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = temp;
	}

	cout << "The sorted array is:" << endl;
	for (int k = 0; k < 6; k++)
	{
		if (k == 5)
			cout << array[k];
		else
			cout << array[k] << ", ";
	}
}