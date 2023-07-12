#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=30;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
		sp--;
	}
	sp+=5;
	for(i=5;i>=1;i--)
	{
		for(j=sp;j>=5;j--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
		sp++;
		}
	getch();

}