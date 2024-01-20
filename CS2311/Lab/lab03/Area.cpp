#include <iostream>
using namespace std;

int main()
{
	int width, height;

	// Prompt the user to input the width
	cout << "Please enter the width" << endl;
	cin >> width;

	// Prompt the user to input the height
	cout << "Please enter the height" << endl;
	cin >> height;

	// Output the result to user
	cout << "The area is " << width << "*" << height << "=" << width * height;

	return 0;
}