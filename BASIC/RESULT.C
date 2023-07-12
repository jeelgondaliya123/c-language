#include<stdio.h>
#include<conio.h>
void main()
{
	float gujarati,marks,total,english,account,stat, percentage,grade;
	clrscr();
	printf("Enter your gujarati marks :");
	scanf("%f",&gujarati);
	printf("Enter your english marks :");
	scanf("%f",&english);
	printf("Enter your stat marks :");
	scanf("%f",&stat);
	printf("Enter your account marks :");
	scanf("%f",&account);
	total =gujarati+english+stat+account;
	printf("\nyour total is :%.2f",total);
	percentage = total/400*100;
	printf("\nyour percentage is :%.2f",percentage);
	if(percentage<35)
	{
		printf(" \nyour result is : fail ");
	}
	else if(35<percentage && percentage<=45){
		printf(" \nyour result is grade : D ");
	}
	else if(45<percentage && percentage<=60){
		printf(" \nyour result is grade : C ");
	}
	else if(60<percentage && percentage<=75){
		printf(" \nyour result is grade : B ");
	}
	else if(percentage>75){
		printf(" \nyour result is grade : A ");
	}
	getch();

}