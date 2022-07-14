//sorting based on number
#include<stdio.h>
#include<conio.h>
void main()
{
    int starting,ending,in;
    printf("Enter Starting Value :");
    scanf("%d",&starting);
    printf("Enter Ending Value:");
    scanf("%d",&ending);
    printf("Enter Increment value:");
    scanf("%d",&in);
    while(starting<ending)
    {
        printf("%d \n");
        starting=starting+in;
    }
    while(starting>ending)
    {
        printf("%d \n");
        starting=starting-in;
    }
    if(starting==ending)
    {
        printf("Both numbers are same");
    }
    getch();
}