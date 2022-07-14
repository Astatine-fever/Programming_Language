// A sample program for increment and decrement functions 

#include<stdio.h>
#include<conio.h>
void main()
{
int a=6;
a= a-- - --a + a-- + a-- - --a + --a;
printf("A = %d \n",a);
getch();
}

/* 
    in A--\A++ the value remains same when assigning and the increment and decrement function is executed before moving to the next operation 
	in --A\++A the increment / decrement operation is first executed then it assigns the value before moving to the next operation  
	
	In this program when the value is assigned to itself 
    
       (22)(21)     (20)   (19) (18)  (17)  ---------> Decrement Operations  
      a-- - --a  +  a-- +  a-- - --a + --a
     23   -  21  + 21   + 20   -  18 +  17  ---------> Value to be calculated 
	 
	 so the answer is  42
 */ 

 
 
