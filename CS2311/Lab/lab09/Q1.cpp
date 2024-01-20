#include <iostream>
using namespace std;

int main()
{
	char string[100];
	cin.getline(string, 100);

	int n = strlen(string);

	int number_of_vowels = 0;

	for (int i = 0; i < n; i++)
	{
		if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
			string[i] == 'o' || string[i] == 'u')
			number_of_vowels += 1;

		else if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||
				 string[i] == 'O' || string[i] == 'U')
			number_of_vowels += 1;
	}

	cout << "The number of characters is: " << n << endl;
	cout << "The number of vowels is: " << number_of_vowels << endl;

	return 0;
}