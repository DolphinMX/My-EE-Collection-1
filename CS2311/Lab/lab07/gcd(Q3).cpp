//	Greatest Common Divisor
#include<iostream>
using namespace std;

const int LEN = 5;

// TODO 1: Complete the function declaration of gcd(), takes 2 interger as parameter.
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
    

    // TODO 2: Complete the function implementation, return the GCD of 2 given numbers 
}

int main() {
    int num[LEN];
    int gcd_ans;
    cout << "Enter " << LEN << " numbers:" << endl;
    for (int i = 0; i < LEN; i++)
        cin >> num[i];


    cout << "GCD:" << endl;
    gcd_ans = num[0];
    for (int i = 1; i < LEN; i++) {
        // TODO 3: Complete the loop, to get the GCD of all input numbers.
        gcd_ans = gcd(gcd_ans, num[i]);
  
    }
    cout << gcd_ans << endl;

    return 0;
}
