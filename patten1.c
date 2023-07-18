#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    char a;

    printf("Enter the value of A:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        a='A';
        for(j=1; j<=n; j++)
        {
            printf("%c",a);
            a++;
        }
    
          printf("\n");
     
    }    
}