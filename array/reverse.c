#include<stdio.h>
void main()
{
	char str1[50],str2[50];
	int i,j;
	printf("Enter a name: ");
	gets(str1);
	for(i=0;str1[i] !='\0';i++)
	{}
	for(j=0;j<i;j++)
	{
		str2[i]=str1[--i];
	}
	str2[i]='\0';
	printf("\nLenth is :%s",str2);
}