#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    scanf("%d",&a);
    if(a<=20)
    {   
        printf(" The Given number is less than 20");
        if(a>=0 && a<=10)
        {
            printf(" The given number is between 0 to 10");
           if(a>=5)
           {
            printf(" thegiven number is between 5 - 10");
           } 

           else
           {
            printf(" the given number is below 5 \n ");
           }
        }

        else if (a>10 && a<=20)
        {
            printf(" The given number is between 11 - 20");
        }

        else 
        {
            printf(" The given number is below 0");
        }
    }

    else
    {
        printf(" The given number is above 20");
    }
}