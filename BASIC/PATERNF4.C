#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=35;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=sp;j>=5;j--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf(" * ");
		}
		printf("\n");

	}
	getch();

}