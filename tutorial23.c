#include <stdio.h>

int main(){
    int marks[2][4] = {{45, 2334, 2, 3}, {3, 2, 3, 3}};

/*for (int i = 0; i < 4; i++)
{
    printf("enter the value of %d element of the array\n",i);
    scanf("%d",&marks[1]);

}*/
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 4; j++)
    {
        /* code */
    

    printf("The value of %d,%d element of the array is %d\n", i, j, marks[i][j]);
    printf("%d",marks[i][j]);
    }
    printf("\n");
}

/*marks[0] =34;
printf("marks of student 1 is %d\n", marks[0]);
marks[0] =454;
marks[1] =54;
marks[2] =44;
marks[3] =45;
printf(" marks of student 2 is %d\n", marks[0]);*/
return 0;
}
