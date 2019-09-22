#include<stdio.h>
int main()
{
        int n,x,i,d=0,a,s=0;
                printf("givem n:");
        scanf("%d",&n);
        printf("enter %d numbers ",n);
        for(i=1;i<=n;i++)
        {
                scanf("%d",&x);
		
		
		s=s+x;
		while(x%2!=0)
		{
			d=d+x;
		}
	}

        printf("sum is %d",s);
}



