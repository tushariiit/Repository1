#include<stdio.h>
int main()
{
	int i,n,x,s=0,y;
	printf("enter n");
	scanf("%d",&n);
	printf("enter %d nos",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		y=x/10;
		s=s+y;
	}
	printf("the sum is %d",s);
}
