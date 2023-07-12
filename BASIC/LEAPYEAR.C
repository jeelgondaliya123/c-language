#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter a year :");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("%d is leap year:",a);
	}
	else{
		printf("%d is not a leap year:",a);
	}
	getch();
}