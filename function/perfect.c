#include<stdio.h>
int perfect()
{
	int i,n,sum=0;
	printf("enter number =");
	scanf("%d",&n);
	
	for(i=1; i<n; i++)
	{   
		if(n%i==0)
		{
			sum=sum+i;
			{
				printf("%d+ ",i);
			}
		}
	}
	if(sum==n)
	{
		printf("\n\t%d is a perfect number",n);
	}
	else
	{
		printf("\n\t%d is a not perfect number",n);
	}
		
}
int main()
{
	printf("This is perfect number program \n");
	perfect();
}
   