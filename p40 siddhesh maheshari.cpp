/* 40(4.3)  Rewrite the program of  Exercise 4.2 to make  the row parameter  of  that 
 matrix as a default argument. */
 //2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
void print(int a[100][100],int n,int m=3)
{
	cout<<"matrix is"<<endl;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	cout<<a[i][j]<<"  ";
	}
	cout<<endl;}
 } 
main ()
{
	int a[100][100],n,i,j;
	cout<<"enter n "<<endl;
	cin>>n;
	cout<<"enter matrix elements"<<endl;
    for(i=0;i<3;i++){
	for(j=0;j<n;j++){
	cin>>a[i][j];
	}
	cout<<endl;}
    print(a,n);
} 
