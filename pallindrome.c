#include<stdio.h>
int main()
{
    int n,remainder,original,sum=0;
    printf("enter the number you want to check whether is pallindrome or not:");
    scanf("%d",&n);
    original=n;
    while (n>0)
    {
        remainder=n%10;
        sum=sum*10+remainder;
        n=n/10;
        
    }
    if (sum==original)
    {
        printf("the entered number is pallindrome");
    }
    else
    {
        printf("the entered number is not pallindrome");
    }
    return 0;
}