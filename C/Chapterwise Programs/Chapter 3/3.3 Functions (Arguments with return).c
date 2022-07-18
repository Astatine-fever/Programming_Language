//Function with Argument and With Result
#include<stdio.h>
#include<conio.h>
int ret(int x,int y);
void main()
{
    int a,b,c;
    printf("Enter value for a and b \n");
    scanf("%d %d",&a,&b);
    c=ret(a,b);
    printf(" %d + %d = %d",a,b,c);
    getch();

}
int ret(int x,int y)
{
    int z;
    z=x+y;
    return z;
}