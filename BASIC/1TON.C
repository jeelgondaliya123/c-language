#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter a value :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\n%d",i);
	}
	getch();
}