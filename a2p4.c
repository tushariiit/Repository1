#include<stdio.h>
#include<math.h>
int main()
{
	float m;
	float a,b,c;
        printf("enter coeficient of x");
	scanf("%f",&a);

	printf("enter coeficient of y");
	scanf("%f",&b);
        
	printf("enter constant");
	scanf("%f",&c);	
	m=-(a/b);

	printf("the slope of line ax+by+c=0 is %f",m);
}

