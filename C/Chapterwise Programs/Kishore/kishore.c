#include<stdio.h>
#include<stdlib.h>
void main()
{
	char name[250];
	FILE *g;
	g=fopen("c://kishore/Kishore12.txt","r");
	if(g!='NULL')
	{
		printf("File opened\n");
	}
	fscanf(g,"%s \n",&name);
	printf("Text from file = %s",&name);
	fclose(g);
}
