#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
   char strng1[50] ,strng2[50] ;
   scanf("%s %s",&strng1,&strng2);

   printf ( "\nSource string = %s", strng1) ;
   printf ( "\nTarget string = %s", strng2) ;

   strcat(strng1,strng2);

   printf("\nTarget string after strcat() = %s \n", strng1) ;
}