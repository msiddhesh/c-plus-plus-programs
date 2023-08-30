/*15.Write a function that creates a vector of user given size M using new operator.*/
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std; 
void fun  (int s)
{
	int i,*t;
	t=new int[s];
	for(i=0;i<s;i++)
	cin>>*(t+i);
	for(i=0;i<s;i++)
	cout<<*(t+i);
}
main ()
{
	int m;
	cout<<"enter size";
	cin>>m;
	fun(m);
	
}
