#include<stdio.h>
#include<conio.h>
void main()
{
	float unit,bill,paisa,amount,surcharge;
	clrscr();
	printf("Enter a unit :");
	scanf("%f",&unit);
	if (unit<=100)
	{
		bill =(float)(unit*0.60);
		printf("%.2f",bill);
	}
	else if(unit<=200)
	{
		bill =(float)(unit*0.80);
		printf("%.2f",bill);
	}
	else if(unit<=300)
	{
		bill =(float)(unit*0.90);
		printf("%.2f",bill);
	}
	getch();

}