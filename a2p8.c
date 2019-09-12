#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,y,A;
	printf("enter the length of first side");
	scanf("%f",&a);

	printf("enter the length of second side");
	scanf("%f",&b);

	printf("enter the length of third side");
	scanf("%f",&c);

	y=((b*b)+(c*c)-(a*a))/2*b*c;
        A=acos(y);

	printf("the angle A is %f",A);
}
