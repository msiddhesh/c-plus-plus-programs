/* 5.  Write a C++ program that will ask for a temperature in Fahrenheit and 
display it in Celsius. */
// 2019 imsmt021 siddhesh maheshwari p5
#include<iostream>
using namespace std;
main()
{
	float TC,TF;
	cout<<"enter temperature in forhrenheits"<<endl;
	cin>>TF;
	TC=(TF-32)*(5)/(9);
	cout<<"temperature in celcius is "<<TC;
}
