#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x_o,x_i;
    printf("enter the quadratic coefficients");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    x_o=(-b+(sqrt((b*b)-4*a*c)))/2*a;
    x_i=(-b-(sqrt((b*b)-4*a*c)))/2*a;
    printf("the root of equation is %f",x_o);
    printf("the root of equation is %f",x_i);
    return 0;
}
