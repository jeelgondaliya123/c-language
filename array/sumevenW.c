//sum of even no.

#include<stdio.h>
int main()
{
	int i,total=0,n;
	printf("Enter a number :");
	scanf("%d",&n);
	i=2;
	while(i<=n){
		total=total+i;
		printf("\n%d",i);
		i+=2;
	}
	printf("Total is :%d",total);
}