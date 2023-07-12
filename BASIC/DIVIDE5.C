#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter a value :");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("%d is divisible by 5 :",a);
	}
	else
	{
		printf("%d is not divisible by 5 :",a);
	}
	getch();
}