#include<stdio.h>
#define n 5
int dis(int a[])
{	
	int max=a[0],min=a[0];
	
	for(int i=0; i<n; i++)
	{
		printf("\n%d ",a[i]);
	}
	
	for(int i=1; i<n; i++)
	{
		if(max < a[i])
		{
			max=a[i];
		}
	}
		printf("\nmaximum number = %d ",max);
	
	fo(int i=0; i<n; i++)
	{
		if(min > a[i])
		{	
			min=a[i];
		}
	}
		printf("\nminimum number number = %d ",min);
}
int main()

{
	int a[n],i;
	for(i=0; i<n; i++)
	{
		printf("enter =",i);
		scnf("%d",&a[i]);
	}
	dis(a);
}