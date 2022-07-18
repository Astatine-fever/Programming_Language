// two dimensional array
#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],i,j;
printf("Enter Values inside array \n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&a[i][j]);//i--> Rows j--> Colunns
    }
}

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d \t",a[i][j]);//i--> Rows j--> Colunns
    }
    printf("\n");
}
getch();
}