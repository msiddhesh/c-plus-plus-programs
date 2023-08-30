/*39 (4.2)  write a program to read a matrix of  size m  x n  from  the keyboard  and 
 di$play the same on the screen using functions.  */
 //2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
void print(int a[100][100],int m,int n)
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
	int a[100][100],m,n,i,j;
	cout<<"enter m and n"<<endl;
	cin>>m>>n;
	cout<<"enter matrix elements"<<endl;
    for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	cin>>a[i][j];
	}
	cout<<endl;}
    print(a,m,n);
}
