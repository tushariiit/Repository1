#include<stdio.h>
int main()
{
	int i,n,s=0,x,y;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter %d no",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if((x%10)<(x%100)/10)
		{
			y=((x/100)*100)+((x%10)*10)+((x%100)/10);
			s=s+y;
		}
		else
			s=s+x;
	}
	printf("the sum of no is %d",s);
}
