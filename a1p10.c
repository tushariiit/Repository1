#include<stdio.h>
int main()
{
	int a,z,x,t,y; 
	printf("enter the no");
	scanf("%d",&a);

	
	z=(a/100)*100;
	x=(a%10)*10;
	t=(a%100)/10;

	y=z+x+t;
	printf("the answer is %d",y);
}

