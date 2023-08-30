/* 38(4.1)  Write a function  to read a matrix of  size m  x n  from  the keyboard. */
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
void read(int m,int n)
{
	int a[m][n];
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	cin>>a[i][j];
	}
	cout<<endl;}
	cout<<"matrix is"<<endl;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	cout<<a[i][j]<<"  ";
	}
	cout<<endl;}
}
main()
{
	int m,n;
	cout<<"enter m and n"<<endl;
	cin>>m>>n;
	cout<<"enter matrix elements"<<endl;
	read(m,n);
}
