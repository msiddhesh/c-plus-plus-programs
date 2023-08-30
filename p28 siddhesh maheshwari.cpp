/* 28. Write a program to find minimum using function return by reference. */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
void min(int &x,int &y);
main()
{
	int a,b;
	cout<<"enter first number ";
	cin>>a;
	cout<<"enter second number ";
	cin>>b;
	min(a,b);

}
void min(int &x,int &y)
{
	int t; 
	t=(x<y)?x:y;
	cout<<"minimum  is = "<<t;
	
}
