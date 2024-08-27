#include<stdio.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
    /*%10.4 means 10 character space in 4 decimal points 
    2 if we print 5.4 is displays 6 charachter only as if rhe number of character asasigned is less then the actual number it prints the actual number only
    3 if we inlcude %-10.4f it means the space assigned will be given after the number */
    int a =8;
    float b = 7.333;
    printf("hello world");
    printf("\nthe value of a is %d and the value of b is  %10.4f  thnis",a , b);
      printf("\nthe value of a is %d and the value of b is  %-10.4f  thnis\n",a , b);



    const float c=7.888;
    //c=9.88;  //wrong as constant value is already assigned  
    /*using \\ it prints onle one back slash*/
    printf(" my backslash \\%f",PI);
    

    
    

    return 0;
}
