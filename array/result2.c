// Student Result

#include<stdio.h>
int main()
{
	int i,maths[5],sci[5],guj[5],eng[5],hindi[5],total=0;
	float per;
	char grade;
	for(i=0;i<5;i++)
	{
		printf("enter a maths:",i);
		scanf("%d",&maths[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("enter a sci:",i);
		scanf("%d",&sci[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("enter a guj:",i);
		scanf("%d",&guj[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("enter a eng:",i);
		scanf("%d",&eng[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("enter a hindi:",i);
		scanf("%d",&hindi[i]);
	}

	printf("\nMaths\tsci\tguj\teng\thindi\ttotal\tpercentag\tgrade");
	for(i=0;i<5;i++)
	{	total=maths[i]+sci[i]+guj[i]+eng[i]+hindi[i];
		per=total*100/500;
		printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%.2f",maths[i],sci[i],guj[i],eng[i],hindi[i],total,per);
	if(per>90){
		printf("\tA");}
	else if(per>70){
		printf("\t\tB");}
	else if(per>50){
		printf("\t\tC");}
	else if(per>32){
		printf("\t\tD");}
	else{
		printf("\t\tfail");}
	}
	
}