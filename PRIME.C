#include<stdio.h>
int main()
{
    int a,b,sum=0;
     printf("enter two number");
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i =a+1;i<b;i++){
        int temp=0;
        for (int j =2;j<i;j++){
if(i%j==0){
    temp++;
}
        }
        if(temp==0){
            sum=sum+i;
        }
    }
    printf("%d",sum);
}