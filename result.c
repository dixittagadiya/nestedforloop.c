#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c,d,total,per;

    printf("Enter the mark blow in\n");
    
    printf("Gujarati:-");
    scanf("%d",&a);

    printf("Hindi:-");
    scanf("%d",&b);

    printf("Mathe:-");
    scanf("%d",&c);

    printf("English:-");
    scanf("%d",&d); 

    total= a+ b + c + d;

    printf("\ntotal in %d out of 400 ", total);

    per= total / 4;

    printf("\n percent is %d", per);

    if (per >=71)
    {
        printf("\nDistinction");
    }
   else if (per >= 60 && per<=70)
   {
    printf("\nFirst Class");
   }

   else if ( per>= 50 && per<=60)
   {
    printf("\nSecond Class");
   }

   else if ( per>= 40 && per<=50)
   {
    printf("\nPass Class");
   }

   else
   {
    printf("\nFail"); 
   }

   getch();

}
