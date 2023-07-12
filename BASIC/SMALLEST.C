#include<stdio.h>
#include<conio.h>
void main()
{
	int a ,b;
	clrscr();
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	if(a<b)
	{
		printf("%d is smallest no :",a);
	}
	getch();
}