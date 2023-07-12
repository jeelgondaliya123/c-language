#include<stdio.h>
int main()
{
      int a[5]={10,20,30,40,50};
      int i,*p;
      p=&a;
      for(i=0;i<5;i++)
      {
           printf("\n%d%t%u",*(p+i),(p+i));
      }
}
