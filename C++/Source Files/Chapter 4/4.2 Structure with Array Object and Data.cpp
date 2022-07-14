// Structure with Array Object and Data in C++

#include<iostream>
using namespace std;
struct tesla // Structure with array data type and array objects 
{
	int a[5];
	char name[20];
}sc[3];// object with array properties 
int main()
{
	int sn=1,ms,total,sum;
	char result;
	for(;sn<=3;sn++)
	{
		
		cout<<"Enter Name : \t";
		cin>>sc[sn].name;
		for(ms=1;ms<=3;)
		{
			cout<<"Enter Mark"<<ms<<"\t";
			cin>>sc[sn].a[ms];
			ms++;
		}
		
    }
			
	for(sn=1;sn<=3;sn++)
	{
		cout<<"\nStudent Name:"<<sc[sn].name<<"\n";
		sum=0;
		for(ms=1;ms<=3;ms++)
		{ 
		  
		  if(sc[sn].a[ms]>34)
 		  {	
		   cout<<"Mark "<<ms<<": "<<sc[sn].a[ms]<<"---- Pass \n ";
		   sum=sum+sc[sn].a[ms];
		  }			
		  else
		  { 
		   cout<<"Mark "<<ms<<": "<<sc[sn].a[ms]<<"---- Fail \n ";
		   sum=sum+sc[sn].a[ms];
		  }
		  
	    } 
		cout<<"Total:"<<sum;
	}			
}
