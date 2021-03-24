//Write a program in C++ to convert temperature in Kelvin to Fahrenheit.   
#include<iostream>
using namespace std;
int main ()
{
	float kelvin,fahrenheit;
	cout<<"conversion of temperature from kelvin to fahrenheit::\n\n"
	cout<<"Enter the temperature in kelvin :";
	cin >> kelvin;
    fahrenheit = (kelvin*1.8)-459.67;
    cout << " The temperature in Kelvin    : " << kelvin << endl;
    cout << " The temperature in Fahrenheit : " << fahrenheit << endl;
	cout << endl;
    return 0;
}
