#include <iostream>
#include <math.h>
using namespace std;

    int main()
    {
    	float a,b,c;
		cout << "\n\n Find the area of Scalene Triangle :\n";
        cout<<" Input the height of the triangle : ";
    	cin>>h;
        cout<<" Input the base of the triangle : ";
    	cin>>b;
		a = (h*b)/2;
        cout<<" The area of the Scalene Triangle is : "<< a << endl;
        cout << endl;
        return 0;
    }
