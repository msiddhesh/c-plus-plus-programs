/* 34.   Write a program to demonstrate function overloading using function sub() */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
int sub(int x,int y)
{
	return(x-y);
}
float sub(float x,float y)
{
	return(x-y);
}
main ()
{
   float x,y;
   x=5.2;
   y=4.6;
	cout<<sub(x,y)<<endl;
	cout<<sub(5,1)<<endl;
}
