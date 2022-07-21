#include<stdio.h>
#include<conio.h>
void main()
{
	char name[250];
	int a,b,c;
	printf("enter 2 numbers");
	scanf("%d %d",&a,&b);
	c=a+b;
	FILE*g;
	g=fopen("c:\\kishore/kishore12.txt","w");
	printf("enter the date to be added\n");
	gets(name);
	fprintf(g,"%s %d",name,c);
	if(feof(g)!=0)
{
	printf("end of the file reached");
}
fclose(g);
}
