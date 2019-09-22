#include<stdio.h>
int main()
{
	int n,x,i,y,s=0;
	printf("enter n");
	scanf("%d",&n);
	printf("enter %d nos",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2!=0)
		{
			y=x;
		
		        s=s+y;
		}
	}
	printf("the sum of odd no is %d",s);
}
