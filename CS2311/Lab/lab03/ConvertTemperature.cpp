#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int celsius;
	double fahrenheit, kelvin;

	// Prompt the user to input the temperature in celsius
	cout << "Enter Temperature in Centigrade:" << endl;
	cin >> celsius;

	// Formula for celsius to fahrenheit
	fahrenheit = (9.0 / 5.0) * celsius + 32;

	// Output the fahrenheit result
	cout << "Temperature in Fahrenheit is: " << endl << fixed << setprecision(2) << fahrenheit << endl;

	// Formula for fahrenheit to kelvin
	kelvin = (fahrenheit + 459.67) * (5.0 / 9.0);

	// Output the kelvin result
	cout << "Temperature in Kelvin is: " << endl << fixed << setprecision(2) << kelvin << endl;

	return 0;
}