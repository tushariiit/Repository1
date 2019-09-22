#include<stdio.h>
int main()
{
	int i,n,x,s,y;
	printf("enter n");
	scanf("%d",&n);
	printf("enter %d nos",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
	        if(x%2==0)
		{
		   s=x;
                 }
	}
	printf("the required no is %d",s);
}
