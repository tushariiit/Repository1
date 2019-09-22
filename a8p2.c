#include<stdio.h>
int main()
{
	int i,x,n,y,s=0;
	printf("enter n:",n);
	scanf("%d",&n);
	printf("enter %d nos",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		y=((((x/10)*10)-((x/100)*100))/10);
		s=s+y;
	}
	printf("the sum is %d",s);
}
