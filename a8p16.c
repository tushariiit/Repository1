#include<stdio.h>
int main()
{
	int i,n,t,x,s=0,y;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter %d no",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2==0)
		{
			t++;
			y=x*t;
			s=s+y;
		}
	}
	printf("the value of w m for even no is %d",s);
}
