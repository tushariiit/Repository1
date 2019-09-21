#include<stdio.h>
void main()
{
	int p=6,q=1;
	for(int a=1;a<=7;a++)
	{
		for(int b=1;b<=p;b++)
		{
			printf("O");
		}
		printf("****");
		for(int c=1;c<=q;c++)
		{
			printf("*");
		}
		for(int d=1;d<=9;d++)
		{
			printf("O");
		}
		p--;
		q++;
		printf("\n");
	}
	for(int e=1;e<=2;e++)
	{
		for(int w=1;w<=20;w++)
		{
			printf("*");
		}
		printf("\n");
	}

}
