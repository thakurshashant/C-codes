#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,d,e,f;
    printf("select the task you want to perform out of following\n 1.addition\n 2.substraction\n 3.multiplication\n 4.division\n");
    scanf("%d",&n);
    switch (n)
    {
        case '1':
        printf("enter the first number:\n");
        scanf("%d",&a);
        printf("enter the first number:\n");
        scanf("%d",&b);
        c=a+b;
        printf("sum of the entered two number is %d",c);
        break;

        case '2':
        printf("enter the first number:\n");
        scanf("%d",&a);
        printf("enter the first number:\n");
        scanf("%d",&b);
        d=a-b;
        printf("substraction of the entered two number is %d",d);
        break;

        case '3':
        printf("enter the first number:\n");
        scanf("%d",&a);
        printf("enter the first number:\n");
        scanf("%d",&b);
        e=a*b;
        printf("multiplication  of the entered two number is %d",e);
        break;

        case '4':
        printf("enter the first number:\n");
        scanf("%d",&a);
        printf("enter the first number:\n");
        scanf("%d",&b);
        f=a/b;
        printf("division of the entered two number is %d",f);
        break;

    default:
        break;
    }
    getch ();
    return 0;
}