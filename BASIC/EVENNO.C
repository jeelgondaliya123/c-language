#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter a number :");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2){
		printf("\n%d",i);
	}
	getch();

}