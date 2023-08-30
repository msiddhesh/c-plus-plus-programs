/* 37. Write a program to demonstrate function overloading using function area(). */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
int area(int x,int y)
{
	return(x*y);
}
float area(int x,float y)
{
	return(x*y);
}
float area(float x,float y)
{
	return(x*y);
}
main ()
{
	float a=10.10,b=20.20;
	int c=10,d=20;
	cout<<area(a,b)<<endl;
	cout<<area(c,a)<<endl;
	cout<<area(c,d)<<endl;
}
