#include<stdio.h>
int i;

int display(int a[])
{
	for(i=0; i<5; i++)
	{
		if(i==0)        //(i==4)
		{
			printf("\n%d ",a[i]);
		}
		else
		{
			printf("\n%d = %d ",a[i],a[i]+a[i-1]);    //a[i+1]
		}
	}
}
int main()
{
	int a[5];
	
	for(i=0; i<5; i++)
	{
		printf("enter = ");
		scanf("%d",&a[i]);
	}
	display(a);
}