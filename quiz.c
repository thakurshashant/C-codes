#include<stdio.h>

void swap(int*x,int*y)
{
    int s,k,sum,difference;
    s=*x+*y;
    *x=s;
    *y=10;
    k=*x-*y;
    *y=k;
    return;
    
}
int main()
{
    int a=6,b=5;
    printf("the value of a is %d and the value of b is %d\n",a,b);
    swap(&a, &b);
    printf("the value of a is %d and of b is %d",a,b);
    
    return 0;
}