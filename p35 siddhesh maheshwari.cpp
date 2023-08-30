/* 35. Write a program to demonstrate function overloading using function max(). */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
int max(int x,int y)
{ int z;
z=(x>y)?x:y;
	return(z);
}
float max(float x,float y)
{
	float z;
	z=(x>y)?x:y;
	return(z);
}
main ()
{
   float x,y;
   x=5.2;
   y=4.6;
	cout<<max(x,y)<<endl;
	cout<<max(x,1)<<endl;
}
