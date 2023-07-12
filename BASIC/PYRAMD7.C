#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k=1;
	clrscr();
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			k++;
			if(i%2==0){
				printf("\t%c",k+95);
			}
			else{
				printf("\t%c",k+63);
			}

		}
		printf("\n");
	}
	getch();

}