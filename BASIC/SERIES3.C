#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,n;
    clrscr();
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i*=2){
	printf("\t%d",i);
    }
    getch();
}