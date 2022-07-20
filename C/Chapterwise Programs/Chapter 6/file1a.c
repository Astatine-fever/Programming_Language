// Files Operations in C { File Opening , Writing something to a file , Closing a file }

#include<stdio.h>
#include<stdlib.h>
void main()
{
char name[250];
int a,b,c;
printf("Enter 2 numbers ");
scanf("%d %d",&a,&b);
c=a+b;
FILE *g; // File Keyword along with pointer variable for the file 
g=fopen("c://sample/prasanna1.txt","w"); // fopen command opens the document..(Then the file path)

printf("Enter the data to be added \n");
//scanf("%s",&name); // Input gets from user 

gets(name);

fprintf(g,"%s %d",name,c); // fprintf is a keyword .. it prints the statement to document 

if(feof(g)!=0)
{
	printf("End of file reached");
}
fclose(g); 
// closes and saves the document 
}
