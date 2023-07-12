#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,j;
    clrscr();
    for(i=0;i<=4;i++){
	for(j=i;j>=0;j--){
		printf("\t%d",5-j);
	}
	printf("\n");
    }

    getch();
}