#include<stdio.h>
int main()
{
	int x,i,n,y,s=0,t=0;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter %d numbers",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2==1)
		{
			t++;
			s=s+x;
			y=s/t;
		}
	}
	printf("the average of all odd no is %d ",y);
}

