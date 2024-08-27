#include<stdio.h>
int sum(int a, int b);
void printstar(int n)
{
    for ( int i= 0 ; i < n; i++)    
    {   
        printf("%c \n", '*');
    }
    
   
}


int takenumber() 
{
    int i;
    printf("enter a number=");
    scanf("%d", &i);
    return i;
}
void fn()
{
    int s;
    printf("enter your second number=");
    scanf("%d", &s);
    printf("your second entered number is =%d\n",s);

}

int main()  
{
    int a,b,c,s;
    a=9;
    b=87;
    c=sum(a,b);
    printstar(7);
    c=takenumber();
    fn();
    /*printf("the sum is %d \n", c);*/
    printf("the entered first number is %d\n", c);
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}