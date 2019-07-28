#include<stdio.h>
#include<stdlib.h>

struct emp
{
	char name[10];
	int age;
};

void main()
{
	struct emp e;
	FILE *p,*q;
	p=fopen("test.txt","a");
	q=fopen("test.txt","r");
	printf("Enter the name and age\n");
	scanf("%s %d",e.name,&e.age);
	fprintf(p,"%s %d",e.name,e.age);
	fclose(p);
	do
	{
		fscanf(q,"%s %d",e.name,&e.age);
		printf("%s %d",e.name,e.age);
		printf("\n");
	}while(!feof(q));
	return;
}
