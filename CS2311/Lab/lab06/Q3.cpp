#include <iostream>
using namespace std;

int main()
{
	int set_a[10] = { 0 };
	int set_b[10] = { 0 };
	int intersect_set[10] = { 0 };
	int count = 0;

	cout << "Enter 10 Elements of Set A:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> set_a[i];
	}

	cout << "Enter 10 Elements of Set B:" << endl;
	for (int j = 0; j < 10; j++)
	{
		cin >> set_b[j];
	}

	for (int k = 0; k < 10; k++)
	{
		for (int l = 0; l < 10; l++)
		{
			if (set_a[k] == set_b[l])
			{
				intersect_set[count] = set_a[k];
				count += 1;
				break;
			}
		}
	}

	if (count == 0)
		cout << "The Intersected Element of Set A and B are not Found." << endl;
	else
	{
		cout << "The Intersected Elements of Set A and B are:" << endl;
		for (int x = 0; x < count; x++)
		{
			cout << intersect_set[x] << " ";
		}
	}

	return 0;
}