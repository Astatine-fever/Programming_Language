// Bitwise Operator

#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,f,g,h,i;
cout<<"Enter the value of A \n";
cin>>a;
cout<<"Enter the value of B \n";
cin>>b;
c=a<<2;
d=a>>2;
e=a&b;
f=a|b;
g=a^b;
h=~a;
i=~b;
cout<<"bitwise operator examples\n"<<a;
cout<<" The value of A = " <<a; 
cout<<" \n The Value of B = " <<b;
cout<<"\n Left  Shift Operation of A = "<<c;
cout<<"\n Right Shift Operation of A = "<<d;
cout<<"\n The Bitwise AND Operation of A,B = "<<e;
cout<<"\n The Bitwise OR	Operation of A,B = "<<f;
cout<<"\n The Bitwise Exclusive OR of A,B = "<<g;
cout<<"\n Bitwise ones Compliment of A ="<<h;
cout<<"\n Bitwise ones Compliment of B ="<<i;
return 0;
}
