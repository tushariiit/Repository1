#include<stdio.h>
int main()
{
	int n,x,s=0,y,t,i;
	printf("enter n");
	scanf("%d",&n);
	printf("enter %d no",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);

			y=x*i;
		
			s=s+y;
		
	
	}
	printf("the weighted mean is %d",s);
}

