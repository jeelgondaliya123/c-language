// series 4
#include<stdio.h>
int main()
{
	int i,n,a=1,b=1,c;
	printf("Enter a number :");
	scanf("%d",&n);
	printf("%d",a);
	printf("\t%d",b);
	i=1;
	do{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
		i++;	
	}while(i<=n);
}