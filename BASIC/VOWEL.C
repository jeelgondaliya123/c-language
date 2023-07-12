#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter your ch :");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
		printf("\nYour character is vowel");
	}
	else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
		printf("%c Your character is vowel");
	}
	else {
		printf("%c Your character is consonant");
	}
	getch();
}