// series 4
#include<stdio.h>
int main()
{
	int i,n,a=1;
	printf("Enter a number :");
	scanf("%d",&n);
	i=1;
	do{
		printf("\n%d",i*a);
		a=a*2;
		i++;	
	}while(i<=n);
}