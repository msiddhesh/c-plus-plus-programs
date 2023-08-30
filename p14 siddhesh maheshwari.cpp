/* 14. Write a function using reference variables as arguments to swap the 
values of a pair of integers. */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{
	int a,b;
	cout<<"enter a ";
	cin>>a;
	cout<<"enter b ";
	cin>>b;
	swap(a,b);
	cout<<"a ="<<a<<endl<<"b ="<<b;
}
void swap(int &x,int &y)
{
	int t; t=x; x=y; y=t;
}
