#include<iostream>
using namespace std;
 
int main()
{
    float fahrenheit, celsius;
 
    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * 1.8) + 32;
    cout << "The temperature in Celsius    : " << celsius << endl;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    return 0;
}