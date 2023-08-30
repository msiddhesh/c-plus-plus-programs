/*33. Write a program to demonstrate function overloading using function add(). */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
int add(int x,int y)
{
	return(x+y);
}
float add(int x,int y,int z)
{
	return(x+y+z);
}
float add(float x,float y)
{
	return(x+y);
}
main ()
{
   float x,y;
   x=5.2;
   y=4.6;
	cout<<add(x,y)<<endl;
	cout<<add(5,4,2)<<endl;
	cout<<add(5,1)<<endl;
}

