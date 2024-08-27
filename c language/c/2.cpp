#include<stdio.h>
int main()
{
	float radius,area;
	printf("enter radius of circle\n");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("area of circle :%0.4f\n",area);
	return 0;
}
