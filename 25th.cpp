//Write a program in C++ to convert temperature in Fahrenheit to Kelvin
#include <iostream>
using namespace std;
 
int main()
{
    float kel, frh;
		cout << "\n\n Convert temperature in Fahrenheit to Kelvin  :\n";	
    cout << " Input the temperature in Fahrenheit : ";
    cin >> frh;
    kel = (frh+459.67)*5/9;
    cout << " The temperature in Fahrenheit : " << frh << endl;
    cout << " The temperature in Kelvin : " << kel << endl;
	cout << endl;
    return 0;
}
