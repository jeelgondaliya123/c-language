#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	clrscr();
	printf("Enter a value :");
	scanf("%d",&n);
       //	printf("Enter a plus value :");
       //	scanf("%d",&p);
	for(i=-n;i<=n;i++)
	{
		printf("\n%d",i);
	}
	getch();
}