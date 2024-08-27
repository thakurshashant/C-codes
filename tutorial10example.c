#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter three numbers a,b,c");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("your three entered numbers are %d,%d,%d",a,b,c);
    if (a>b>c)
    {
        printf("a is the greatest number among a b c ");
    }
    else if(a>c>b){
        printf("a is the greatest number");
    }
     else if(b>c>a){
        printf("b is the greatest number");
    }
     else if(b>a>c){
        printf("b is the greatest number");
    }
     
     else if(c>a>b){
        printf("c is the greatest number");
    }
     else if(c>b>a){
        printf("c is the greatest number");
    }
    return 0;
}                                                        
