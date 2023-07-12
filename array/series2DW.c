// series 2 
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number :");
	scanf("%d",&n);
	i=1;
	do{
	if(i%2==0){
		printf("\n%d",i*i);
	}
	else{
		printf("\t%d",i);
	}i++;
	}while(i<=n);
	
}