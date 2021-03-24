//Write a program in C++ to calculate the volume of a cube
#include<iostream>
using namespace std;
int main(){
	int r;
    	float volcu;
		cout << "\n\n Calculate the volume of a cube :\n";		
        cout<<" Input the side of a cube : ";
    	cin>>r;
    	volcu=(r*r*r);
        cout<<" The volume of a cube is : "<< volcu << endl;
        cout << endl;
        return 0;
}