#include<stdio.h>

 void main()
{
  char str1[50],str2[50];
  int i,j;
  
  printf("enter string1 =");
  scanf("%s",str1);
  
  printf("enter string2 =");
  scanf("%s",str2);
  
  for(i=0; str1[i]!='\0'; i++);
  
  for(j=0; str2[j]!='\0'; j++)
  {
	  str1[i++]=str2[j];
  }
  
  str1[i]='\0';
  printf("\nconnect string = %s",str1);
  
}