#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x,y;
    printf("enter the coefficeints of the quadratic equation:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x=((-b)+(sqrt((b*b)-4*a*c)))/2*a;
    y=((-b)-(sqrt((b*b)-4*a*c)))/2*a;
    printf("the root of equation is %f",x);
    printf("\nthe root of equation is %f",y);
    return 0;
}
