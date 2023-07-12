#include<stdio.h>

void main()
{
	char str1[50],str2[50],str3[50];
	int i,j,k=0;
  
	printf("Enter string1 :");
	scanf("%s",str1);
  
	printf("Enter string2 :");
	scanf("%s",str2);
  
	for(i=0; str1[i]!='\0'; i++){}
  
	for(j=0; str2[j]!='\0'; j++){}
	str3[k]=str1[i]+str2[j];
	printf("\n%s\t%s\t%s",str1,str2,str3);
}