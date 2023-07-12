#include<stdio.h>
int main()
{
	int i,j,k[5][5],total=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a k[%d][%d]:",i,j);
			scanf("%d",&k[j][i]);
		}
	}printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",k[i][j]);
		}
		printf("\n");
	}
}