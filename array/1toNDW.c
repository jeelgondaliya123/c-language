#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter a value :");
	scanf("%d",&n);
	do{
		printf("\n%d",i);
		i++;
	}while(i<=n);
}