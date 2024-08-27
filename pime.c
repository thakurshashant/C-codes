#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    int start, end, num, count, prime, temp, inum;  
  
    printf("Enter start and end value\n");  
    scanf("%d%d", &start, &end);  
  
    if(start > end)  
    {  
        temp = start;  
        start= end;  
        end  = temp;  
    }  
  
    printf("Prime Numbers between %d and %d are\n", start, end);  
  
    for(num = start; num <= end; num++)  
    {  
        prime = 1;  
        inum  = sqrt(num);  
        for(count = 2; count <= inum; count++)  
        {  
            if(num % count == 0)  
            {  
                prime = 0;  
                break;  
            }  
        }  
  
        if(prime) printf("%d\t", num);  
    }  
  
    return 0;  
} 