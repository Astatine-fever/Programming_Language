#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() 
{    
    char s1[10]="hello"; 
    char s2[10]="welcome";
    puts(s1);
    puts(s2);
    strcpy(s1,s2);
    puts(s1);
    puts(s2);
    return 0; 
}