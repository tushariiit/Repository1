#include<stdio.h>
int main()
{
	int a,z,x,y;
	printf("please enter a no");
        scanf("%d",&a);
        
        z=a%10;
        x=(a%100)/10;
        y=z+x;

	printf("the required sum is %d",y);
}
        	
