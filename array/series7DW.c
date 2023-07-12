// series 7
#include<stdio.h>
int main()
{
	int n;
	float j=0.5,i;
	printf("Enter a number :");
	scanf("%d",&n);
	printf("%f",j);
	i=0.5;
	do{
		j=j+i;
		printf("\n%.1f",j);
		i++;	
	}while(i<=n);
}