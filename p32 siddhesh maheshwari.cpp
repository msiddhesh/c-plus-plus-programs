/*32. Write a program to define function value() having default arguments. */
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
float value(float p,int n,float r=0.15)
{
	int year=1;
	float sum=p;
	while(year<=n)
    {
    	sum=sum*(1+r);
    	year++;
	}
    return(sum);
}
main()
{
	float amount;
	amount=value(500,2);
	cout<<"amount ="<<amount;
}
