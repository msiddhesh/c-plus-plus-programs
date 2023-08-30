/*4.  Write a program to read the value of a, b and c and display the value of x, where  
          x=alb - c  
Test your program for the following values:  
(a)  a =250. b =85, c = 211 (b) a = 300. b = 70, c = 70 */
// 2019 imsmt021 siddhesh maheshwari p4
#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	float x;
	cout<<"enter the value of a,b,c";
	cin>>a>>b>>c;
	x=(a/b)-c;
	cout<<"value of x is "<<x;
}
