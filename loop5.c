#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;

    printf("Enter The Value:");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        printf("1",a);
    }
    printf("\n");
     for(i=1; i<=a; i++)
    {
        printf("*",a);
    }
    printf("\n");
    getch();
}
