#include<stdio.h>
void odd()
{
   int i,t=0,n;
   printf("enter the value of n");
   scanf("%d",&n);
   for(i=1;i<=n;i+=2)
   {
     t=t+i;
     printf("\n%d",i);
   }
    printf("\n total:%d",t);
}
  int main()
  {
    printf("._._._._._._._._._._._._._._._._._._.\n");
    odd();
    printf("._._._._._._._._._._._._._._._._._._.\n");
  }
      