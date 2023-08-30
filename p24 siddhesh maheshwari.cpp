/*24. Write a program to read number of units and read unit cost. 
Then find the total cost. */
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
main()
{
	int unit;
	float cost,total;
	cout<<"enter number of unit"<<endl;
	cin>>unit;
	cout<<"enter cost "<<endl;
	cin>>cost;
	total=cost*unit;
	cout<<"total cost is = "<<total;
}
 
