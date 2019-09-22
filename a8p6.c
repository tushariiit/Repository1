#include<stdio.h>
int main()
{
	int i,x,n,s=0,y;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter %d nos");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		y=(((x/100)*100)+((x%10)*10)+((x%100)/10));
		s=s+y;
	}
	printf("the sum is %d",s);
}


