#include <iostream>
using namespace std;

int main()
{
	int start_day, start_hour, start_minute, start_second;
	int end_day, end_hour, end_minute, end_second;

	int start_time_total = 0, end_time_total = 0;
	int difference;

	int day, hour, minute, second;

	const int day_in_second = 86400, hour_in_second = 3600, minute_in_second = 60;

	// Prompt the user to input the start time info.
	cout << "For start time, please enter the following information:" << endl;

	cout << "Enter the start day (a number in range from 1 to 31): ";
	cin >> start_day;

	cout << "Enter the start hour (a number in range from 0 to 23): ";
	cin >> start_hour;

	cout << "Enter the start minute (a number in range from 0 to 59): ";
	cin >> start_minute;

	cout << "Enter the start second (a number in range from 0 to 59): ";
	cin >> start_second;

	// Prompt the user to input the end time info.
	cout << "For end time, please also enter the similar information:" << endl;

	cout << "Enter the end day (a number in range from 1 to 31): ";
	cin >> end_day;

	cout << "Enter the end hour (a number in range from 0 to 23): ";
	cin >> end_hour;

	cout << "Enter the end minute (a number in range from 0 to 59): ";
	cin >> end_minute;

	cout << "Enter the end second (a number in range from 0 to 59): ";
	cin >> end_second;
	cout << endl;

	// Calculate the total time for start time and end time in second
	start_time_total = start_day * day_in_second + start_hour * hour_in_second + start_minute * minute_in_second + start_second;
	end_time_total = end_day * day_in_second + end_hour * hour_in_second + end_minute * minute_in_second + end_second;

	difference = end_time_total - start_time_total;

	// Calculate the day, hour, minute, second from the difference
	day = difference / day_in_second;
	hour = (difference % day_in_second) / hour_in_second;
	minute = ((difference % day_in_second) % hour_in_second) / minute_in_second;
	second = ((difference % day_in_second) % hour_in_second) % minute_in_second;

	// Output the time difference in day, hour, minute and second
	cout << "The time difference is: " << day << " day(s), " << hour << " hour(s), " << minute << " minute(s), " << "and " << second << " second(s).";
	return 0;
}