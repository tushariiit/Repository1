#include<stdio.h>
int main()
{
	int a,y,z,x,t;
	printf("enter the no");
        scanf("%d",&a);

        y=a/100;
        z=y*10;
        x=a%10;
        t=z+x;
        printf("the required no is %d",t);
}