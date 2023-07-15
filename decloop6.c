#include <stdio.h>
#include <conio.h>
void main()
{
    int a,i,factorial=1;

    printf("Enter No:");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    
        factorial = factorial * i;
        printf("factorial of %d is = %d\n",a,factorial);
    
    getch();
}
