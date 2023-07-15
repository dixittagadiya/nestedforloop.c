#include <stdio.h>
#include <conio.h>
void main()
{
    int j,a,i;

    printf("Enter The Value A:");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d\t",a);
        }
        printf("\n");
    }
}
