#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<100;i++)
	{
		if((i>10&&i<20)||(i>30&&i<40)||(i>50&&i<60)||(i>70&&i<80)||(i>90&&i<100))
		{
			printf("%d \t",i);
		}
	}
}
