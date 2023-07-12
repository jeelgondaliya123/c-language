#include<stdio.h>
int reverse()
{
	int n,rev;
	printf("enter number =");
	scanf("%d",&n);
	
	while(n>0)
	{
		rev=n%10;
		printf("%d",rev);
		n=n/10;
	}
	
}
int main()
{
	printf("This is reverse number program \n");
	reverse();
}
     
            
                