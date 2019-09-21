#include<stdio.h>
void main()
{
	for(int a=1;a<=5;a++)
	{
		if(a%2==1)
	        {
			for(int c=1;c<=20;c++)
			{
				printf("*");
	         	}
			printf("\n");
		}
		else
		{
			for(int d=1;d<=11;d++)
			{
				printf("O*");
			}
			printf("\n");
		}
	}
}
