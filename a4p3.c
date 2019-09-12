#include<stdio.h>
int main()
{
	int i;
	for(i=2;i<100;i++)
	{
		if(i<50&&i%2==0||i>50&&i%2!=0)
		{
			printf("%d \t",i);
		}
	}
}	
