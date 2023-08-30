/* 31. Write a program using inline function to add two numbers. */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
inline int add(int a,int b)
{
	return(a+b);
}
main ()
{
	double x,y,z;
	cout<<"enter first number ";
	cin>>x;
	cout<<"enter second number ";
	cin>>y;
	z=add(x,y);
	
	cout<<"addition is = "<<z<<endl;
}
