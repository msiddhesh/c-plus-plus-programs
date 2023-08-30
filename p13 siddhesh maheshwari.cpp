// 13. Write a C++ program to read five subject marks and find the percentage. 
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	float sum,per;
	cout<<"enter fiv subject marks"; 
	cin>>a>>b>>c>>d>>e;
	sum=(a+b+c+d+e);
	per=(sum)/5;
	cout<<"percent is "<<per<<"%";
}
