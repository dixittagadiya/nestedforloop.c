#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;

    printf("Enter The Value:");
    scanf("%d",&a);

    for(i=2; i<=a; i+=2)
    {
        printf("%d\t",i);
    }

    getch();
}
