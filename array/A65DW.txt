// A-65 to Z-90
#include<stdio.h>
int main()
{
	int i,n;
	i='A';
	do{
		printf("\n%c",i);
		printf("\t%d",i);
		i++;
	}while(i<='Z');
}