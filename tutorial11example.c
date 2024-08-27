#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    /*check qualification for becomig chief minister*/

    int age, state, gender;
    printf("enter your age=");
    scanf("%d",&age);

       printf("\nenter your state number alphabetically=");
    scanf("%d",&state);

       printf("\nenter your gender number alphabetically=");
    scanf("%d",&gender);
    
    switch (age)
    {
    case 35:
        printf("\nyour age is eligible for becoming chief minister");
        switch (state)
        {
        case 9:
            printf("\nyour state is also right ");
            switch (gender)
            {
            case 2:
                printf("\nyou are eligible for becomig the chief minister of himachal pradesh");
                break;
                default:
                printf("\nbut your gender is not eliglible");
            
            }
            break;
            default:
            printf("\nyou're not pahadi");
        }
    break;
    default:
    printf("\nyour not eligble");
    
    }

    return 0;
}
