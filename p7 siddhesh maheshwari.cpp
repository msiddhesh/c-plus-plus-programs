//7. read two array and find sum of them in third array
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
main ()
{
	int i,n,a[100],b[100],c[200];
	cout<<"enter array size";
	cin>>n;
	cout<<"enter fisrt array element"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter second array element"<<endl;
	for(i=0;i<n;i++)
	cin>>b[i];
	for(i=0;i<n;i++)
	c[i]=a[i]+b[i];
	cout<<"added array is "<<endl;
	for(i=0;i<n;i++)
	cout<<c[i]<<"  " ;
}
