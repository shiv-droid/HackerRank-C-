// Given a positive integer n, do the following:

// If 1 <= n <= 9, print the lowercase English word corresponding to the number 
// (e.g., one for , two for , etc.).
// If n > 9, print Greater than 9.


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    //Use the code below this for HackerRank as variable input and type is already declared in the boilerplate of C++
    if (n >= 1 && n <= 9)
    { 
        if(n == 1)
        {
            cout << "one" << endl;
        }
        else if (n == 2)
            {
            cout << "two" << endl;
        }
        else if (n == 3)
        {
            cout << "three" << endl;
        }
        else if (n == 4)
        {
            cout << "four" << endl;
        }
        else if  (n == 5)
        {
            cout << "five" << endl;
        }
        else if (n == 6)
        {
            cout << "six" << endl;
        }
        else if (n == 7)
        {
            cout << "seven" << endl;
        }
        else if (n == 8)
        {
            cout << "eight" << endl;
        }
        else if (n == 9)
        {
            cout << "nine" << endl;
        }
    }
    else if (n > 9)
    {
        cout  << "Greater than 9" << endl;
    }
}