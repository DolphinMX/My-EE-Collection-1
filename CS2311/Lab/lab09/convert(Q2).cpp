// Lab09 Array of char Q.2
#include <iostream>
#include <cstring>
using namespace std;

const int MaxSize = 50;	// max.size of char array

int main() {
	char ch;
	char inWord[MaxSize], outWord[MaxSize];

	// Add your code here to read a string that may contain multiple words
	cin.getline(inWord, MaxSize);


	//Add your logic here to check for and to convert to uppercases
	int n = n = strlen(inWord);
	for (int i = 0; i < n; i++)
	{
		if (inWord[i] >= 'A' && inWord[i] <= 'Z')
			outWord[i] = inWord[i] + 32;

		else if (inWord[i] >= 'a' && inWord[i] <= 'z')
			outWord[i] = inWord[i] - 32;

		else
			outWord[i] = inWord[i];
	}

	//How to mark the end of outWord here?
	outWord[n] = '\0';

	//(user input should be less than MaxSize chars)

	cout << outWord << endl;

	return 0;
}
