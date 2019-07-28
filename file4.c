#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE* fp;
	char ch;
	fp=fopen("one.txt","w");
	printf("Enter the data");
	while((ch==getc(stdin))!=EOF)
	{
		putc(ch,fp);
	}
	fclose(fp);
	fp=fopen("one.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		putc(ch,stdout);
	}
	return;
}
