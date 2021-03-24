//Write a program in C++ to compute the total and average of four numbers.
#include <iostream>
using namespace std;

    int main()
    {
    	float a,b,c,d,avrg;
		cout << "\n\n Compute the total and average of four numbers :\n";
        cout<<" Input 1st two numbers (separated by space) : ";
    	cin>> a >> b;
        cout<<" Input last two numbers (separated by space) : ";
    	cin>> c >> d;
		avrg=(a+b+c+d)/4;
        cout<<" The average of four numbers is : "<< avrg << endl;
        cout << endl;
        return 0;
    }
