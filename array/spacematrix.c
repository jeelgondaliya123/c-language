#include<stdio.h>
int main()
{
	int i,j,k[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a k[%d][%d]:",i,j);
			scanf("%d",&k[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(k[i][j]==0)
			{	printf("\t ");}
			else 
			{	printf("\t%d",k[i][j]);}
		}
		printf("\n");
	}
}