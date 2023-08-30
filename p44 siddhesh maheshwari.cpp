/* 44  write a  function power() to raise a number m  to a power n. The function takes a 
double value for m  and int value for n, and returns the result correctly.  Use a 
default value  of  2 for n  to make  the  function  to  calculate  squares when  this  
argument is omitted. Write a main that gets the values of m ond n  from  the user to test
 the function. */
// 2019imsmt021 siddhesh maheshwari
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
double power(int m,long int n=2)
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
