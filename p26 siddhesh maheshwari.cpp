/*26. Write a program to add two numbers using call by reference. */
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
void add(int &x,int &y);
main()
{
	int a,b;
	cout<<"enter first number ";
	cin>>a;
	cout<<"enter second number ";
	cin>>b;
	add(a,b);

}
void add(int &x,int &y)
{
	int t; t=x+y; 
	cout<<"addition is = "<<t;
	
}
