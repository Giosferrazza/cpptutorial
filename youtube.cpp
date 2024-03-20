#include <iostream> //input output stream is a preprocessor command
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

double power(double, int); // Need prototypes function declaration// Only use data types no var 

//The parenthesis represent input to a function a.k.a parameters which is give arguments
int main() //main function int is short for integer/related to return 0 called automatically
{
    cout << power(1,0) << endl;
}

double power(double base, int exponent)
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