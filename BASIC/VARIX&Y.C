#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("Enter your x value :");
	scanf("%d",&x);
	printf("Enter your y value :");
	scanf("%d",&y);
	if(x<2000 || x>3000)
	{
		printf("\n%d X value is printed ",x);
	}
	if(y>100 && y<500){
		printf("\n%d Y value is printed ",y);
	}
	getch();
}