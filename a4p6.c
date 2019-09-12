#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<100;i++)
	{
		if(i<20||i>50&&i<70||i>90)
		{
			printf("%d \t",i);
		}
	}
}
