#include <stdio.h>
/*this is example of call by reference here the address of the orginial/actual/arguemensts
 is copied by using & and then assigned to /copied by using pointers as int*xand  if 
 the address of any variable is avaible to us we can change the value at original
 by using call by reference */

void swap(int *x, int *y) /*function definition to swap the values*/
{
    int temp;
    temp = *x; /*save the value at address x*/
    *x = *y;   /*put y into x*/
    *y = temp; /*put temp into y*/
    return;
}
int main()
{
    int a = 34, b = 74;
    printf("the value of a is %d and b is %d\n", a, b);
    swap(&a, &b);
    printf("the value of a is %d and of b is %d", a, b);
    return 0;
}