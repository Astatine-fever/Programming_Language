#include<stdio.h>
#include<conio.h>
void main()
{
    int starting=0,ending,calc=0;
    printf("Enter Ending Values ");
    scanf("%d",&ending);
    if(starting<ending)
    {
        while(starting<ending)
        {
            printf("%d \n",starting);
            starting+starting+2;
            calc=calc+1;
            if(calc>10 )
                {
                if(starting%2!=0);
                printf("%d \n ",starting);   
                }        
        }
    }
    else
    {
    printf("Enter a number greater than 0");
    }
    getch();
}                   