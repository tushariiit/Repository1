#include<stdio.h>
int main()
{
	int i,n,y,x;
	float u,s=0,t;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter %d no",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2==0)
		{
			y=x*i;
			t=t+i;
			s=s+y;
			
		}
	}
	u=s/t;
	printf("the avg of weighted mean of even no is %f",u);
}
		

