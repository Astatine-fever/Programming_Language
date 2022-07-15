#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    sathya:
    printf("Enter a number between 0 to 100");
    scanf("%d",&a); 
    if(a<0 || a>100)
    {
        printf("invalid limit");
        goto sathya;
    }
    for(i=0;i<a;i++)
    {
        printf("%d ,",i);
    }

}
