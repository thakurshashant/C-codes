#include<stdio.h>
int main()
{
    int a;
    printf("enter a number \n");
    scanf("%d",&a);
    if(a%2==0)
    {
    printf("%d=a is even number");
    }
    if(a%2!=0){
    printf("entered number is odd number");
    }    
    return 0;
}
