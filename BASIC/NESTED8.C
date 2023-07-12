#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j;
    char c='A';
    clrscr();
    for(i=1;i<=5;i++){
	for(j=1;j<=5;j++){
		printf("\t%c",c);
		c++;
	}
	printf("\n");
    }

    getch();
}