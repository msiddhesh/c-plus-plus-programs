/* 22. Write a program to calculate the variance and standard deviation of N numbers. 
Variance= 1/N ?(x1-xmean)^2 
Standard Deviation = (Variance)^1/2  */
//2019imsmt021 siddhesh maheshwari
#include<iostream>
#include<math.h>
using namespace std; 
main ()
{
	int n,i,Xm,X[100],sum=0,sum1=0,x=0;
	float V,sd;
	cout<<"enter size ";
	cin>>n;
	cout<<"enter Xi terms";
	for(i=1;i<=n;i++)
    {
	cin>>X[i];
	sum=sum+X[i];
	}	
    Xm=(sum)/n;
    for(i=1;i<=n;i++)
    {
	sum1=X[i]-Xm;
	x=x+sum1*sum1;
	}	
	V=x/n;
	sd=sqrt(V);
	cout<<"sum = "<<sum<<endl<<"sum1 = "<<sum1<<endl<<"Xm = "<<Xm<<endl<<"varience = "<<V<<endl<<"Standard deviation = "<<sd;
}
