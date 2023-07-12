#include<stdio.h>
#include<conio.h>
void main()
{
	int a ;
	clrscr();
	printf("enter a value :");
	scanf("%d",&a);
	if(a%5==0 && a%3==0)
	{
		printf("%d is divisible by 5 or 3 :");
	}
	else{
		printf("%d is not divisible by 5 or 3 :");
	}
	getch();
}