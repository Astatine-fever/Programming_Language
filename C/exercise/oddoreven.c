#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    gather:
    printf("Enter Starting value : ");
    scanf("%d",&a);
    printf("Enter Ending value : ");
    scanf("%d",&b);

if(a%2==0 && a!=b)
{
    if(a>b) // a value is bigger than b value 
    {
       for(;a>b;)
       {
        printf("%d",a);
        a=a-2;
       } 
    }

    else // b value is bigger than a value
    {
        for(;b>a;)
    {
        printf("%d",b);
        b=b-2;
    }

    }
    
}

else if(a%2!=0 && a!=b)
{
    
    if(a<b) // if a value is less than b value 
    {
        for(;b>a;)
        {
            printf("%d",b);
            b=b-2;
        }
    }

    else // if a value is bigger than b value 
    {
         for(;a>b;)
        {
            printf("%d",a);
            a=a-2;
        }
    }


}

else if(a==b)
{
    printf(" Both values are equal ... \n please re enter ");
    goto gather;
}
getch();
}