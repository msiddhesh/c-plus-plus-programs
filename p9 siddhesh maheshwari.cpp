//9. read array find maximum and minimum 
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
main ()
{
	int i,n,a[100],max,min;
	cout<<"enter array size"<<endl;
	cin>>n;
	cout<<"enter array element";
	for(i=0;i<n;i++)
	cin>>a[i];
	max=min=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
    cout<<"maximum is ="<<max<<endl;
    cout<<"minimum is ="<<min;
}

