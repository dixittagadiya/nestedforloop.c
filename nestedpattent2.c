#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j,n,m;
    
    printf("Enter No:");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        for(j=i; j<a; j++)
        {
            printf(" ");
        }
        for(n=1; n<=i; n++)
        {
        	for(m=1; m<=n; m++)
        	{
			
        	  printf("*");
            }
		}
        printf("\n");
        getch();
    }
}
