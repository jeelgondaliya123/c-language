#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	clrscr();
	k=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
		if(k%2==1){
			printf("\t1");
		}
		else{
			printf("\t0");
		}
		k++;
		}
		printf("\n");
	}
	getch();
}