// Lab09 Array of char Q.3
#include <iostream>
#include <cstring>
using namespace std;

const int MaxCName = 20;    // max. no of char in a course title 
const int MaxCourse = 6;    // max. no. of course

int main() {

    char course[MaxCourse][MaxCName] = {"Mathematics", "English", "Data structures", "C++ Programming", "Internet",
                            "Java Programming"};


    // TODO: sort the array in an ascending alphabetical order
    int swap_count = -1;

    while (swap_count != 0)
    {
        swap_count = 0;
        char temp[MaxCName];
        for (int i = 0; i < 5; i++)
        {
            if (strcmp(course[i], course[i + 1]) > 0)
            {
                strcpy_s(temp, course[i]);
                strcpy_s(course[i], course[i + 1]);
                strcpy_s(course[i + 1], temp);

                swap_count += 1;
            }
        }
    }

    for (int i = 0; i < MaxCourse; i++)
        cout << course[i] << endl;

    return 0;
}
