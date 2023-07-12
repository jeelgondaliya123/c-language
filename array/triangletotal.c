#include<stdio.h>
int main()
{
	int i,j,n,k[5][5],total=0,total1=0,total2=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a k[%d][%d]:",i,j);
			scanf("%d",&k[i][j]);
		}
	}printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",k[i][j]);
			if(i==j)
			{	total=total+k[i][j];}
			else if(i<j)
			{	total1=total1+k[i][j];}
			else if(j<i)
			{	total2=total2+k[i][j];}
		}
		printf("\n");
	}
	printf("\nTotal of diaognle elements :%d",total);
	printf("\nTotal of upper triangle elements :%d",total1);
	printf("\nTotal of lower triangle elements :%d",total2);
}