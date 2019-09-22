#include<stdio.h>
int main()
{
	int i,x,y,s=0,n;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter %d nos",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
                y=(((x/100)*10)+(x%10));
                s=s+y;
         }
          printf("the sum is %d",s);
}
