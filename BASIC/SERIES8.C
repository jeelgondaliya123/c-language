#include<stdio.h>
#include<conio.h>
void main ()
{
    char i,n,ch;
    clrscr();
    for(i=0;i<=24;i+=2)
    {
	if(i%4==0)
	{
		printf("\t%c",i+65);
	}
	else{
		printf("\t%c",i+97);
	}
    }

    getch();
}