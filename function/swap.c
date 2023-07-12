#include<stdio.h>
float swap(float x,float y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("swap  is = %.2f\nswap  is = %.2f",x,y);
}
int main()
{
	float x,y;
	
	printf("enter A = ");
	scanf("%f",&x);
	printf("enter B = ");
	scanf("%f",&y);
	
	swap(x,y);
}