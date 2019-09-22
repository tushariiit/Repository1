#include<stdio.h>
int main()
{
	int i,n,y,s,x;
	printf("enter value of n");
	scanf("%d",&n);
	printf("enter %d numbers",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if((x%10)%3==0)
		{
			s=s+x;
		}
	}
	printf("%d",s);
}


			
