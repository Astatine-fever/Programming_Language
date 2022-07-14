// form filling using switchcase 

#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"What is your preferred travelling method ? \n";
	cout<<"\n 1,Car\n 2,Bike\n 3,Bus\n 4,Walk\n";
	cin>>choice;
	switch(choice)
	{
	case 1:
		cout<<" Your preferred travel method is by car \n";
		break;
	case 2:
		cout<<" Your preferred travel method is by bike \n";
		break;
	case 3:
		cout<<" Your preferred travel method is by bus \n";
		break;
	case 4:
		cout<<" Your preferred travel method is by walk \n";
		break;
		
	default:
	cout<<" Please select a valid option \n";
		break;		
	}
return 0;	
}
