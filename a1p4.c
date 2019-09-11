#include<stdio.h>
int main()
{
	int a,y;
	printf("enter the no");
        scanf("%d",&a);
        
        y=(a-(a%10))/10;
        
        printf("the required no is %d",y);
}	
