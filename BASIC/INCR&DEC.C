#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter your value :");
	scanf("%d",&a);
	printf("\n\t:%d",a++);
	printf("\n\t:%d",++a);
	printf("\n\t:%d",a++);
	printf("\n\t:%d",--a);
	printf("\n\t:%d",a--);
	printf("\n\t:%d",a--);
	printf("\n\t:%d",++a);
	printf("\n\t:%d",a--);
	printf("\n\t:%d",--a);
	printf("\n\t:%d",a++);
	printf("\n\t:%d",--a);
	printf("\n\t:%d",a++);
	getch();
}