#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	fp=fopen("text.txt","w");
	printf("enter the data\n");
	while((ch!=getchar())!=EOF)
	{
		putc(ch,fp);
	}
	fclose(fp);
	fp=fopen("one.text","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}
