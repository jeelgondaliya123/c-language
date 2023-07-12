#include<stdio.h>
#include<conio.h>
void main(){
	int i,n;
	clrscr();
	printf("Enter a value :");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		printf("\n%d",i);
	}
	getch();
}