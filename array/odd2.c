// odd /even total

#include<stdio.h>
int main()
{
	int i,n,even=0,odd=0;
	printf("Enter a number :");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a value :");
		scanf("%d",&x[i]);
	}
	printf("\nPosition\tvalue");
	for(i=0;i<n;i++)
	{	
		printf("\n%d\t\t%d",i,x[i]);
		if(i%2==0)
		{	even=even+x[i];}
		if(i%2==1)
		{	odd=odd+x[i];}	
	}
		
	printf("\nTotal of even no:%d",even);
	printf("\nTotal of odd no:%d",odd);
}