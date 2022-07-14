//Goto Document
#include<stdio.h>
#include<conio.h>
void main()
{
    int tam,eng,mat,tot;
    float avg;
    tam1:
    printf("Enter Tamil Mark: ");
    scanf("%d",&tam);
    if(tam<0|| tam>100)
    {
     
        printf("Enter mark between 0 to 100 \n");
        goto tam1;
    }
    eng1:
    printf("Enter English Mark: ");
    scanf("%d",&eng);
    if(eng<0|| eng>100)
    {
     
        printf("Enter mark between 0 to 100 \n");
        goto eng1;
    }
    mat1:
    printf("Enter Maths Mark: ");
    scanf("%d",&mat);

    if(mat<0|| mat>100)
    {
     
        printf("Enter mark between 0 to 100 \n");
        goto mat1;
    }

    if(eng>35 && tam >35 && mat>35)
    {
        tot=eng+tam+avg;
        avg=tot/3;
        printf("Tamil:  %d \n",tam);
        printf("English:  %d \n",eng);
        printf("Maths:  %d \n",mat);
        printf("Total:  %d \n",tot);
        printf("Average:  %f \n",avg);
        printf("Result : PASS ");
    }
    
    else
    {
        tot=eng+tam+avg;
        avg=tot/3;
        printf("Tamil:  %d \n",tam);
        printf("English:  %d \n",eng);
        printf("Maths:  %d \n",mat);
        printf("Total:  %d \n",tot);
        printf("Average:  %f \n",avg);
        printf("Result : FAIL ");
    }
getch();
}