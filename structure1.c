#include<stdio.h>
struct amount
{
int ac_no;
char name[10];
int balance;
};
void main()
{
struct amount v;
printf("\nEnter the account Details");
scanf("%d%s%d",&v.ac_no,&v.name, &v.balance);
printf("The values are %d%s%d",v.ac_no,
v.name, v.balance);
printf("%d",sizeof(struct amount));
}
