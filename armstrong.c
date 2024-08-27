#include<stdio.h>
int main()
{
    int sum=0,i,r,original,n;
    printf("enter the three digit number you want to check is armstrong or not: ");
    scanf("%d",&n);
    original=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;

    }
    if(sum==original)
    {
        printf("entered number is armstrong");
    }
    else{
        printf("entered number is not armstrong");
    }

    return 0;
}