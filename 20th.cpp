//Write a program in C++ to convert temperature in Fahrenheit to Celsius.
#include<iostream>
using namespace std;
 
int main()
{
    float fahrenheit, celsius;
 
    cout << "Enter the temperature in fahrenheit : ";
    cin >> fahrenheit;
    celsius = (fahrenheit-32)/1.8;
    cout << "The temperature in Fahrenheit    : " <<  fahrenheit << endl;
    cout << "The temperature in Celsius  : " << celsius << endl;
    return 0;
}