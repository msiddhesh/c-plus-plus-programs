/* 36. Write a program to demonstrate function overloading using function volume(). */
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
int volume(int x)
{
     return(x*x*x);	
}
double volume(double x,int y)
{
     return(x*y*y);	
}
long volume(int x,int y,long z)
{
     return(x*y*z);	
}
main()
{
	int a=10;
	double b=12.32;
	long c=123456;
	cout<<volume(a)<<endl;
	cout<<volume(b,a)<<endl;
	cout<<volume(a,a,c)<<endl;
	
}
