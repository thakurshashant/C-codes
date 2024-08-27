#include<stdio.h>
int main()
{
    /* here atlast there happens swapping of variables so that the series gets increasing continuously
    and the first two values are already assigned so the loop will start from 3*/
    int a=0,b=1,i,n,c;
    printf("enter the range you want fibonacii series upto\n");
    scanf("%d",&n);
    printf("%d\t",a);
    printf("%d\t",b);
    for ( i = 3; i <= n ; i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    


    return 0;
}