#include <stdio.h>
#include <conio.h>
void main()
{
    int j,i,a;

    printf("Enter No:");
    scanf("%d",&a);

    for (i = 1; i <=a; i++)
    {
        for ( j = 1; i <=i; j++)
        {
            printf("%d",i%2);
        }

        printf("\n");
        getch();
        
    }
    
}
