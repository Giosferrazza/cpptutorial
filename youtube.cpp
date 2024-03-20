#include <iostream> //input output stream is a preprocessor command
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

double power(double, int); // Need prototypes function declaration// Only use data types no var 
void print_pow(double, int);
//The parenthesis represent input to a function a.k.a parameters which is give arguments
int main() //main function int is short for integer/related to return 0 called automatically
{    
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    print_pow(base, exponent);
}

void print_pow(double base, int exponent) //print the function and handle user input as well!
{
    cout << base << " raised to the " << exponent << " is = " << power(base, exponent) << endl;
}

double power(double base, int exponent) //Math for the POWER function
{
    double result = 1;
    for(int i = 0; i < exponent; i++) // dont forget to increment the index
    {
        result = result * base;       
    }
    return result;
}

//arguments get passed in but the parameters are in the defintion!!

//arrows point in the way of the data flow
// (<<) is an operator and means that you will operate on the following operand
// cout === console out
// cin  === console in
// return 0; means the program ran well and returned a 0