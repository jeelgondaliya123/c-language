#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k=65;
	clrscr();
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(j%2==0){
				printf("\t%c",k);
			}
			else{
				printf("\t%c",k+32);
			}
			k++;
		}
		printf("\n");
	}
	getch();

}