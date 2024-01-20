#include <iostream>
//#include <iomanip>
using namespace std;

int main()
{
	int student_score[20] = { 0 };
	int number_of_studnet;
	double average_score = 0, sum_score = 0;
	
	cout << "Number of students?" << endl;
	cin >> number_of_studnet;

	for (int i = 0; i < number_of_studnet; i++)
	{
		cout << "Student " << i+1 << ":" << endl;
		cin >> student_score[i];
		sum_score += student_score[i];
	}

	average_score = sum_score / number_of_studnet;

	cout << fixed << setprecision(2) << "Average = " << average_score << endl;

	for (int j = 0; j < number_of_studnet; j++)
	{
		for (int k = 0; k < student_score[j]; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}