#include <iostream> //input output stream is a preprocessor command
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int multiply(int x, int y); // Need prototypes function declaration if you don't define the function before using the function

//The parenthesis represent input to a function a.k.a parameters which is give arguments
int main() //main function int is short for integer/related to return 0 called automatically
{
    int slices;
    cout << "YO bro how many slices of pizza did you eat?" << endl;
    cin >> slices;
    cout << "You have " << slices << " slices of pizza" << endl;
    cout << pow(10,2)*2 << endl; //argument is data passed into a function
    cout << multiply(5,6) << endl; //Function call
}


//Function defintion
int multiply(int x, int y)
{
    return x * y;
}


//arrows point in the way of the data flow
// (<<) is an operator and means that you will operate on the following operand
// cout === console out
// cin  === console in
// return 0; means the program ran well and returned a 0