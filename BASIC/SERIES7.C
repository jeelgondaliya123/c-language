#include<stdio.h>
#include<conio.h>
void main ()
{
    float j=0.5,i;
    int n;
    clrscr();
    printf("Enter a number :");
    scanf("%d",&n);
    printf("%.1f",j);
    for(i=0.5;i<=n;i++){
		j=j+i;
		printf("\t%.1f",j);

    }
    getch();
}