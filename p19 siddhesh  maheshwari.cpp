/*19. A cricket team has the following table of batting figures for a series of test matches: 
Player’s name    Runs    Innings    Times not out 
Sachin      8430    230    18 
Saurav      4200    130    9 
Rahul      3350    105    11 
 ...
Write a programto read the figures set out in the above form, to calculate the batting 
average and to print out the complete table including the averages. */
//2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
class team
{
    char name[30];
    int run,ing,nout;
    float avg;
	public:
	
	void getdata()
	{
		cin>>name>>run>>ing>>nout;
	}
		void avgr()
		{
			avg=(run)/(ing);
		}
	
	void printdata()
	{
		cout<<name<<"  "<<run<<"  "<<ing<<"  "<<nout<<"  "<<avg<<endl;
	}
};
main()
{
	team a[11];
	int n,i;
	cout<<"enter palyer number "<<endl;
	cin>>n;
	for(i=0;i<n;i++){
	cout<<"enter "<<i+1<<"player detail"<<endl;
	
	a[i].getdata();
}
    for(i=0;i<n;i++)
	a[i].avgr();
	cout<<"name       run      ing        notout     avrage"<<endl;
    for(i=1;i<=n;i++)
	a[i].printdata();
}
