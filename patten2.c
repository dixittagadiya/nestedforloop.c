#include<stdio.h>
#include<conio.h>
void main()
{
    char a,i,j;

    printf("Enter No:");
    scanf("%c",&a);

    for(i=a;i>='A'; i--)
    {
        for(j=i; j>='A'; j--)
        {
            printf("%c",i);
        }
        printf("\n");
        getch();
    }
}
