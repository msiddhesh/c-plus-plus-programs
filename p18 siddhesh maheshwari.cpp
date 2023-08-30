/*18. An electron is contested by five candidates.The candidates are numbered 1 to
 5  Write a program to read the ballots and count thevotes cast for each candidate 
using an array variable count. In case, a number read is outside the range 1 to 5
, the ballot should be considered as a ‘spoilt ballot’, and the program should 
also count the number of spoilt ballotsand the voting is done by making the candidate number on the ballot paper. 
. */
// 2019imsmt021 siddhesh maheshwari
#include<iostream>
using namespace std;
main()
{
	int t[500],count[5],counts=0,n,i;
	count[1]=count[2]=count[3]=count[4]=count[5]=0;
	cout<<"enter voters numbers";
	cin>>n;
	cout<<"for each candidate enter his number for 1,2,3,4,5 respectivly enter 1,2,3,4,5 \nfor spoil type any number  ";
	cout<<endl<<"enter votes"<<endl;
	for(i=0;i<n;i++)
	cin>>t[i];
	for(i=0;i<n;i++){
		
		if(t[i+1]==1)
		count[1]++;
		else
		if(t[i+1]==2)
		count[2]++;
		else
		if(t[i+1]==3)
		count[3]++;
		else
		if(t[i+1]==4)
		count[4]++;
		else
		if(t[i+1]==5)
		count[5]++;
		else
		counts++;
	}
	cout<<"candidate vote"<<endl;
	for(i=1;i<=5;i++)
	cout<<i<<"      "<<count[i]<<endl;
	cout<<"spoil vote ="<<counts;
}
