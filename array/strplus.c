
#include<stdio.h>
int main()
{
  char str1[100],str2[100];
  int i,j;
  
  printf("enter string1 =");
  scanf("%[^\n]s",str1);
  
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