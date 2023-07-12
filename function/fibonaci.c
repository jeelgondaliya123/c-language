#include<stdio.h>
int fibonaci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibonaci(n-1)+fibonaci(n-2);
	}
}
int main()
{
	int i,n;
	
	printf("enter the number = ");
	scanf("%d",&n);
	
	for(i=1; i<n; i++)
	{
		printf("%d ",fibonaci(i));
	}
}