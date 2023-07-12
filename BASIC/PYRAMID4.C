#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j,k=0;
    clrscr();
    for(i=1;i<=5;i++){
	for(j=1;j<=i;j++){
		printf("\t%d",k+=1);
	}
	printf("\n");
    }

    getch();
}