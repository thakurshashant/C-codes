#include<stdio.h>
long factorial(int n)
{
if(n==0)
{
    return 1;
}
else
{
    return (n*factorial(n-1));
}
}



void main()

{
    int a;
    int number;
    long fact;
    printf("enter the number you want to find factorial of :");
    scanf("%d",&a);
    fact=factorial(a);
    printf("\n the factorial of entered number is %ld",fact);
    
   
}