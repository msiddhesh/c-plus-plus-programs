//12 read student details and display
//2019imsmt21 siddhesh mahewshwari
#include<iostream>
using namespace std;
class student
{
	char name[20];
	char program[30];
	public:
		void getdata(void);
		void printdata(void);		
};
void student::getdata()
{
	cout<<"enter student  details"<<endl;
	cin>>name>>program;
}
void student::printdata()
{
	cout<<"name =";
	cout<<name<<endl<<"program ="<<program<<endl;
}
main()
{

	student a;
	a.getdata();
	a.printdata();
}
