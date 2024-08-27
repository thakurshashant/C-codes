#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    for (int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d th row %d th element  ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }1
    }
     for (int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d th row %d th element  ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
for(int i = 0 ;i<3;i++){
    for(int j =0;j<3;j++){
        int sum = 0;
        for(int k =0;k<3;k++){
            sum = sum+a[i][k]*b[k][j];

        }
        c[i][j]=sum;
    }
}
for(int i =0;i<3;i++){
    for(int j = 0;j<3;j++){
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
return 0;

}