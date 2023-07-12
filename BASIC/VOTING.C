#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("Enter your age :");
	scanf("%d",&age);
	if (age<18)
	{
		printf("%d you are not eligibile for voting");
	}
	else {
		printf("%d you are eligible for voting");
	}
	getch();
}