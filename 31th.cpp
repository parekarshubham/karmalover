//Write a program in C++ to check whether a number is positive, negative or zero.   
#include <iostream>
using namespace std;

int main()
{
    signed long a = 0;
	cout << "\n\n Check whether a number is positive, negative or zero :\n";  
	cout << " Input a number : ";
    cin >> a;
    if(a > 0)
    {
        cout << " The entered number is positive.\n\n";
    }
    else if(a8 < 0)
    {
        cout << " The entered number is negative.\n\n";
    }
    else
    {
        std::cout << " The number is zero.\n\n";
    }
    return 0;
}
