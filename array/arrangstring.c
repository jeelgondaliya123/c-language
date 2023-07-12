#include<stdio.h>
int main()
{
	char x[50];
	int i,j,k;
	printf("Enter a string :");
	scanf("%s",&x);
	i=0;
	while(x[i]!='\0'){
		i++;
	}
	j=i-1;
	printf("\nLength is :%d",i);
	printf("\nYour string is :");
	for(k=0;k<i/2;k++)
	{
		printf("%c%c",x[k],x[j]);
		j--;
	}
	if(i%2!=0)
	{
		printf("%c",x[i/2]);
	}
}