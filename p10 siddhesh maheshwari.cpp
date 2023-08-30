/*10. Write a C++ program to read two matrices and add them using
 function. */
// 2019 imsmt021 siddhesh maheshwari p10
#include<iostream>
void add(int x[100][100],int y[100][100],int p,int q);
using namespace std;
main ()
{
	int a[100][100],b[100][100],c[100][100],m,n,i,j;
	cout<<"enter size of metrix";
	cin>>m>>n;
	cout<<"enter first metrix"<<endl;
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	cin>>a[i][j];}
	cout<<endl;}
	cout<<"enter second metrix"<<endl;
    for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	cin>>b[i][j];}
	cout<<endl;}
	add(a,b,m,n);
}
void add(int x[100][100],int y[100][100],int p,int q)
{    int c[100][100],i,j;
	cout<<"addtion of metrix"<<endl;
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
	c[i][j]=x[i][j]+y[i][j];
	for(i=0;i<p;i++){
	
	for(j=0;j<q;j++){
	
	cout<<c[i][j]<<" ";}
	cout<<endl;
}
}
