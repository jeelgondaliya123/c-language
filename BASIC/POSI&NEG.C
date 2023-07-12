#include<stdio.h>
#include<conio.h>
void main()
{
	int a ;
	clrscr();
	printf("enter a value :");
	scanf("%d",&a);
	if(a<0)
	{
		printf("%d is negative no:",a);
	}
	else{
		printf("%d is positive no:",a);
	}
	getch();
}