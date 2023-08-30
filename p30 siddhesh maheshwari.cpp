/* 30. Write a program using inline function for cube of a number. */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
inline double cube(double a)
{
	return(a*a*a);
}
main ()
{
	double c,d;
	c=cube(3);      d=cube(4+2);
	cout<<"c = "<<c<<endl<<"d = "<<d;
}
