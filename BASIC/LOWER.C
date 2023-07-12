#include<stdio.h>
#include<conio.h>
void main()
{
	char ch,ascii,upper,lower;
	clrscr();
	printf("Enter your char :");
	scanf("%c",&ch);
	if(ch>= 'A' && ch<='Z'){
		ascii=ch+32;
		printf("Your character is :%c",ascii);
	}
	else if(ch>= 'a' && ch<= 'z'){
		ascii=ch-32;
		printf("\nYour character is :%c",ascii);
	}
	getch();
}