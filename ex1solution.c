#include<stdio.h>

int main()
{
    int n;
    printf("enter the number you want multiplication table of=\n");
    scanf("%d", &n);

    printf("multiplication table of %d is as follows:\n",n);
    for (int i = 1; i < 11; i++) 
    {
        printf("%d x %d = %d\n", n,i, n*i);
    }
    
    return 0;
}
