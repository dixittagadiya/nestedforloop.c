#include<stdio.h>
#include<conio.h>
main()
{
    int a,i,j;

    printf("Enter No:");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        for(j=1; j<=a; j++)
        {
            if( i==1 || i==a || j==1 || j==a || i==j || j+i==a)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    getch();
}
