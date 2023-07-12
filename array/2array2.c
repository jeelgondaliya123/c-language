#include<stdio.h>
int main()
{
  int a[3][3],b[3][3],c[3][3];
  int i,j;
 
  printf("\n1st matrix : \n");
  for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
          printf("value of [%d][%d] = ",i,j);
          scanf("%d",&a[i][j]);
      }
  }
  
  printf("\n2nd matrix : \n");
  for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
          printf("value of [%d][%d] = ",i,j);
          scanf("%d",&b[i][j]);
      }
  }

     printf("\n");
  printf("1st matrix 2nd matrix addition \n");
  for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
          printf("%d ",a[i][j]);
      }
  
      printf("\t   ");

      for(j=0; j<3; j++)
      {
          printf("%d ",b[i][j]);
      }
     
      printf("\t ");
 
      for(j=0; j<3; j++)
      { 
         printf("%d ",a[i][j]+b[i][j]);
      } 
      printf("\n"); 
   }

}

