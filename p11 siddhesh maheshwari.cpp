//11.information about item
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
class item
{
	char name[20];
	int id;
	public:
		void getdata(void);
		void printdata(void);		
};
void item::getdata()
{
	cout<<"enter item details"<<endl;
	cin>>name>>id;
}
void item::printdata()
{
	cout<<"name =";
	cout<<name<<endl<<"id ="<<id<<endl;
}
main()
{
	item a;
	a.getdata();
	a.printdata();
}
