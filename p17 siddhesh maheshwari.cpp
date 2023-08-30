/* 17. Write a program to evaluate the following investment equation 
V=P(l+r)^n 
and print the tables which would give the value of V for various combination of the following 
values of P,r and n: 
P: 1000, 2000,…., 10,000 
r: 0.10, 0.11, …., 0.20 
n: 1, 2, …, 10 */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int p=1000,n=1;
	float r=.10,v;
	cout<<"p     "<<"r    "<<"n    "<<"v"<<endl;
	for(p=1000;p<=10000;p=p+1000)
	for(r=.10;r<=.20;r+=.01)
	for(n=1;n<=10;n++)
	{
		cout<<p<<"  "<<r<<"  "<<n<<"  ";
		v=pow(1+r,n)*p;
		cout<<"  "<<v<<endl;
		}}

