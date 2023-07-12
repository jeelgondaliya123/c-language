#include<stdio.h>
int main()
{
	int i,j,k[5][5];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(i==j)
		{	printf("\t%d",1);}
		else{
			printf("\t%d",0);
		}}
		printf("\n");
	}
}