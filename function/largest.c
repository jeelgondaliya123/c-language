#include<stdio.h>
int largest()
{
	float a,b;
	printf("enter the A = ");
	scanf("%f",&a);
	printf("enter the B = ");
	scanf("%f",&b);
	
	if(a>b)
	{
		printf("largest number = %.2f",a);
	}
	else
	{
		printf("large number = %.2f",b);
	}
	
}
int main()
{
	printf("find the largest number\n");
	largest();
	printf("\nend");
}