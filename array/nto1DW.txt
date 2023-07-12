#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a value :");
	scanf("%d",&n);
	i=n;
	do{
		printf("\n%d",i);
		i--;
	}while(i>=1);
}