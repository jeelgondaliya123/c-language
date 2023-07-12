#include<stdio.h>
#include<conio.h>
void main()
{
	float basic,gross,hra ,da;
	clrscr();
	printf("Enter your basic salary :");
	scanf("%f",&basic);
	if(basic<5000)
	{
		hra =basic*0.08;
		da =basic*0.2;
	      /*	printf("\n%.2f",hra,da);*/
	}
	if(basic<=10000);{
		hra =basic*0.12;
		da =basic*0.3;
	      /*	printf("\n%.2f",hra,da);*/
	}
	if(basic<=15000);{
		hra =basic*0.15;
		da =basic*0.4;
	      /*	printf("\n%.2f",hra,da);*/
	}
	if(basic>15000);{
		hra =basic*0.2;
		da =basic*0.5;
	       /*	printf("\n%.2f",hra,da); */
	}
	gross =basic+hra+da;
	printf("hra :%.2f",hra);
	printf("\nda :%.2f",da);
	printf("\ngross :%.2f",gross);
	getch();
}