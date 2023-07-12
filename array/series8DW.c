// series 8
#include<stdio.h>
int main()
{
	char i,n;
	i=0;
	do{
	if(i%4==0){
		printf("\t%c",i+65);
	}
	else{
		printf("\t%c",i+97);
	}
		i+=2;	
	}while(i<=24);
}