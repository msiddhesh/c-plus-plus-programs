/*16. Write a program to print the following output using for loops. 
1 
22 
333 
4444 
55555
......*/
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
main()
{
	int i,j,n;
	cout<<"enter loop size ";
	cin>>n;
	for(i=1;i<=n;i++){
    for(j=0;j<i;j++){
	cout<<i;  }
    cout<<endl;}

}
