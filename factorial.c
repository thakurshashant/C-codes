#include<stdio.h>
int main()
{
    int s=1,n,i;
    printf("enter the number you want factorial of :");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        s=s*i;
            
    }
    printf("the factorial of %d is %d",n,s);
    return 0;
}