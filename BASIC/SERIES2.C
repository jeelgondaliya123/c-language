#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	if(i%2==0)
	{
		printf("\t%d",i*i);
	}
	else{
		printf("\t%d",i);
	}
	getch();
}