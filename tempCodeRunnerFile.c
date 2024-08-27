#include<stdio.h>
int main(){
    int a,b,temp=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i =a+1;i<b;i++){
        for (int j =2;j<i;j++){
if(i%j==0){
    temp++;
}
        }
        if(temp==0){
            printf("%d\n",i);
        }
    }
}