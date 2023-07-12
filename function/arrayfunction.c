//find max and mini number
#include<stdio.h>
#define n 5
int dis(int a[])
{	
	int max=a[0],min=a[0];
	
	for(int i=0; i<n; i++)
	{
		printf("\n%d ",a[i]);
	}
	
	for(int i=0; i<n; i++)
	{
		if(max < a[i])
		{
			max=a[i];
		}
	}
		printf("\nlargest number = %d ",max);
	
	for(int i=0; i<n; i++)
	{
		if(min > a[i])
		{	
			min=a[i];
		}
	}
		printf("\nsmallest number = %d ",min);
}
int main()

{
	int a[n],i;
	for(i=0; i<n; i++)
	{
		printf("enter =",i);
		scanf("%d",&a[i]);
	}
	dis(a);
}