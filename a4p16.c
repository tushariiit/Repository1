#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<100;i++)
	{
		if(((i>=10&&i<29)||(i>=40&&i<59)||(i>=70&&i<89))&&i%2==0)
		{
			printf("%d,"i);
		}
	}
}
