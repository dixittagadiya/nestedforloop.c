#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j,r,t;

    printf("Enter The No:");
    scanf("%d",&a);

    for (r = a; r >=1; r--)
    {
        for(t = r; t>=1; t--)
        {
            printf("*",r);
        }
        printf("\n");
    }

    for (i = 2; i <=a; i++)
    {
        for(j = 1; j<=i; j++)
        {
            printf("*",i);
        }
        printf("\n");
    }

getch();    
    
}