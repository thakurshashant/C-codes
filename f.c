#include<stdio.h>

 void fn();

int main()  
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("%c\n", '*');
    }
    
    fn();
    return 0;
}
 void fn()
 {
    int a;
    printf("enter a number=");
    scanf("%d",&a);
    printf("your entered number is=%d\n",a);
 }
