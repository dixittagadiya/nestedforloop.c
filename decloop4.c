#include<stdio.h>
struct emoloyee
{
    int age;
    unsigned long long int mobile_no;
    char emp_name[10],emp_add[50];
};
int main()
{
struct employee obj[5];
for(int i=0;i<5;i++)

printf("enter employee name : ");
scanf("%s",obj[i].emp_name);

printf("enter employee age : ");
scanf("%d",&obj[i].age);

printf("enter employee address : ");
scanf("%s",obj[i].emp_add);

printf("enter employee mobile no : ");
scanf("%ld",obj[i].mobile_no);


for(int i=0;i<5;i++)
printf("your name is %s",obj[i].emp_name);
printf("your age is %s",obj[i].age);
printf("your address is %s",obj[i].emp_add);
printf("your mobile no is %s",obj[i].mobile_no);

return 0;

}
