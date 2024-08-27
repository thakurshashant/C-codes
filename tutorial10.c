#include<stdio.h>

int main()
{
    /*it first prints the if command if that is true then it doesnt prints other else , 
    2. if the if  statement is false then it moves to next statement and continues until
     else if statement continues and when else if ends it goes to else and if true prints it 
    otherwise everything is wrong dispalys nothing */
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    printf("your entered age is %d",age);
    if (age>=18)
    {
        printf("\nyou can vote ");
    }
    else if(age>=10){
    printf("\nyou are in your teenage");
    }
     else if(age>=3)
    {
        printf("\nyou are in school");
    }
        else{
        printf("\nyou cannot vote");
    }
    return 0;
}
