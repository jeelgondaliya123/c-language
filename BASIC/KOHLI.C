#include<stdio.h>
#include<conio.h>
void main()
{
	int a1 =42, a2 =30, a3 =47, a4 =20, A;
	int b1 =77, b2 =43, b3 =9, b4 =61,B;
	int c1 =26, c2 =1, c3 =2, c3 =100,C;
	int d1 =65, d2 =18, d3 =14, d4 =7,D;
	int e1 =76, e2 =26, e3 =70, e4 =11,E;
	clrscr();
	A =a1+(a2+a3-a4);
	B =b1+b2*b3-b4;
	C =(c1-c2)*c3+c4;
	D =(d1+d2-d3)*d4;
	E =e1+e2+e3*e4;
	printf("42+(30+47-20) =%d",A);
}
