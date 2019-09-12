#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,g,f,r;
	printf("enter coeficient of x");
	scanf("%f",&a);

	printf("enter coeficient of y");
	scanf("%f",&b);

	printf("enter constant");
	scanf("%f",&c);

	g=-a/2;
	f=-b/2;
	r=sqrt((g*g)+(f*f)-c);

	printf("the center of circle is (%f,%f)and radius is %f",g,f,r);
}


