#include <iostream>
using namespace std;

int main()
{
	int A, B, C;

	// Prompt the user to input 3 integer value 
	cout << "Enter the value of A, B and C:" << endl;
	cin >> A;
	cin >> B;
	cin >> C;

	// Check whether this three integer value can form a triangle or not
	if (A <= 0 || B <= 0 || C <= 0) 
	{
		cout << "Impossible" << endl;
	}

	else if ((A + B <= C) || (A + C <= B) || (B + C <= A))
	{
		cout << "Impossible" << endl;
	}

	else if ((A == B) && (B == C))
	{
		cout << "Equilateral" << endl;
	}

	else if ((A == B) || (A == C) || (B == C))
	{
		cout << "Isosceles" << endl;
	}

	else
	{
		cout << "Scalene" << endl;
	}
	return 0;
}