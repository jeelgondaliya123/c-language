#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a=1,b=1,c;
	clrscr();
	printf("Enter a number :");
	scanf("%d",&n);
	printf("%d",a);
	printf("\t%d",b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	}
	getch();
}