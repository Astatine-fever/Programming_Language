// two dimensional array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2][2],i,j,k;
printf("Enter Values inside array \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        for(k=0;k<2;k++)
        {
            scanf("%d",&a[i][j][k]);//i--> Rows j--> Colunns
        }
        
    }
}

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        for(k=0;k<2;k++)
        {
            printf("%d \t",a[i][j][k]);//i--> Rows j--> Colunns k--> No of Matrix
        }
        printf("\n");       
    }
    
}
getch();
}