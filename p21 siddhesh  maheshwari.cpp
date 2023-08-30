/* 21. Write a program to print a table of values of the function 
 Y=e^(-x) 
For x varying from 0 to 10 in steps of 0.1. The table should appear as follows. 
X     0.1  0.2  0.3  0.4  0.5  0.6  0.7  0.8  0.9 
0.0 
1.0 
. 
. 
9.0 */ 
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
#include<math.h>
using namespace std;
main ()
{
	float i,x,y,j;
	cout<<"      TABLE FOR E^(-X) "<<endl;
	cout<<"X         ";
	for(i=0;i<=0.4;i+=0.1)
	cout<<i<<"           ";
	cout<<endl;
	for(i=0;i<=9.0;i+=1.0)
	{
		cout<<i<<"        ";
		for(j=0;j<=0.4;j+=0.1)
		{
			x=i+j;
			y=exp(-x);
			cout<<y<<"        ";
		}
    cout<<endl;
	}
}
