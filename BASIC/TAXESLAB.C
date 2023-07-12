#include<stdio.h>
#include<conio.h>
void main()
{
	int income;
	float tax;
	clrscr();
	printf("Enter your income :");
	scanf("%d",&income);
	if(income<=2500){
		tax =0;
		printf("tax is :%.2f",tax);
	}
	if(income>2500 && income<=5000){
		tax =(income-2500)*0.1;
		printf("\ntax is :%.2f",tax);
	}
	if(income>5000 && income<=10000){
		tax =(250 +((income -5000)*0.2));
		printf("\ntax is :%.2f",tax);
	}
	if(income>10000){
		tax =250 +1000 +((income-10000)*0.3);
		printf("\ntax is :%.2f",tax);
	}
	getch();
}