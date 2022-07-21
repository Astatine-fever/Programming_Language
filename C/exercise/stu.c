#include<stdio.h>
#include<conio.h>
struct raji
{
    int a;
}ra[3];
void main()
{
    printf("Enter 2 Numbers\n");
    scanf("%d %d",&ra[0].a,&ra[1].a);
    ra[2].a=ra[0].a+ra[1].a;
    printf("first value : %d \n second value : %d \n third value: %d",ra[0].a,ra[1].a,ra[2].a);


}