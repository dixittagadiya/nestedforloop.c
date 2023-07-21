#include<stdio.h>
#include<conio.h>
void main()
{
    char a,i,j;

    printf("Enter No:");
    scanf("%c",&a);

    for(i='A';i<=a; i++)
    {
        for(j='A'; j<=i; j++)
        {
            printf("%c",j);
            
        }
        printf("\n");
    }
   
    
	
     for(i=a-1; i>='A'; i--)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        
        printf("\n");
        getch();
    }
}
