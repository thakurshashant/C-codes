#include<stdio.h>

void starpattern(int rows)
{
    printf("enter the number of rows you want of star pattern:\n");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }    
        printf("\n");
    }
}

void reversestarpattern(int rows)
{
    printf("enter the number of rows you want of star pattern:\n");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows-i-1; j++)
        {
            printf("*");
        }    
        printf("\n");
    }
}
int main()
{
    int rows,k;
    printf("enter 0 for star pattern and 1 for reverse star pattern:\n ");
    scanf("%d",&k);
    if (k==0)
    {
        starpattern(rows);
    }
    else
    {
        reversestarpattern(rows);
    }
    
    return 0;
}