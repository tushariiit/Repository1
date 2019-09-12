#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,d,e,f,x,y,z,s,t,q;
	printf("enter x coordinate of point 1");
	scanf("%f",&a);

	printf("enter y coordinate of point 1");
	scanf("%f",&b);

	printf("enter x coordinate of point 2");
	scanf("%f",&c);

	printf("enter y coordinate of point 2");
	scanf("%f",&d);
    
        printf("enter x coordinate of point 3");
	scanf("%f",&e);

	printf("enter y coordinate of point 3");
	scanf("%f",&f);
        
        x=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));

        y=sqrt(((c-e)*(c-e))+((d-f)*(d-f)));

        z=sqrt(((e-a)*(e-a))+((f-b)*(f-b)));

        s=(x+y+z)/2;
	q=s*(s-x)*(s-y)*(s-z);
	t=sqrt(q);

        printf("the area of triangle is %f",t);
}

