#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	char operators;

	cout << "Enter the equation: ";
	cin >> a >> operators >> b;

	if (isdigit(a,b))
	{
		cout << "Invalid input." << endl;
	}

	else
	{
		switch (operators)
		{
			case '+':
				cout << a << '+' << b << '=' << a + b;
				break;

			case '-':
				cout << a << '-' << b << '=' << a - b;
				break;

			case '*':
				cout << a << '*' << b << '=' << a * b;
				break;

			case '/':
				cout << a << '/' << b << '=' << a / float(b);
				break;

			case '<':
				if (a < b)
				{
					cout << a << '<' << b << '=' << 'T';
					break;
				}

				else
				{
					cout << a << '<' << b << '=' << 'F';
					break;
				}

			case '>':
				if (a > b)
				{
					cout << a << '>' << b << '=' << 'T';
					break;
				}

				else
				{
					cout << a << '>' << b << '=' << 'F';
					break;
				}

			case '=':
				if (a == b)
				{
					cout << '(' << a << "==" << b << ')' << '=' << 'T';
					break;
				}

				else
				{
					cout << '(' << a << "==" << b << ')' << '=' << 'F';
					break;
				}

			default:
				cout << "Invalid operation." << endl;
				break;
		}
	}
	return 0;
}