#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,total=0;
	clrscr();
	printf("Enter your number :");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		total=total+i;
		printf("\n%d",i);
	}
	printf("\nTotal is :%d ",total);
	getch();
}