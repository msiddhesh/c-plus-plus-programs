/*27. Write a program to use max() using function return by reference. */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
void max(int &x,int &y);
main()
{
	int a,b;
	cout<<"enter first number ";
	cin>>a;
	cout<<"enter second number ";
	cin>>b;
	max(a,b);

}
void max(int &x,int &y)
{
	int t; 
	t=(x>y)?x:y;
	cout<<"maximum  is = "<<t;
	
}
