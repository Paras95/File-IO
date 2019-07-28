#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	int len;
	fp=fopen("one.txt","r");
	if(fp==NULL)
	{
		printf("Error in open file\n");
	}
	fseek(fp,0,SEEK_END); //
	len=ftell(fp);   // long int ftell(FILE* stream)
	fclose(fp);
	printf("%d\n",len);
	return 0;
}
