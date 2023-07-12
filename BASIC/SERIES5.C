#include<stdio.h>
#include<conio.h>
void main ()
{
	int ch;
	clrscr();
	for(ch='A';ch<='Z';ch+=2)
	{
		printf("\n%c",ch);
	}
	getch();
}