#include<stdio.h>
int main()
{
    int a[10];
    int i,size,total=0;
    printf("\n enter the size of the array:");
    scanf("%d",&size);
    printf("\n enter the elements of the array ");
    for ( i = 0; i <size; i++)
    {
        scanf("%d",&a[i]); 
    }
    for ( i = 0; i < size; i++)
    {
        total=a[i]+total;
    }
    printf("\n the sum of the array elements is :%d ",total);
    
    return 0;
}