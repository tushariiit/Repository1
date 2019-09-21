#include<stdio.h>
void main()
{
	int p=66;
	for(int a=97;a<=101;a++)
	{
		for(int b=97;b<=a;b++)
		{
			printf("%c",b);
		}
		for(int m=p;m<=70;m++)
		{
			printf("%c",m);
		}
		printf("\n");
		p++;
	}
}
