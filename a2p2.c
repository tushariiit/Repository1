#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,y;
	printf("enter x coordinate of point 1");
	scanf("%f",&a);

	printf("enter y coordinate of point 1");
	scanf("%f",&b);

	printf("enter x coordinate of point 2");
	scanf("%f",&c);

	printf("enter y coordinate of point 2");
	scanf("%f",&d);

	y=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));

	printf("the required distance is %f",y);
}
