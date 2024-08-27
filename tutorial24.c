#include<stdio.h>

int main()
{
   /* kms to miles
    inches to foots
    cm to inches
    pound to kgs
    inches to metres */
    char input;
    float kmstomiles=0.6231371;
    float inchestofoot=0.083333;
    float cmstoinches=0.393701;
    float poundstokgs=0.453952;
    float inchestometres=0.02544;
    float first,second;

    while (1)
    {
        printf("enter a input character,q to quit\n1.  kms to miles\n2.inches to foots\n3.cm to inches\n4.pound to kgs\n5.inches to metres\n");

        scanf("%c",&input);
        switch (input)
        {
        case 'q':   
        printf("quitting the program.....");    
            goto end;
            break;

        case'1':
        printf("enter the quantity in terms of first unit\n");
        scanf("%f",&first);        
        second=first * kmstomiles;
        printf("%f kms is equal to %f miles \n",first,second);
            break;

        case'2':
        printf("enter the quantity in terms of first unit\n");
        scanf("%f",&first);        
        second=first * inchestofoot;
         printf("%f inches is equal to %f  foot\n",first,second);
            break;

        case'3':
        printf("enter the quantity in terms of first unit\n");
        scanf("%f",&first);        
        second=first * cmstoinches;
         printf("%f cms is equal to %f inches \n",first,second);
            break;

        case'4':
        printf("enter the quantity in terms of first unit\n");
        scanf("%f",&first);
        second=first * poundstokgs;
         printf("%f pounds is equal to %fkgs\n",first,second);
            break;

        case'5':
        printf("enter the quantity in terms of first unit\n");
        scanf("%f",&first);        
        second=first * inchestometres;
         printf("%f  inches is equal to %f metres \n",first,second);
            break;


        default:
            break;
        }
    }
    end:

    return 0;
}
