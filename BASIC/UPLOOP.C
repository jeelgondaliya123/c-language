#include<stdio.h>
#include<conio.h>
void main()
{
	char i;
	clrscr();
	for(i=65;i<=90;i++)
	{
		printf("\t%c-%c",i,i+32);
	}
	getch();
}