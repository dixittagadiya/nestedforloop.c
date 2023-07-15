#include<stdio.h>
#include<conio.h>
 int main()

{
int a,i,j,b,c;

printf("enter the value of a : ");
scanf("%d",&a);

for(i=1;i<=a;i++)
	{
	
		for(j=1;j<=i;j++)
	{
	
	printf("*",i);
    } 
    
	printf("\n");
	
   }

	for(b=a;b>=1;b--)
	
	{
		for(c=b;c>=1;c--)
	{
		printf("*",b);
	}	
		printf("\n");
	}

getch();

}
