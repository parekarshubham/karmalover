//Write a program in C++ to add two numbers accept through keyboard
#include<iostream>
using namespace std;
int main(){
int a, b, sum;
cout<<"sum of two numbers from keyboard as follows\n"; 
	cout << " Input 1st number : ";
	cin >> a ;
	cout << " Input 2nd number : ";
	cin >> b;
	sum = a + b;
	cout <<" The sum of the numbers is : " << sum << endl;
	cout << endl;
	return 0;
}