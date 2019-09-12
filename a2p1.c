#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,x,t;
	printf("enter first side");
	scanf("%f",&a);

	printf("enter second side");
	scanf("%f",&b);

	printf("enter third side");
	scanf("%f",&c);

	s=(a+b+c)/2;
	x=s*(s-a)*(s-b)*(s-c);
	t=sqrt(x);

	printf("the area is %f",t);
}
