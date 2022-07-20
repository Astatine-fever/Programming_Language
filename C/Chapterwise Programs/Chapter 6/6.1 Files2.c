// Files Operations in C { Getting Input from a file,  Closing a file }
#include<stdio.h>
#include<stdlib.h>
void main()
{
char name[250];
FILE *g; // File Keyword along with pointer variable for the file  
g=fopen("c://sample/prasanna1.txt","r"); // fopen command opens the document..(Then the file path), r = read a file 
if(g!='NULL') // IF function here is not needed its just for confirmation of file being created
{
printf("File Opened \n");
}
fscanf(g,"%s \n",&name); // Input gets from user 
//fputs(name,g);
//fprintf is a keyword .. it prints the statement to document 
printf("Text from file = %s",&name);
fclose(g); // closes and saves the document 
}
