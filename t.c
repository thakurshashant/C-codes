#include<stdio.h>


   void fn() 
   {
    printf("i love you\n");
    }



int main()
{

    int i;
    for ( i = 0; i < 5555; i++)
    {
        printf("%d\n", i);
        fn();
    }

    
    return 0;
}


