#include<stdio.h>
int main()
{
	char str1[50],str2[50];
	int i,k,j;
	printf("enter string =");
	scanf("%s",str1);
	for(j=0; str1[j]!='\0'; j++);
	k=j;
	for(i=0; i<j; i++)
  	{
    		str2[i]=str1[--k];
  	}  
  	str2[i]='\0';
  	printf("\nReverse = %s",str2);
}