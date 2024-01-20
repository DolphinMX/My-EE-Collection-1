#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
// -- You need it if the function body is not written before it is being called

// Prototypes for add() is given to you
double add(double a, double b);

// Prototypes for sub() is given to you
double sub(double a, double b);
// Let create the prototypes for mul() and div() as well
double mul(double a, double b);

double div(double a, double b);


int main() {
    double a, b;
    char op;

    cout << "Enter an Expression consisting of two operands and one operator." << endl;

    cin >> a >> op >> b;
    cout << fixed << setprecision(2);
   
    if (op=='+')
        cout << add(a,b);
    // let's add in logics for - * / as well

    else if (op == '-')
        cout << sub(a, b);
    else if (op == '*')
        cout << mul(a, b);
    else if (op == '/')
        cout << div(a, b);

    return 0;
}

// function add() is given to you
double add(double a, double b) {
    return a+b; 
}
// function sub()
double sub(double a, double b) {
    // you need to fill in the body of function sub()
    return a - b;
}

// and also create the bodies of function mul() and div()
double mul(double a, double b)
{
    return a * b;
}

double div(double a, double b)
{
    return a / b;
}
