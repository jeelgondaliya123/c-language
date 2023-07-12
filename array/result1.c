// array result

#include<stdio.h>
int main()
{
	int i,n[5],a[5],b[5],c[i];
	//for(i=0;i<5;i++)
	//{
//		printf("Enter a name:",i);
//		scanf("%c",&n[i]);
//	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("enter a maths:",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("enter a sci:",i);
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("enter a guj:",i);
		scanf("%d",&c[i]);
	}
	printf("\nMaths\tsci\tguj");
	for(i=0;i<5;i++)
	{
		printf("\n%d\t%d\t%d",a[i],b[i],c[i]);
	
	}
	
}