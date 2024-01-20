// Lab09 Array of char Q.4
#include <iostream>
#include <cstring>
using namespace std;

const int MaxStd = 10;	// max. no. of students
const int MaxStdName = 10;	// max. no. of char in student's name
const int MaxCName = 20;    // max. no of char in a course title 
const int MaxCourse = 6;    // max. no. of course

int main() {

	char students[MaxStd][MaxStdName] = {"James", "Iverson", "Wade", "Jordan", "George", "Curry", "Westbrook", "Durant", "Kobe",
						"Harden"};
	char course[MaxCourse][MaxCName] = {"Mathematics", "English", "Data structures", "C++ Programming", "Internet", "Java Programming"};

	char stu_course[MaxStd][MaxCName];

	int seed;
	cout << "Enter the seed for random number generation: ";
	cin >> seed;
	srand(seed); // this sets the seed of random number generation

	// Randomly assign a course to a student
	for (int i = 0; i < MaxStd; i++) {
		strcpy_s(stu_course[i],course[rand() % MaxCourse]);
		// You can use the following line to check the assigned course
		cout << students[i] << " registers " << stu_course[i] << endl;
	}

	cout << endl;


	// TODO: count the number of registrations for each course
	//	     print the course list in descending order according to the number of registrations
	//       print the registered students' names for each course and students' names should be sorted in ascending alphabetical order.

	int swap_count = -1;
	while (swap_count != 0)
	{
		swap_count = 0;

		for (int i = 0; i < MaxStd - 1; i++)
		{
			if (strcmp(students[i], students[i + 1]) > 0)
			{
				char temp_stdname[MaxStdName];
				strcpy_s(temp_stdname, students[i]);
				strcpy_s(students[i], students[i + 1]);
				strcpy_s(students[i + 1], temp_stdname);

				char temp_course_name[MaxCName];
				strcpy_s(temp_course_name, stu_course[i]);
				strcpy_s(stu_course[i], stu_course[i + 1]);
				strcpy_s(stu_course[i + 1], temp_course_name);

				swap_count += 1;
			}
		}
	}

	int count[MaxCourse] = { 0 };
	for (int i = 0; i < MaxCourse; i++)
	{
		for (int j = 0; j < MaxStd; j++)
		{
			if (strcmp(stu_course[j], course[i]) == 0)
				count[i]++;
		}
	}

	swap_count = -1;
	while (swap_count != 0)
	{
		swap_count = 0;
		for (int i = 0; i < MaxCourse - 1; i++)
		{
			if (count[i] < count[i + 1])
			{
				int temp = count[i];
				count[i] = count[i + 1];
				count[i + 1] = temp;

				char temp_course_name[MaxCName];
				strcpy_s(temp_course_name, course[i]);
				strcpy_s(course[i], course[i + 1]);
				strcpy_s(course[i + 1], temp_course_name);

				swap_count++;
			}
		}
	}

	cout << "Students' list:" << endl;
	for (int i = 0; i < MaxStd; i++)
	{
		cout << students[i] << endl;
	}
	cout << endl;
	
	for(int i = 0; i < MaxCourse; i++)
	{
		if (count[i] > 1)
			cout << count[i] << " students register " << course[i] << ": ";
		else if (count[i] == 1)
			cout << count[i] << " student registers " << course[i] << ": ";
		else
			cout << " Nobody registers " << course[i];

		for (int j = 0; j < MaxStd; j++)
		{
			if (strcmp(stu_course[j], course[i]) == 0)
				cout << students[j] << " ";
		}
		cout << endl;
	}

	return 0;
}
