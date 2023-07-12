#include<stdio.h>
int main()
{
	FILE *fp;
	
	//fp=fpopen("c:/users/sqwo14/desktop/lib/skill.text","+w");
	
	fp=fopen("skill.txt","w+");
	fprintf(fp,"welcome to skill qode-decode your skill...\n");
	fputs("you are entering to learning c language now..\n",fp);
	
	fclose(fp);
	
}
/*
r = open a text file to read mode
w = open a text file to write mode
a = open a text file to append mode
*/