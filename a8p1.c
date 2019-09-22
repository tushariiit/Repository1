#include<stdio.h>
int main()
{
	int n,i,x,s,y=0;
	printf("give n:");
	scanf("%d",&n);
	printf("enter %d nos",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		s=x%10;
		y=y+s;
	}
	printf("the sum is :%d",y);
}



