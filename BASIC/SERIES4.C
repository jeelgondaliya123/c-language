#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=1;
	clrscr();
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\t%d",i*a);
		a=a*2;
	}
	getch();
}