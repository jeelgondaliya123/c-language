#include<stdio.h>
#include<conio.h>
void main()
{
	int a , b , c ;
	clrscr();
	printf("enter a value :");
	scanf("%d",&a);
	printf("enter b value :");
	scanf("%d",&b);
	printf("enter c value :");
	scanf("%d",&c);
	if(a>b)
	if(a>c)
	{
		printf("%d this value is largest:",a);
	}
	else{
		printf("%d this value is largest:",c);
	}
	if(b>a)
	if(b>c)
	{
		printf("%d this value is largest:",b);
	}
	else{
		printf("%d this value is largest:",c);
	}
      /*	if(c>a)
	if(c>b)
	{
		printf("%d this value is largest:",c);
	}
	else{
		printf("%d this value is largset:",b);
	} */
	getch();
}