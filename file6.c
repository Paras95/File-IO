#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE* fp;
	char ch;
	fp=fopen("test.txt","w");
	int lineCount=0,c;
	printf("Enter the data\n");
	while((ch=getc(fp))!=EOF)
	{
		putc(ch,fp);
	}
	fclose(fp);
	while((c=getc(fp))!=EOF)
	{
		if(c=='\n')
		{
			++lineCount;
		}
	}
	fclose(fp);
	printf("%d",lineCount);
	//putc(c,stdout);
	return 0;
}
