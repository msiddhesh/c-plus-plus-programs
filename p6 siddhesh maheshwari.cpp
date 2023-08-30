/*6.  Redo p5 [Write a C++ program that will ask for a temperature in Fahrenheit
 and display it in Celsius] 
using a class called temp and member functions */
// 2019 imsmt021 siddhesh maheshwari p3
#include<iostream>
using namespace std;
class temp 
{
	float TF;
	public:
		float fontoce(void);
		void getdata(void);
		
};
float temp::fontoce(void)
{
	float TC;
	TC=(TF-32)*(5)/(9);
	return(TC);
}
void temp::getdata()
{
	cout<<"enter tem in fahrenheits";
	cin>>TF;
}
main()
{
	temp a;
	float TC;
	a.getdata();
	TC=a.fontoce();
	cout<<"tem in celcius is ";
	cout<<TC;
}
