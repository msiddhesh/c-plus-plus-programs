/* 29. Write a program to find maximum using function return by reference. */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
void max(int &x,int &y,int &z);
main()
{
	int a,b,c;
	cout<<"enter first number ";
	cin>>a;
	cout<<"enter second number ";
	cin>>b;
	cout<<"enter third number ";
	cin>>c;
	max(a,b,c);

}
void max(int &x,int &y,int &z)
{
	int t; 
	t=(x>y)?x:y;
	t=(t>z)?t:z;
	cout<<"maximum  is = "<<t;
	
}
