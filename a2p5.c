#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,x,y,z;
	printf("enter coeficient of x of line");
	scanf("%f",&a);

	printf("enter coeficient of y of line");
	scanf("%f",&b);

	printf("enter constant");
	scanf("%f",&c);

	printf("enter x coordinate of point");
	scanf("%f",&d);

	printf("enter y coordinate of point");
	scanf("%f",&e);

	x=(a*d)+(b*e)+c;
	y=sqrt((a*a)+(b*b));
	z=x/y;

	printf("the distance between point and line is %f",z);
}
