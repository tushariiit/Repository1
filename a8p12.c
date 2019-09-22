#include<stdio.h>
int main()
{
	int i,n,x,y,s=0;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter %d no",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
			if(x<=90&&x>=30)
			{
				s=s+x;
			}
	}
	printf("the sum of no is %d ",s);
}
			
