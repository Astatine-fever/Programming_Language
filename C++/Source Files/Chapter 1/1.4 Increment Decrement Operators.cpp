#include<iostream>
#include<conio.h>
main()
{
int a=5,b=5,c;
std::cout<<"A = "<<a<<"\n";
std::cout<<"B = "<<b<<"\n";
c=b++ - ++b + b-- + b++ + b-- - --b;
a=a++ - ++a + a-- + a++ + a-- - --a;
std::cout<<"A = "<<a<<"\n";
std::cout<<"C = "<<c<<"\n";
getch();
}
