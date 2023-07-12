#include<stdio.h>

void main()
{
  char str1[100],str2[100];
  int i,j,a=0;
  
  printf("enter string =");
  scanf("%[^\n]s",str1);
  
  for(a=0; str1[a]!='\0'; a++);
     j=a;
	 
  for(i=0; i<a; i++)
  {
    str2[i]=str1[--j];
  }  
  str2[i]='\0';

  printf("\nreverse string = %s",str2);
}
