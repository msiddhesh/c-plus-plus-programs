/*25. Write a program to swap two numbers using call by reference. */
// 2019imsmt021 siddhesh maheshwari
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
void swap(int &x,int &y);
main()
{
	int a,b;
	cout<<"enter first number ";
	cin>>a;
	cout<<"enter second number ";
	cin>>b;
	swap(a,b);
	cout<<"first number ="<<a<<endl<<"second number ="<<b;
}
void swap(int &x,int &y)
{
	int t; t=x; x=y; y=t;
	
}
