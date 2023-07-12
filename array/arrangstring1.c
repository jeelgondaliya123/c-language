#include<stdio.h>
#include<string.h>
void main()
{
  char str[100];
  int i,j,a;
  
  printf("enter the name = ");
  scanf("%[^\n]s",&str);
  
  for(i=0; str[i]!='\0'; i++);
  
  printf("legnth = %d\n",i);
  a=i;
  
  for(j=0; j<(i/2); j++)
  {
	  printf("%c%c",str[j],str[--a]);
  }
  if(i%2!=0)
  {
	  printf("%c ",str[(i/2)]);
  }
}