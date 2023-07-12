#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j;
    char c='A';
    clrscr();
    for(i='A';i<='E';i++){
	for(j='A';j<=i;j++){
		printf("\t%c",c);
		c++;
	}
	printf("\n");
    }

    getch();
}