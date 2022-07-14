#include<stdio.h>
#include<conio.h>
struct tesla // Structure with array data type and array objects 
{
	int a[5];
	char name[20];
}sc[3];// object with array properties 
void main()
{
	int sn=1,ms,total,sum;
	char result;
	for(;sn<=3;sn++)
	{
		
		printf("Enter Name : \t");
		scanf("%s",&sc[sn].name);
		for(ms=1;ms<=3;)
		{
			printf("Enter Mark %d: \t",ms);
			scanf("%d",&sc[sn].a[ms]);
			ms++;
		}
		
    }
			
	for(sn=1;sn<=3;sn++)
	{
		printf("\nStudent Name: %s \n",sc[sn].name);
		sum=0;
		for(ms=1;ms<=3;ms++)
		{ 
		  
		  if(sc[sn].a[ms]>34)
 		  {	
		   printf("Mark %d : %d  ---- Pass \n ",ms,sc[sn].a[ms]);
		   sum=sum+sc[sn].a[ms];
		  }			
		  else
		  { 
		   printf("Mark %d : %d  ---- Fail \n ",ms,sc[sn].a[ms]);
		   sum=sum+sc[sn].a[ms];
		  }
		  
	    } 
		printf("Total: %d",sum);
	}			
}
