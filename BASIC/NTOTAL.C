#include<stdio.h>
#include<conio.h>
void main()
{
	int i,total=0;
	clrscr();
	for(i=1;i<=10;i++)
	{
		total=total+i;
		printf("\n%d",i);
	}
	printf("\nTotal is :%d",total);

	getch();
}