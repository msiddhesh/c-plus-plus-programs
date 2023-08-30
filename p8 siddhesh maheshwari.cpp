//8. sorting of array
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
main ()
{
	int j,t,i,n,a[100];
	cout<<"enter array size"<<endl;
	cin>>n;
	cout<<"enter array element"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	for(j=i;j<n;j++)
	{
		if(a[i]<a[j]){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}}
		
		cout<<"sorted array is="<<endl;
		for(i=0;i<n;i++)
		cout<<a[i]<<"  ";
}
