#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<100;i++)
	{
		if(((i%10)>5)&&((i%10)<8))
		{
			printf("%d \t",i);
		}
	}
}
