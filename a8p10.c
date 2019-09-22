#include<stdio.h>
int main()
{
	int n,i,x,s=0,y,t=0;
	printf("enter value of n");
	scanf("%d",&n);
	printf("enter %d no",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(x%2==1)
		{
			
			t++;
		}	
	}
		printf("%d",t);
	
	
}
