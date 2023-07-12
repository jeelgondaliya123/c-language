#include<stdio.h>
void series()
{
  int i,n;
  printf("enter the value of n:");
  scanf("%d",&n);
  for(int i=1;i<=n;i*=2)
  {
    printf("\n%d\t",i);
  }
}
  int main()
  {
    printf("____________\n");
    series();
    printf("____________\n");
  }