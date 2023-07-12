#include<stdio.h>
void series()
{ 
  int i,n,b=1;
  printf("enter value n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("\n%d",(i*b));
     b=b*2;
  }
     printf("\n");
}
   int main()
   {
     printf(",,,,,,,,,,,,,,,,,,,,,,,,,,\n");
     series();
     printf(",,,,,,,,,,,,,,,,,,,,,,,,,,\n");
   }