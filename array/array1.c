// array program
#include<stdio.h>
int main()
{
	int i,sum;
	int x[]={11,22,33,44,55,66,77,88,99};
	int y[]={99,88,77,66,55,44,33,22,11};
	i=0;
	while(i<9)
	{
		printf("\n%d",x[i]);
		printf("\t%d",y[i]);
		printf("\t%d",(x[i]+y[i]));
		i++;
	}
	
}