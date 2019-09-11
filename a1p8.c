#include<stdio.h>
int main()
{
	int a,y,z;
	printf("please enter the no");
	scanf("%d",&a);

	y=a%10;
	z=a+y;

	printf("the required no is %d",z);
}
