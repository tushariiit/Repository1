#include<stdio.h>
int main()
{
	int l,b,a,peri;
	printf("enter length of rectangle");
	scanf("%d",&l);

	printf("enter breadth of rectangle");
	scanf("%d",&b);

	a=l*b;
	peri=l+b;

	printf("the area and perimeter are : %d   %d",a,peri);
}
