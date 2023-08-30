/* 41(4.4)  TM effect of  a default argumen. t .  con.  be  al.t.ernat~iuely  achieued 
by overlooding. Discuss with an exa1nple. */
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
void print(int a[100][100],int m,int n)
{
	cout<<"matrix is for not fixed m"<<endl;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	cout<<a[i][j]<<"  ";
	}
	cout<<endl;}
}
void print(int a[100][100],int n)
{    int m=3;
	cout<<"matrix is for fixed m"<<endl;
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	cout<<a[i][j]<<"  ";
	}
	cout<<endl;}
 }
main ()
{
	int a[100][100],b[100][100],m,n,i,j;
	cout<<"enter m "<<endl;
	cin>>m;
	cout<<"enter n"<<endl;
	cin>>n;
	cout<<"enter matrix elements for m and n"<<endl;
    for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	cin>>a[i][j];
	}
	cout<<endl;}
	cout<<"enter matrix elements for only n"<<endl;
    for(i=0;i<3;i++){
	for(j=0;j<n;j++){
	cin>>b[i][j];
	}

}	print(a,m,n);
	print(b,n);
}
