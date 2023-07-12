#include<stdio.h>
struct bill
{
int billno.
char name[50]
float rate,qty,amt,dis,billamt,gst,netbill;
};
int main()
{
  struct bill a[50];
  int i;
  for(i=0;i<2;i++)
  {
      printf("enter the bill no:");  
      scanf("%d",&a[i].billno.);
      printf("enter the name=");
      scanf("%s",&a[i].name);
      printf("enter rate=");
      scanf("%f",&a[i].rate);
      printf("enter qty=");
      scanf("%f",&a[i].qty);
      amt=rate*qty;
  }