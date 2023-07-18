#include<stdio.h>
#include<conio.h>
void main()
{
    int a,j,i;

    printf("Enter NO:");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        printf("\n");
        for(j=a; j>=i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        getch();
    }
}