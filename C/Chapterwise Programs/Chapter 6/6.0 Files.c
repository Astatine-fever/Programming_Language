// Files Operations in C { File Opening , Writing something to a file , Closing a file }

#include<stdio.h>
#include<stdlib.h>
void main()
{
char name[250];
FILE *g; // File Keyword along with pointer variable for the file 
g=fopen("c://sample/prasanna.txt","w"); // fopen command opens the document..(Then the file path)
if(g!='NULL') // IF function here is not needed its just for confirmation of file being created
{
printf("File created \n");
}
printf("Enter the data to be added \n");
//scanf("%s",&name); // Input gets from user 

gets(name);
fprintf(g,"%s",name); // fprintf is a keyword .. it prints the statement to document 

if(feof(g)!=0)
{
	printf("End of file reached");
}
fclose(g); 
// closes and saves the document 
}
