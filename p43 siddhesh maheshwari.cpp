/* 43. redo p 42 using inline function */
//2109imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
inline largest(int a,int b,int c)
{
	return (a>b)?(a>c?a:c):(b>c?b:c);
}
main ()
{
	int x,y,z;
    cout<<"enter three integers "<<endl;
    cin>>x>>y>>z;
    cout<<"largest is "<<largest(x,y,z);
}
