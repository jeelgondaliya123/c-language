#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter a value :");
	scanf("%d",&a);
	if(a<32)
	{
		printf("%d student is fail :",a);
	}
	else{
		printf("%d student is pass :",a);
	}
	getch();
}