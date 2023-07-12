#include<stdio.h>
int main()
{
 char a[50],b[20];
 int i=0,j=0;
 printf("enter string 1:");
 gets(a);
 printf("enter string 2:");
 gets(b);
 while(a[i] !='\0') {
    i++;
    }
 while(b[j] !='\0') {
  a[i++]=b[j++];
   }
   a[i]='\0';
  printf("merge string is:%s",a);
}
	