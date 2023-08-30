/* 45  write a function  that performs the same operation as  that of quesstion 44 but 
takes an int ualue for m.both the  functions should have the same name.write a main that
calls both the function.Use the concept of function overloading.*/
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
double power(int m,int n)
{
   int i;
   double t=1;
   for(i=1;i<=n;i++)
   t*=m;
   return t;	
} 
double power(int m)
{
	return m*m;
}
main ()
{
	int n;
	double  m;
    cout<<"enter m and n "<<endl;
    cin>>m>>n;
    cout<<"m's power n is  ="<<power(m,n)<<endl;
    cout<<"squre of m is  ="<<power(m);
} 
