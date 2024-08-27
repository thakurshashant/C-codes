#include<stdio.h>
/*it is the alternative to if statements as it is less messy 
switch means to value of variable . if that matches then print statement
if nothing matches then it prints the default ,
and if ypu put break before default ,and condtition is true it does not 
prints or goes to default*/
int main(int argc, char const *argv[])
{
    int age, marks;
    printf("enter your age\n");
    scanf("%d",&age);

    printf("enter your marks\n ");
    scanf("%d",&marks);

    printf("your entered age is %d\n",age);
    switch (age)
    {
    case 3:
        printf("the age is 3\n");
        switch (marks)
        {
        case 45:
            printf("your marks are 45");
            break;
        
        default:
            printf("your marks are not 45");
        }
        break;
    case 13:
    printf("the age is 13");
    break;    
    
    default:
     printf("age is not 3 and 13");
     break;
    }         
    return 0;
}
