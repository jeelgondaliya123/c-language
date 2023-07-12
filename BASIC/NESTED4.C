#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i='A';i<='E';i++){
		for(j='A';j<='E';j++){
			printf("\t%c",i,j);
		}
		printf("\n");
	}
	getch();
}